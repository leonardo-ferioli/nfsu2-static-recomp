#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_507(u8* __restrict R,Cpu& c);
u32 body_509(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x508,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x508,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_508(u8* __restrict R,Cpu& c);
u32 page_508(Cpu& c){return body_508(c.regs.data(),c);}
__attribute__((noinline)) u32 body_508(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x508000:goto L508000;
case 0x508003:c.instructions+=27;goto B508003;
case 0x508007:c.instructions+=26;goto B508007;
case 0x50800a:c.instructions+=25;goto B50800a;
case 0x50800b:c.instructions+=24;goto B50800b;
case 0x50800e:c.instructions+=23;goto B50800e;
case 0x508011:c.instructions+=22;goto B508011;
case 0x508014:c.instructions+=21;goto B508014;
case 0x508016:c.instructions+=20;goto B508016;
case 0x50801a:c.instructions+=19;goto B50801a;
case 0x50801d:c.instructions+=18;goto B50801d;
case 0x508020:c.instructions+=17;goto B508020;
case 0x508023:c.instructions+=16;goto B508023;
case 0x508026:c.instructions+=15;goto B508026;
case 0x508029:c.instructions+=14;goto B508029;
case 0x50802c:c.instructions+=13;goto B50802c;
case 0x508030:c.instructions+=12;goto B508030;
case 0x508034:c.instructions+=11;goto B508034;
case 0x508037:c.instructions+=10;goto B508037;
case 0x50803a:c.instructions+=9;goto B50803a;
case 0x50803e:c.instructions+=8;goto B50803e;
case 0x508041:c.instructions+=7;goto B508041;
case 0x508044:c.instructions+=6;goto B508044;
case 0x508047:c.instructions+=5;goto B508047;
case 0x50804a:c.instructions+=4;goto B50804a;
case 0x50804c:c.instructions+=3;goto B50804c;
case 0x50804f:c.instructions+=2;goto B50804f;
case 0x508052:c.instructions+=1;goto B508052;
case 0x508057:goto L508057;
case 0x508059:c.instructions+=1;goto B508059;
case 0x50805f:goto L50805f;
case 0x508062:c.instructions+=105;goto B508062;
case 0x508066:c.instructions+=104;goto B508066;
case 0x508069:c.instructions+=103;goto B508069;
case 0x50806c:c.instructions+=102;goto B50806c;
case 0x508070:c.instructions+=101;goto B508070;
case 0x508073:c.instructions+=100;goto B508073;
case 0x508076:c.instructions+=99;goto B508076;
case 0x50807a:c.instructions+=98;goto B50807a;
case 0x508081:c.instructions+=97;goto B508081;
case 0x508088:c.instructions+=96;goto B508088;
case 0x50808a:c.instructions+=95;goto B50808a;
case 0x50808c:c.instructions+=94;goto B50808c;
case 0x50808f:c.instructions+=93;goto B50808f;
case 0x508092:c.instructions+=92;goto B508092;
case 0x508095:c.instructions+=91;goto B508095;
case 0x508098:c.instructions+=90;goto B508098;
case 0x50809c:c.instructions+=89;goto B50809c;
case 0x50809f:c.instructions+=88;goto B50809f;
case 0x5080a1:c.instructions+=87;goto B5080a1;
case 0x5080a3:c.instructions+=86;goto B5080a3;
case 0x5080a5:c.instructions+=85;goto B5080a5;
case 0x5080a7:c.instructions+=84;goto B5080a7;
case 0x5080aa:c.instructions+=83;goto B5080aa;
case 0x5080ad:c.instructions+=82;goto B5080ad;
case 0x5080af:c.instructions+=81;goto B5080af;
case 0x5080b2:c.instructions+=80;goto B5080b2;
case 0x5080b5:c.instructions+=79;goto B5080b5;
case 0x5080b9:c.instructions+=78;goto B5080b9;
case 0x5080bd:c.instructions+=77;goto B5080bd;
case 0x5080c0:c.instructions+=76;goto B5080c0;
case 0x5080c4:c.instructions+=75;goto B5080c4;
case 0x5080c6:c.instructions+=74;goto B5080c6;
case 0x5080c9:c.instructions+=73;goto B5080c9;
case 0x5080cb:c.instructions+=72;goto B5080cb;
case 0x5080cd:c.instructions+=71;goto B5080cd;
case 0x5080d0:c.instructions+=70;goto B5080d0;
case 0x5080d3:c.instructions+=69;goto B5080d3;
case 0x5080d6:c.instructions+=68;goto B5080d6;
case 0x5080d9:c.instructions+=67;goto B5080d9;
case 0x5080dc:c.instructions+=66;goto B5080dc;
case 0x5080e0:c.instructions+=65;goto B5080e0;
case 0x5080e3:c.instructions+=64;goto B5080e3;
case 0x5080e7:c.instructions+=63;goto B5080e7;
case 0x5080ea:c.instructions+=62;goto B5080ea;
case 0x5080ed:c.instructions+=61;goto B5080ed;
case 0x5080f1:c.instructions+=60;goto B5080f1;
case 0x5080f3:c.instructions+=59;goto B5080f3;
case 0x5080f5:c.instructions+=58;goto B5080f5;
case 0x5080f9:c.instructions+=57;goto B5080f9;
case 0x5080fb:c.instructions+=56;goto B5080fb;
case 0x5080ff:c.instructions+=55;goto B5080ff;
case 0x508103:c.instructions+=54;goto B508103;
case 0x508106:c.instructions+=53;goto B508106;
case 0x50810a:c.instructions+=52;goto B50810a;
case 0x50810d:c.instructions+=51;goto B50810d;
case 0x508111:c.instructions+=50;goto B508111;
case 0x508115:c.instructions+=49;goto B508115;
case 0x508117:c.instructions+=48;goto B508117;
case 0x50811a:c.instructions+=47;goto B50811a;
case 0x50811e:c.instructions+=46;goto B50811e;
case 0x508122:c.instructions+=45;goto B508122;
case 0x508125:c.instructions+=44;goto B508125;
case 0x508128:c.instructions+=43;goto B508128;
case 0x50812b:c.instructions+=42;goto B50812b;
case 0x50812e:c.instructions+=41;goto B50812e;
case 0x508131:c.instructions+=40;goto B508131;
case 0x508135:c.instructions+=39;goto B508135;
case 0x508138:c.instructions+=38;goto B508138;
case 0x50813c:c.instructions+=37;goto B50813c;
case 0x508143:c.instructions+=36;goto B508143;
case 0x508146:c.instructions+=35;goto B508146;
case 0x50814a:c.instructions+=34;goto B50814a;
case 0x50814f:c.instructions+=33;goto B50814f;
case 0x508156:c.instructions+=32;goto B508156;
case 0x508158:c.instructions+=31;goto B508158;
case 0x50815a:c.instructions+=30;goto B50815a;
case 0x50815e:c.instructions+=29;goto B50815e;
case 0x508160:c.instructions+=28;goto B508160;
case 0x508164:c.instructions+=27;goto B508164;
case 0x50816b:c.instructions+=26;goto B50816b;
case 0x50816d:c.instructions+=25;goto B50816d;
case 0x508171:c.instructions+=24;goto B508171;
case 0x508178:c.instructions+=23;goto B508178;
case 0x50817c:c.instructions+=22;goto B50817c;
case 0x50817f:c.instructions+=21;goto B50817f;
case 0x508183:c.instructions+=20;goto B508183;
case 0x508187:c.instructions+=19;goto B508187;
case 0x50818b:c.instructions+=18;goto B50818b;
case 0x50818f:c.instructions+=17;goto B50818f;
case 0x508196:c.instructions+=16;goto B508196;
case 0x50819a:c.instructions+=15;goto B50819a;
case 0x5081a1:c.instructions+=14;goto B5081a1;
case 0x5081a5:c.instructions+=13;goto B5081a5;
case 0x5081a7:c.instructions+=12;goto B5081a7;
case 0x5081aa:c.instructions+=11;goto B5081aa;
case 0x5081ab:c.instructions+=10;goto B5081ab;
case 0x5081b2:c.instructions+=9;goto B5081b2;
case 0x5081b9:c.instructions+=8;goto B5081b9;
case 0x5081bb:c.instructions+=7;goto B5081bb;
case 0x5081bd:c.instructions+=6;goto B5081bd;
case 0x5081c0:c.instructions+=5;goto B5081c0;
case 0x5081c4:c.instructions+=4;goto B5081c4;
case 0x5081c7:c.instructions+=3;goto B5081c7;
case 0x5081ca:c.instructions+=2;goto B5081ca;
case 0x5081cc:c.instructions+=1;goto B5081cc;
case 0x5081ce:goto L5081ce;
case 0x5081d2:goto L5081d2;
case 0x5081d5:c.instructions+=5;goto B5081d5;
case 0x5081d8:c.instructions+=4;goto B5081d8;
case 0x5081da:c.instructions+=3;goto B5081da;
case 0x5081de:c.instructions+=2;goto B5081de;
case 0x5081e1:c.instructions+=1;goto B5081e1;
case 0x5081e7:goto L5081e7;
case 0x5081e9:c.instructions+=1;goto B5081e9;
case 0x5081ef:goto L5081ef;
case 0x5081f2:c.instructions+=91;goto B5081f2;
case 0x5081f5:c.instructions+=90;goto B5081f5;
case 0x5081f8:c.instructions+=89;goto B5081f8;
case 0x5081fb:c.instructions+=88;goto B5081fb;
case 0x5081fd:c.instructions+=87;goto B5081fd;
case 0x508200:c.instructions+=86;goto B508200;
case 0x508207:c.instructions+=85;goto B508207;
case 0x50820e:c.instructions+=84;goto B50820e;
case 0x508210:c.instructions+=83;goto B508210;
case 0x508212:c.instructions+=82;goto B508212;
case 0x508215:c.instructions+=81;goto B508215;
case 0x508219:c.instructions+=80;goto B508219;
case 0x50821c:c.instructions+=79;goto B50821c;
case 0x50821f:c.instructions+=78;goto B50821f;
case 0x508222:c.instructions+=77;goto B508222;
case 0x508225:c.instructions+=76;goto B508225;
case 0x508227:c.instructions+=75;goto B508227;
case 0x508229:c.instructions+=74;goto B508229;
case 0x50822b:c.instructions+=73;goto B50822b;
case 0x50822d:c.instructions+=72;goto B50822d;
case 0x508230:c.instructions+=71;goto B508230;
case 0x508233:c.instructions+=70;goto B508233;
case 0x508235:c.instructions+=69;goto B508235;
case 0x508238:c.instructions+=68;goto B508238;
case 0x50823b:c.instructions+=67;goto B50823b;
case 0x50823e:c.instructions+=66;goto B50823e;
case 0x508241:c.instructions+=65;goto B508241;
case 0x508243:c.instructions+=64;goto B508243;
case 0x508246:c.instructions+=63;goto B508246;
case 0x508248:c.instructions+=62;goto B508248;
case 0x50824a:c.instructions+=61;goto B50824a;
case 0x50824d:c.instructions+=60;goto B50824d;
case 0x508250:c.instructions+=59;goto B508250;
case 0x508253:c.instructions+=58;goto B508253;
case 0x508256:c.instructions+=57;goto B508256;
case 0x508259:c.instructions+=56;goto B508259;
case 0x50825c:c.instructions+=55;goto B50825c;
case 0x50825e:c.instructions+=54;goto B50825e;
case 0x508261:c.instructions+=53;goto B508261;
case 0x508263:c.instructions+=52;goto B508263;
case 0x508265:c.instructions+=51;goto B508265;
case 0x508269:c.instructions+=50;goto B508269;
case 0x50826b:c.instructions+=49;goto B50826b;
case 0x50826f:c.instructions+=48;goto B50826f;
case 0x508273:c.instructions+=47;goto B508273;
case 0x508276:c.instructions+=46;goto B508276;
case 0x50827a:c.instructions+=45;goto B50827a;
case 0x50827d:c.instructions+=44;goto B50827d;
case 0x508280:c.instructions+=43;goto B508280;
case 0x508282:c.instructions+=42;goto B508282;
case 0x508285:c.instructions+=41;goto B508285;
case 0x508289:c.instructions+=40;goto B508289;
case 0x50828d:c.instructions+=39;goto B50828d;
case 0x508290:c.instructions+=38;goto B508290;
case 0x508293:c.instructions+=37;goto B508293;
case 0x508296:c.instructions+=36;goto B508296;
case 0x508299:c.instructions+=35;goto B508299;
case 0x50829c:c.instructions+=34;goto B50829c;
case 0x50829f:c.instructions+=33;goto B50829f;
case 0x5082a3:c.instructions+=32;goto B5082a3;
case 0x5082a5:c.instructions+=31;goto B5082a5;
case 0x5082a8:c.instructions+=30;goto B5082a8;
case 0x5082ac:c.instructions+=29;goto B5082ac;
case 0x5082ae:c.instructions+=28;goto B5082ae;
case 0x5082b0:c.instructions+=27;goto B5082b0;
case 0x5082b1:c.instructions+=26;goto B5082b1;
case 0x5082b4:c.instructions+=25;goto B5082b4;
case 0x5082b7:c.instructions+=24;goto B5082b7;
case 0x5082bb:c.instructions+=23;goto B5082bb;
case 0x5082c0:c.instructions+=22;goto B5082c0;
case 0x5082c2:c.instructions+=21;goto B5082c2;
case 0x5082c6:c.instructions+=20;goto B5082c6;
case 0x5082ca:c.instructions+=19;goto B5082ca;
case 0x5082cc:c.instructions+=18;goto B5082cc;
case 0x5082d0:c.instructions+=17;goto B5082d0;
case 0x5082d4:c.instructions+=16;goto B5082d4;
case 0x5082d8:c.instructions+=15;goto B5082d8;
case 0x5082db:c.instructions+=14;goto B5082db;
case 0x5082df:c.instructions+=13;goto B5082df;
case 0x5082e2:c.instructions+=12;goto B5082e2;
case 0x5082e6:c.instructions+=11;goto B5082e6;
case 0x5082e9:c.instructions+=10;goto B5082e9;
case 0x5082ed:c.instructions+=9;goto B5082ed;
case 0x5082f1:c.instructions+=8;goto B5082f1;
case 0x5082f3:c.instructions+=7;goto B5082f3;
case 0x5082f6:c.instructions+=6;goto B5082f6;
case 0x5082f9:c.instructions+=5;goto B5082f9;
case 0x5082fd:c.instructions+=4;goto B5082fd;
case 0x508301:c.instructions+=3;goto B508301;
case 0x508304:c.instructions+=2;goto B508304;
case 0x508307:c.instructions+=1;goto B508307;
case 0x50830a:goto L50830a;
case 0x50830d:c.instructions+=23;goto B50830d;
case 0x508311:c.instructions+=22;goto B508311;
case 0x508313:c.instructions+=21;goto B508313;
case 0x508316:c.instructions+=20;goto B508316;
case 0x508318:c.instructions+=19;goto B508318;
case 0x50831a:c.instructions+=18;goto B50831a;
case 0x50831d:c.instructions+=17;goto B50831d;
case 0x508320:c.instructions+=16;goto B508320;
case 0x508322:c.instructions+=15;goto B508322;
case 0x508325:c.instructions+=14;goto B508325;
case 0x508328:c.instructions+=13;goto B508328;
case 0x50832b:c.instructions+=12;goto B50832b;
case 0x50832f:c.instructions+=11;goto B50832f;
case 0x508333:c.instructions+=10;goto B508333;
case 0x508336:c.instructions+=9;goto B508336;
case 0x508339:c.instructions+=8;goto B508339;
case 0x50833b:c.instructions+=7;goto B50833b;
case 0x50833e:c.instructions+=6;goto B50833e;
case 0x508342:c.instructions+=5;goto B508342;
case 0x508344:c.instructions+=4;goto B508344;
case 0x508346:c.instructions+=3;goto B508346;
case 0x508349:c.instructions+=2;goto B508349;
case 0x50834c:c.instructions+=1;goto B50834c;
case 0x508351:goto L508351;
case 0x508353:c.instructions+=1;goto B508353;
case 0x508359:goto L508359;
case 0x50835c:c.instructions+=87;goto B50835c;
case 0x50835f:c.instructions+=86;goto B50835f;
case 0x508362:c.instructions+=85;goto B508362;
case 0x508365:c.instructions+=84;goto B508365;
case 0x508367:c.instructions+=83;goto B508367;
case 0x50836a:c.instructions+=82;goto B50836a;
case 0x508371:c.instructions+=81;goto B508371;
case 0x508378:c.instructions+=80;goto B508378;
case 0x50837a:c.instructions+=79;goto B50837a;
case 0x50837c:c.instructions+=78;goto B50837c;
case 0x50837f:c.instructions+=77;goto B50837f;
case 0x508383:c.instructions+=76;goto B508383;
case 0x508386:c.instructions+=75;goto B508386;
case 0x508389:c.instructions+=74;goto B508389;
case 0x50838c:c.instructions+=73;goto B50838c;
case 0x50838f:c.instructions+=72;goto B50838f;
case 0x508391:c.instructions+=71;goto B508391;
case 0x508393:c.instructions+=70;goto B508393;
case 0x508395:c.instructions+=69;goto B508395;
case 0x508397:c.instructions+=68;goto B508397;
case 0x50839a:c.instructions+=67;goto B50839a;
case 0x50839d:c.instructions+=66;goto B50839d;
case 0x50839f:c.instructions+=65;goto B50839f;
case 0x5083a2:c.instructions+=64;goto B5083a2;
case 0x5083a5:c.instructions+=63;goto B5083a5;
case 0x5083a8:c.instructions+=62;goto B5083a8;
case 0x5083ab:c.instructions+=61;goto B5083ab;
case 0x5083ad:c.instructions+=60;goto B5083ad;
case 0x5083b0:c.instructions+=59;goto B5083b0;
case 0x5083b2:c.instructions+=58;goto B5083b2;
case 0x5083b4:c.instructions+=57;goto B5083b4;
case 0x5083b7:c.instructions+=56;goto B5083b7;
case 0x5083ba:c.instructions+=55;goto B5083ba;
case 0x5083bd:c.instructions+=54;goto B5083bd;
case 0x5083c0:c.instructions+=53;goto B5083c0;
case 0x5083c3:c.instructions+=52;goto B5083c3;
case 0x5083c6:c.instructions+=51;goto B5083c6;
case 0x5083c8:c.instructions+=50;goto B5083c8;
case 0x5083cb:c.instructions+=49;goto B5083cb;
case 0x5083cd:c.instructions+=48;goto B5083cd;
case 0x5083cf:c.instructions+=47;goto B5083cf;
case 0x5083d3:c.instructions+=46;goto B5083d3;
case 0x5083d5:c.instructions+=45;goto B5083d5;
case 0x5083d9:c.instructions+=44;goto B5083d9;
case 0x5083dd:c.instructions+=43;goto B5083dd;
case 0x5083e0:c.instructions+=42;goto B5083e0;
case 0x5083e4:c.instructions+=41;goto B5083e4;
case 0x5083e7:c.instructions+=40;goto B5083e7;
case 0x5083ea:c.instructions+=39;goto B5083ea;
case 0x5083ec:c.instructions+=38;goto B5083ec;
case 0x5083ef:c.instructions+=37;goto B5083ef;
case 0x5083f3:c.instructions+=36;goto B5083f3;
case 0x5083f7:c.instructions+=35;goto B5083f7;
case 0x5083fa:c.instructions+=34;goto B5083fa;
case 0x5083fd:c.instructions+=33;goto B5083fd;
case 0x508400:c.instructions+=32;goto B508400;
case 0x508403:c.instructions+=31;goto B508403;
case 0x508406:c.instructions+=30;goto B508406;
case 0x508409:c.instructions+=29;goto B508409;
case 0x508410:c.instructions+=28;goto B508410;
case 0x508412:c.instructions+=27;goto B508412;
case 0x508415:c.instructions+=26;goto B508415;
case 0x50841c:c.instructions+=25;goto B50841c;
case 0x50841e:c.instructions+=24;goto B50841e;
case 0x508420:c.instructions+=23;goto B508420;
case 0x508425:c.instructions+=22;goto B508425;
case 0x508429:c.instructions+=21;goto B508429;
case 0x50842b:c.instructions+=20;goto B50842b;
case 0x50842f:c.instructions+=19;goto B50842f;
case 0x508436:c.instructions+=18;goto B508436;
case 0x508438:c.instructions+=17;goto B508438;
case 0x50843c:c.instructions+=16;goto B50843c;
case 0x508443:c.instructions+=15;goto B508443;
case 0x508447:c.instructions+=14;goto B508447;
case 0x50844a:c.instructions+=13;goto B50844a;
case 0x50844e:c.instructions+=12;goto B50844e;
case 0x508451:c.instructions+=11;goto B508451;
case 0x508455:c.instructions+=10;goto B508455;
case 0x508458:c.instructions+=9;goto B508458;
case 0x50845f:c.instructions+=8;goto B50845f;
case 0x508466:c.instructions+=7;goto B508466;
case 0x508468:c.instructions+=6;goto B508468;
case 0x50846b:c.instructions+=5;goto B50846b;
case 0x50846e:c.instructions+=4;goto B50846e;
case 0x508475:c.instructions+=3;goto B508475;
case 0x50847c:c.instructions+=2;goto B50847c;
case 0x50847e:c.instructions+=1;goto B50847e;
case 0x508481:goto L508481;
case 0x508482:c.instructions+=4;goto B508482;
case 0x508485:c.instructions+=3;goto B508485;
case 0x508488:c.instructions+=2;goto B508488;
case 0x50848c:c.instructions+=1;goto B50848c;
case 0x50848f:goto L50848f;
case 0x508492:c.instructions+=5;goto B508492;
case 0x508495:c.instructions+=4;goto B508495;
case 0x508497:c.instructions+=3;goto B508497;
case 0x50849b:c.instructions+=2;goto B50849b;
case 0x50849e:c.instructions+=1;goto B50849e;
case 0x5084a4:goto L5084a4;
case 0x5084a6:c.instructions+=1;goto B5084a6;
case 0x5084ac:goto L5084ac;
case 0x5084af:c.instructions+=91;goto B5084af;
case 0x5084b2:c.instructions+=90;goto B5084b2;
case 0x5084b5:c.instructions+=89;goto B5084b5;
case 0x5084b8:c.instructions+=88;goto B5084b8;
case 0x5084bb:c.instructions+=87;goto B5084bb;
case 0x5084bd:c.instructions+=86;goto B5084bd;
case 0x5084c4:c.instructions+=85;goto B5084c4;
case 0x5084cb:c.instructions+=84;goto B5084cb;
case 0x5084cd:c.instructions+=83;goto B5084cd;
case 0x5084cf:c.instructions+=82;goto B5084cf;
case 0x5084d2:c.instructions+=81;goto B5084d2;
case 0x5084d6:c.instructions+=80;goto B5084d6;
case 0x5084d9:c.instructions+=79;goto B5084d9;
case 0x5084dc:c.instructions+=78;goto B5084dc;
case 0x5084df:c.instructions+=77;goto B5084df;
case 0x5084e2:c.instructions+=76;goto B5084e2;
case 0x5084e4:c.instructions+=75;goto B5084e4;
case 0x5084e6:c.instructions+=74;goto B5084e6;
case 0x5084e8:c.instructions+=73;goto B5084e8;
case 0x5084ea:c.instructions+=72;goto B5084ea;
case 0x5084ed:c.instructions+=71;goto B5084ed;
case 0x5084f0:c.instructions+=70;goto B5084f0;
case 0x5084f2:c.instructions+=69;goto B5084f2;
case 0x5084f5:c.instructions+=68;goto B5084f5;
case 0x5084f8:c.instructions+=67;goto B5084f8;
case 0x5084fb:c.instructions+=66;goto B5084fb;
case 0x5084fd:c.instructions+=65;goto B5084fd;
case 0x5084ff:c.instructions+=64;goto B5084ff;
case 0x508502:c.instructions+=63;goto B508502;
case 0x508504:c.instructions+=62;goto B508504;
case 0x508506:c.instructions+=61;goto B508506;
case 0x508509:c.instructions+=60;goto B508509;
case 0x50850c:c.instructions+=59;goto B50850c;
case 0x50850f:c.instructions+=58;goto B50850f;
case 0x508512:c.instructions+=57;goto B508512;
case 0x508515:c.instructions+=56;goto B508515;
case 0x508518:c.instructions+=55;goto B508518;
case 0x50851b:c.instructions+=54;goto B50851b;
case 0x50851d:c.instructions+=53;goto B50851d;
case 0x50851f:c.instructions+=52;goto B50851f;
case 0x508521:c.instructions+=51;goto B508521;
case 0x508525:c.instructions+=50;goto B508525;
case 0x508527:c.instructions+=49;goto B508527;
case 0x50852b:c.instructions+=48;goto B50852b;
case 0x50852f:c.instructions+=47;goto B50852f;
case 0x508532:c.instructions+=46;goto B508532;
case 0x508536:c.instructions+=45;goto B508536;
case 0x508538:c.instructions+=44;goto B508538;
case 0x50853b:c.instructions+=43;goto B50853b;
case 0x50853d:c.instructions+=42;goto B50853d;
case 0x508540:c.instructions+=41;goto B508540;
case 0x508544:c.instructions+=40;goto B508544;
case 0x508548:c.instructions+=39;goto B508548;
case 0x50854b:c.instructions+=38;goto B50854b;
case 0x50854e:c.instructions+=37;goto B50854e;
case 0x508551:c.instructions+=36;goto B508551;
case 0x508554:c.instructions+=35;goto B508554;
case 0x508557:c.instructions+=34;goto B508557;
case 0x50855a:c.instructions+=33;goto B50855a;
case 0x50855e:c.instructions+=32;goto B50855e;
case 0x508561:c.instructions+=31;goto B508561;
case 0x508563:c.instructions+=30;goto B508563;
case 0x508567:c.instructions+=29;goto B508567;
case 0x508569:c.instructions+=28;goto B508569;
case 0x50856a:c.instructions+=27;goto B50856a;
case 0x50856c:c.instructions+=26;goto B50856c;
case 0x50856f:c.instructions+=25;goto B50856f;
case 0x508572:c.instructions+=24;goto B508572;
case 0x508577:c.instructions+=23;goto B508577;
case 0x50857b:c.instructions+=22;goto B50857b;
case 0x50857d:c.instructions+=21;goto B50857d;
case 0x508581:c.instructions+=20;goto B508581;
case 0x508585:c.instructions+=19;goto B508585;
case 0x508587:c.instructions+=18;goto B508587;
case 0x50858b:c.instructions+=17;goto B50858b;
case 0x50858f:c.instructions+=16;goto B50858f;
case 0x508593:c.instructions+=15;goto B508593;
case 0x508596:c.instructions+=14;goto B508596;
case 0x50859a:c.instructions+=13;goto B50859a;
case 0x50859d:c.instructions+=12;goto B50859d;
case 0x5085a1:c.instructions+=11;goto B5085a1;
case 0x5085a4:c.instructions+=10;goto B5085a4;
case 0x5085a8:c.instructions+=9;goto B5085a8;
case 0x5085ac:c.instructions+=8;goto B5085ac;
case 0x5085ae:c.instructions+=7;goto B5085ae;
case 0x5085b0:c.instructions+=6;goto B5085b0;
case 0x5085b3:c.instructions+=5;goto B5085b3;
case 0x5085b7:c.instructions+=4;goto B5085b7;
case 0x5085bb:c.instructions+=3;goto B5085bb;
case 0x5085be:c.instructions+=2;goto B5085be;
case 0x5085c1:c.instructions+=1;goto B5085c1;
case 0x5085c4:goto L5085c4;
case 0x5085c7:c.instructions+=22;goto B5085c7;
case 0x5085cb:c.instructions+=21;goto B5085cb;
case 0x5085ce:c.instructions+=20;goto B5085ce;
case 0x5085d1:c.instructions+=19;goto B5085d1;
case 0x5085d3:c.instructions+=18;goto B5085d3;
case 0x5085d5:c.instructions+=17;goto B5085d5;
case 0x5085d8:c.instructions+=16;goto B5085d8;
case 0x5085db:c.instructions+=15;goto B5085db;
case 0x5085de:c.instructions+=14;goto B5085de;
case 0x5085e1:c.instructions+=13;goto B5085e1;
case 0x5085e4:c.instructions+=12;goto B5085e4;
case 0x5085e7:c.instructions+=11;goto B5085e7;
case 0x5085eb:c.instructions+=10;goto B5085eb;
case 0x5085ee:c.instructions+=9;goto B5085ee;
case 0x5085f1:c.instructions+=8;goto B5085f1;
case 0x5085f5:c.instructions+=7;goto B5085f5;
case 0x5085f8:c.instructions+=6;goto B5085f8;
case 0x5085fb:c.instructions+=5;goto B5085fb;
case 0x5085fd:c.instructions+=4;goto B5085fd;
case 0x5085ff:c.instructions+=3;goto B5085ff;
case 0x508602:c.instructions+=2;goto B508602;
case 0x508605:c.instructions+=1;goto B508605;
case 0x50860a:goto L50860a;
case 0x50860c:c.instructions+=1;goto B50860c;
case 0x508612:goto L508612;
case 0x508615:c.instructions+=87;goto B508615;
case 0x508618:c.instructions+=86;goto B508618;
case 0x50861b:c.instructions+=85;goto B50861b;
case 0x50861e:c.instructions+=84;goto B50861e;
case 0x508621:c.instructions+=83;goto B508621;
case 0x508623:c.instructions+=82;goto B508623;
case 0x50862a:c.instructions+=81;goto B50862a;
case 0x508631:c.instructions+=80;goto B508631;
case 0x508633:c.instructions+=79;goto B508633;
case 0x508635:c.instructions+=78;goto B508635;
case 0x508638:c.instructions+=77;goto B508638;
case 0x50863c:c.instructions+=76;goto B50863c;
case 0x50863f:c.instructions+=75;goto B50863f;
case 0x508642:c.instructions+=74;goto B508642;
case 0x508645:c.instructions+=73;goto B508645;
case 0x508648:c.instructions+=72;goto B508648;
case 0x50864a:c.instructions+=71;goto B50864a;
case 0x50864c:c.instructions+=70;goto B50864c;
case 0x50864e:c.instructions+=69;goto B50864e;
case 0x508650:c.instructions+=68;goto B508650;
case 0x508653:c.instructions+=67;goto B508653;
case 0x508656:c.instructions+=66;goto B508656;
case 0x508658:c.instructions+=65;goto B508658;
case 0x50865b:c.instructions+=64;goto B50865b;
case 0x50865e:c.instructions+=63;goto B50865e;
case 0x508661:c.instructions+=62;goto B508661;
case 0x508663:c.instructions+=61;goto B508663;
case 0x508665:c.instructions+=60;goto B508665;
case 0x508668:c.instructions+=59;goto B508668;
case 0x50866a:c.instructions+=58;goto B50866a;
case 0x50866c:c.instructions+=57;goto B50866c;
case 0x50866f:c.instructions+=56;goto B50866f;
case 0x508672:c.instructions+=55;goto B508672;
case 0x508675:c.instructions+=54;goto B508675;
case 0x508678:c.instructions+=53;goto B508678;
case 0x50867b:c.instructions+=52;goto B50867b;
case 0x50867e:c.instructions+=51;goto B50867e;
case 0x508681:c.instructions+=50;goto B508681;
case 0x508683:c.instructions+=49;goto B508683;
case 0x508685:c.instructions+=48;goto B508685;
case 0x508687:c.instructions+=47;goto B508687;
case 0x50868b:c.instructions+=46;goto B50868b;
case 0x50868d:c.instructions+=45;goto B50868d;
case 0x508691:c.instructions+=44;goto B508691;
case 0x508695:c.instructions+=43;goto B508695;
case 0x508698:c.instructions+=42;goto B508698;
case 0x50869c:c.instructions+=41;goto B50869c;
case 0x50869e:c.instructions+=40;goto B50869e;
case 0x5086a1:c.instructions+=39;goto B5086a1;
case 0x5086a3:c.instructions+=38;goto B5086a3;
case 0x5086a6:c.instructions+=37;goto B5086a6;
case 0x5086aa:c.instructions+=36;goto B5086aa;
case 0x5086ae:c.instructions+=35;goto B5086ae;
case 0x5086b1:c.instructions+=34;goto B5086b1;
case 0x5086b4:c.instructions+=33;goto B5086b4;
case 0x5086b7:c.instructions+=32;goto B5086b7;
case 0x5086ba:c.instructions+=31;goto B5086ba;
case 0x5086bd:c.instructions+=30;goto B5086bd;
case 0x5086c0:c.instructions+=29;goto B5086c0;
case 0x5086c7:c.instructions+=28;goto B5086c7;
case 0x5086ca:c.instructions+=27;goto B5086ca;
case 0x5086cc:c.instructions+=26;goto B5086cc;
case 0x5086d3:c.instructions+=25;goto B5086d3;
case 0x5086d5:c.instructions+=24;goto B5086d5;
case 0x5086da:c.instructions+=23;goto B5086da;
case 0x5086dc:c.instructions+=22;goto B5086dc;
case 0x5086e0:c.instructions+=21;goto B5086e0;
case 0x5086e2:c.instructions+=20;goto B5086e2;
case 0x5086e6:c.instructions+=19;goto B5086e6;
case 0x5086ed:c.instructions+=18;goto B5086ed;
case 0x5086ef:c.instructions+=17;goto B5086ef;
case 0x5086f3:c.instructions+=16;goto B5086f3;
case 0x5086fa:c.instructions+=15;goto B5086fa;
case 0x5086fe:c.instructions+=14;goto B5086fe;
case 0x508701:c.instructions+=13;goto B508701;
case 0x508705:c.instructions+=12;goto B508705;
case 0x508708:c.instructions+=11;goto B508708;
case 0x50870c:c.instructions+=10;goto B50870c;
case 0x50870f:c.instructions+=9;goto B50870f;
case 0x508716:c.instructions+=8;goto B508716;
case 0x50871d:c.instructions+=7;goto B50871d;
case 0x50871f:c.instructions+=6;goto B50871f;
case 0x508721:c.instructions+=5;goto B508721;
case 0x508724:c.instructions+=4;goto B508724;
case 0x50872b:c.instructions+=3;goto B50872b;
case 0x508732:c.instructions+=2;goto B508732;
case 0x508734:c.instructions+=1;goto B508734;
case 0x508737:goto L508737;
case 0x508738:c.instructions+=4;goto B508738;
case 0x50873b:c.instructions+=3;goto B50873b;
case 0x50873e:c.instructions+=2;goto B50873e;
case 0x508742:c.instructions+=1;goto B508742;
case 0x508745:goto L508745;
case 0x508748:c.instructions+=5;goto B508748;
case 0x50874b:c.instructions+=4;goto B50874b;
case 0x50874d:c.instructions+=3;goto B50874d;
case 0x508751:c.instructions+=2;goto B508751;
case 0x508754:c.instructions+=1;goto B508754;
case 0x50875a:goto L50875a;
case 0x50875c:c.instructions+=1;goto B50875c;
case 0x508762:goto L508762;
case 0x508765:c.instructions+=90;goto B508765;
case 0x508768:c.instructions+=89;goto B508768;
case 0x50876b:c.instructions+=88;goto B50876b;
case 0x50876e:c.instructions+=87;goto B50876e;
case 0x508771:c.instructions+=86;goto B508771;
case 0x508774:c.instructions+=85;goto B508774;
case 0x50877b:c.instructions+=84;goto B50877b;
case 0x508782:c.instructions+=83;goto B508782;
case 0x508784:c.instructions+=82;goto B508784;
case 0x508786:c.instructions+=81;goto B508786;
case 0x508789:c.instructions+=80;goto B508789;
case 0x50878d:c.instructions+=79;goto B50878d;
case 0x508790:c.instructions+=78;goto B508790;
case 0x508793:c.instructions+=77;goto B508793;
case 0x508796:c.instructions+=76;goto B508796;
case 0x508799:c.instructions+=75;goto B508799;
case 0x50879b:c.instructions+=74;goto B50879b;
case 0x50879d:c.instructions+=73;goto B50879d;
case 0x50879f:c.instructions+=72;goto B50879f;
case 0x5087a1:c.instructions+=71;goto B5087a1;
case 0x5087a4:c.instructions+=70;goto B5087a4;
case 0x5087a7:c.instructions+=69;goto B5087a7;
case 0x5087a9:c.instructions+=68;goto B5087a9;
case 0x5087ac:c.instructions+=67;goto B5087ac;
case 0x5087af:c.instructions+=66;goto B5087af;
case 0x5087b2:c.instructions+=65;goto B5087b2;
case 0x5087b5:c.instructions+=64;goto B5087b5;
case 0x5087b7:c.instructions+=63;goto B5087b7;
case 0x5087ba:c.instructions+=62;goto B5087ba;
case 0x5087bc:c.instructions+=61;goto B5087bc;
case 0x5087be:c.instructions+=60;goto B5087be;
case 0x5087c1:c.instructions+=59;goto B5087c1;
case 0x5087c4:c.instructions+=58;goto B5087c4;
case 0x5087c7:c.instructions+=57;goto B5087c7;
case 0x5087ca:c.instructions+=56;goto B5087ca;
case 0x5087cd:c.instructions+=55;goto B5087cd;
case 0x5087d0:c.instructions+=54;goto B5087d0;
case 0x5087d3:c.instructions+=53;goto B5087d3;
case 0x5087d6:c.instructions+=52;goto B5087d6;
case 0x5087d8:c.instructions+=51;goto B5087d8;
case 0x5087da:c.instructions+=50;goto B5087da;
case 0x5087de:c.instructions+=49;goto B5087de;
case 0x5087e0:c.instructions+=48;goto B5087e0;
case 0x5087e4:c.instructions+=47;goto B5087e4;
case 0x5087e8:c.instructions+=46;goto B5087e8;
case 0x5087eb:c.instructions+=45;goto B5087eb;
case 0x5087ef:c.instructions+=44;goto B5087ef;
case 0x5087f2:c.instructions+=43;goto B5087f2;
case 0x5087f5:c.instructions+=42;goto B5087f5;
case 0x5087f7:c.instructions+=41;goto B5087f7;
case 0x5087fa:c.instructions+=40;goto B5087fa;
case 0x5087fe:c.instructions+=39;goto B5087fe;
case 0x508801:c.instructions+=38;goto B508801;
case 0x508804:c.instructions+=37;goto B508804;
case 0x508807:c.instructions+=36;goto B508807;
case 0x50880a:c.instructions+=35;goto B50880a;
case 0x50880d:c.instructions+=34;goto B50880d;
case 0x508810:c.instructions+=33;goto B508810;
case 0x508814:c.instructions+=32;goto B508814;
case 0x508817:c.instructions+=31;goto B508817;
case 0x50881a:c.instructions+=30;goto B50881a;
case 0x50881e:c.instructions+=29;goto B50881e;
case 0x50881f:c.instructions+=28;goto B50881f;
case 0x508821:c.instructions+=27;goto B508821;
case 0x508824:c.instructions+=26;goto B508824;
case 0x508826:c.instructions+=25;goto B508826;
case 0x508829:c.instructions+=24;goto B508829;
case 0x50882e:c.instructions+=23;goto B50882e;
case 0x508832:c.instructions+=22;goto B508832;
case 0x508834:c.instructions+=21;goto B508834;
case 0x508838:c.instructions+=20;goto B508838;
case 0x50883c:c.instructions+=19;goto B50883c;
case 0x50883e:c.instructions+=18;goto B50883e;
case 0x508842:c.instructions+=17;goto B508842;
case 0x508846:c.instructions+=16;goto B508846;
case 0x50884a:c.instructions+=15;goto B50884a;
case 0x50884d:c.instructions+=14;goto B50884d;
case 0x508851:c.instructions+=13;goto B508851;
case 0x508854:c.instructions+=12;goto B508854;
case 0x508858:c.instructions+=11;goto B508858;
case 0x50885b:c.instructions+=10;goto B50885b;
case 0x50885f:c.instructions+=9;goto B50885f;
case 0x508863:c.instructions+=8;goto B508863;
case 0x508865:c.instructions+=7;goto B508865;
case 0x508868:c.instructions+=6;goto B508868;
case 0x50886b:c.instructions+=5;goto B50886b;
case 0x50886f:c.instructions+=4;goto B50886f;
case 0x508873:c.instructions+=3;goto B508873;
case 0x508876:c.instructions+=2;goto B508876;
case 0x508879:c.instructions+=1;goto B508879;
case 0x50887c:goto L50887c;
case 0x50887f:c.instructions+=22;goto B50887f;
case 0x508883:c.instructions+=21;goto B508883;
case 0x508886:c.instructions+=20;goto B508886;
case 0x508889:c.instructions+=19;goto B508889;
case 0x50888b:c.instructions+=18;goto B50888b;
case 0x50888d:c.instructions+=17;goto B50888d;
case 0x508890:c.instructions+=16;goto B508890;
case 0x508893:c.instructions+=15;goto B508893;
case 0x508896:c.instructions+=14;goto B508896;
case 0x508899:c.instructions+=13;goto B508899;
case 0x50889c:c.instructions+=12;goto B50889c;
case 0x50889f:c.instructions+=11;goto B50889f;
case 0x5088a3:c.instructions+=10;goto B5088a3;
case 0x5088a6:c.instructions+=9;goto B5088a6;
case 0x5088a9:c.instructions+=8;goto B5088a9;
case 0x5088ad:c.instructions+=7;goto B5088ad;
case 0x5088b0:c.instructions+=6;goto B5088b0;
case 0x5088b3:c.instructions+=5;goto B5088b3;
case 0x5088b5:c.instructions+=4;goto B5088b5;
case 0x5088b7:c.instructions+=3;goto B5088b7;
case 0x5088ba:c.instructions+=2;goto B5088ba;
case 0x5088bd:c.instructions+=1;goto B5088bd;
case 0x5088c2:goto L5088c2;
case 0x5088c4:c.instructions+=1;goto B5088c4;
case 0x5088ca:goto L5088ca;
case 0x5088cd:c.instructions+=86;goto B5088cd;
case 0x5088d0:c.instructions+=85;goto B5088d0;
case 0x5088d3:c.instructions+=84;goto B5088d3;
case 0x5088d6:c.instructions+=83;goto B5088d6;
case 0x5088d9:c.instructions+=82;goto B5088d9;
case 0x5088dc:c.instructions+=81;goto B5088dc;
case 0x5088e3:c.instructions+=80;goto B5088e3;
case 0x5088ea:c.instructions+=79;goto B5088ea;
case 0x5088ec:c.instructions+=78;goto B5088ec;
case 0x5088ee:c.instructions+=77;goto B5088ee;
case 0x5088f1:c.instructions+=76;goto B5088f1;
case 0x5088f5:c.instructions+=75;goto B5088f5;
case 0x5088f8:c.instructions+=74;goto B5088f8;
case 0x5088fb:c.instructions+=73;goto B5088fb;
case 0x5088fe:c.instructions+=72;goto B5088fe;
case 0x508901:c.instructions+=71;goto B508901;
case 0x508903:c.instructions+=70;goto B508903;
case 0x508905:c.instructions+=69;goto B508905;
case 0x508907:c.instructions+=68;goto B508907;
case 0x508909:c.instructions+=67;goto B508909;
case 0x50890c:c.instructions+=66;goto B50890c;
case 0x50890f:c.instructions+=65;goto B50890f;
case 0x508911:c.instructions+=64;goto B508911;
case 0x508914:c.instructions+=63;goto B508914;
case 0x508917:c.instructions+=62;goto B508917;
case 0x50891a:c.instructions+=61;goto B50891a;
case 0x50891d:c.instructions+=60;goto B50891d;
case 0x50891f:c.instructions+=59;goto B50891f;
case 0x508922:c.instructions+=58;goto B508922;
case 0x508924:c.instructions+=57;goto B508924;
case 0x508926:c.instructions+=56;goto B508926;
case 0x508929:c.instructions+=55;goto B508929;
case 0x50892c:c.instructions+=54;goto B50892c;
case 0x50892f:c.instructions+=53;goto B50892f;
case 0x508932:c.instructions+=52;goto B508932;
case 0x508935:c.instructions+=51;goto B508935;
case 0x508938:c.instructions+=50;goto B508938;
case 0x50893b:c.instructions+=49;goto B50893b;
case 0x50893e:c.instructions+=48;goto B50893e;
case 0x508940:c.instructions+=47;goto B508940;
case 0x508942:c.instructions+=46;goto B508942;
case 0x508946:c.instructions+=45;goto B508946;
case 0x508948:c.instructions+=44;goto B508948;
case 0x50894c:c.instructions+=43;goto B50894c;
case 0x508950:c.instructions+=42;goto B508950;
case 0x508953:c.instructions+=41;goto B508953;
case 0x508957:c.instructions+=40;goto B508957;
case 0x50895a:c.instructions+=39;goto B50895a;
case 0x50895d:c.instructions+=38;goto B50895d;
case 0x50895f:c.instructions+=37;goto B50895f;
case 0x508962:c.instructions+=36;goto B508962;
case 0x508966:c.instructions+=35;goto B508966;
case 0x508969:c.instructions+=34;goto B508969;
case 0x50896c:c.instructions+=33;goto B50896c;
case 0x50896f:c.instructions+=32;goto B50896f;
case 0x508972:c.instructions+=31;goto B508972;
case 0x508975:c.instructions+=30;goto B508975;
case 0x508978:c.instructions+=29;goto B508978;
case 0x50897f:c.instructions+=28;goto B50897f;
case 0x508982:c.instructions+=27;goto B508982;
case 0x508985:c.instructions+=26;goto B508985;
case 0x50898c:c.instructions+=25;goto B50898c;
case 0x508991:c.instructions+=24;goto B508991;
case 0x508993:c.instructions+=23;goto B508993;
case 0x508995:c.instructions+=22;goto B508995;
case 0x508999:c.instructions+=21;goto B508999;
case 0x50899b:c.instructions+=20;goto B50899b;
case 0x50899f:c.instructions+=19;goto B50899f;
case 0x5089a6:c.instructions+=18;goto B5089a6;
case 0x5089a8:c.instructions+=17;goto B5089a8;
case 0x5089ac:c.instructions+=16;goto B5089ac;
case 0x5089b3:c.instructions+=15;goto B5089b3;
case 0x5089b7:c.instructions+=14;goto B5089b7;
case 0x5089ba:c.instructions+=13;goto B5089ba;
case 0x5089be:c.instructions+=12;goto B5089be;
case 0x5089c1:c.instructions+=11;goto B5089c1;
case 0x5089c5:c.instructions+=10;goto B5089c5;
case 0x5089c8:c.instructions+=9;goto B5089c8;
case 0x5089cf:c.instructions+=8;goto B5089cf;
case 0x5089d6:c.instructions+=7;goto B5089d6;
case 0x5089d8:c.instructions+=6;goto B5089d8;
case 0x5089db:c.instructions+=5;goto B5089db;
case 0x5089de:c.instructions+=4;goto B5089de;
case 0x5089e5:c.instructions+=3;goto B5089e5;
case 0x5089ec:c.instructions+=2;goto B5089ec;
case 0x5089ee:c.instructions+=1;goto B5089ee;
case 0x5089f1:goto L5089f1;
case 0x5089f2:c.instructions+=4;goto B5089f2;
case 0x5089f5:c.instructions+=3;goto B5089f5;
case 0x5089f8:c.instructions+=2;goto B5089f8;
case 0x5089fc:c.instructions+=1;goto B5089fc;
case 0x5089ff:goto L5089ff;
case 0x508a03:c.instructions+=21;goto B508a03;
case 0x508a0a:c.instructions+=20;goto B508a0a;
case 0x508a11:c.instructions+=19;goto B508a11;
case 0x508a15:c.instructions+=18;goto B508a15;
case 0x508a17:c.instructions+=17;goto B508a17;
case 0x508a1b:c.instructions+=16;goto B508a1b;
case 0x508a22:c.instructions+=15;goto B508a22;
case 0x508a24:c.instructions+=14;goto B508a24;
case 0x508a28:c.instructions+=13;goto B508a28;
case 0x508a2c:c.instructions+=12;goto B508a2c;
case 0x508a2f:c.instructions+=11;goto B508a2f;
case 0x508a32:c.instructions+=10;goto B508a32;
case 0x508a36:c.instructions+=9;goto B508a36;
case 0x508a3a:c.instructions+=8;goto B508a3a;
case 0x508a3e:c.instructions+=7;goto B508a3e;
case 0x508a41:c.instructions+=6;goto B508a41;
case 0x508a44:c.instructions+=5;goto B508a44;
case 0x508a47:c.instructions+=4;goto B508a47;
case 0x508a4a:c.instructions+=3;goto B508a4a;
case 0x508a4c:c.instructions+=2;goto B508a4c;
case 0x508a50:c.instructions+=1;goto B508a50;
case 0x508a56:goto L508a56;
case 0x508a5d:c.instructions+=6;goto B508a5d;
case 0x508a60:c.instructions+=5;goto B508a60;
case 0x508a63:c.instructions+=4;goto B508a63;
case 0x508a66:c.instructions+=3;goto B508a66;
case 0x508a6a:c.instructions+=2;goto B508a6a;
case 0x508a6d:c.instructions+=1;goto B508a6d;
case 0x508a73:goto L508a73;
case 0x508a7a:c.instructions+=24;goto B508a7a;
case 0x508a7e:c.instructions+=23;goto B508a7e;
case 0x508a82:c.instructions+=22;goto B508a82;
case 0x508a85:c.instructions+=21;goto B508a85;
case 0x508a87:c.instructions+=20;goto B508a87;
case 0x508a8b:c.instructions+=19;goto B508a8b;
case 0x508a8e:c.instructions+=18;goto B508a8e;
case 0x508a90:c.instructions+=17;goto B508a90;
case 0x508a94:c.instructions+=16;goto B508a94;
case 0x508a97:c.instructions+=15;goto B508a97;
case 0x508a99:c.instructions+=14;goto B508a99;
case 0x508a9d:c.instructions+=13;goto B508a9d;
case 0x508aa1:c.instructions+=12;goto B508aa1;
case 0x508aa4:c.instructions+=11;goto B508aa4;
case 0x508aa8:c.instructions+=10;goto B508aa8;
case 0x508aac:c.instructions+=9;goto B508aac;
case 0x508aae:c.instructions+=8;goto B508aae;
case 0x508ab0:c.instructions+=7;goto B508ab0;
case 0x508ab4:c.instructions+=6;goto B508ab4;
case 0x508ab9:c.instructions+=5;goto B508ab9;
case 0x508abc:c.instructions+=4;goto B508abc;
case 0x508abe:c.instructions+=3;goto B508abe;
case 0x508ac2:c.instructions+=2;goto B508ac2;
case 0x508ac9:c.instructions+=1;goto B508ac9;
case 0x508ad0:goto L508ad0;
case 0x508ad4:c.instructions+=6;goto B508ad4;
case 0x508ad6:c.instructions+=5;goto B508ad6;
case 0x508ad9:c.instructions+=4;goto B508ad9;
case 0x508adb:c.instructions+=3;goto B508adb;
case 0x508adf:c.instructions+=2;goto B508adf;
case 0x508ae2:c.instructions+=1;goto B508ae2;
case 0x508ae8:goto L508ae8;
case 0x508aea:c.instructions+=1;goto B508aea;
case 0x508af0:goto L508af0;
case 0x508af3:c.instructions+=104;goto B508af3;
case 0x508af7:c.instructions+=103;goto B508af7;
case 0x508afa:c.instructions+=102;goto B508afa;
case 0x508afd:c.instructions+=101;goto B508afd;
case 0x508b01:c.instructions+=100;goto B508b01;
case 0x508b03:c.instructions+=99;goto B508b03;
case 0x508b06:c.instructions+=98;goto B508b06;
case 0x508b0a:c.instructions+=97;goto B508b0a;
case 0x508b11:c.instructions+=96;goto B508b11;
case 0x508b18:c.instructions+=95;goto B508b18;
case 0x508b1a:c.instructions+=94;goto B508b1a;
case 0x508b1c:c.instructions+=93;goto B508b1c;
case 0x508b1f:c.instructions+=92;goto B508b1f;
case 0x508b23:c.instructions+=91;goto B508b23;
case 0x508b26:c.instructions+=90;goto B508b26;
case 0x508b29:c.instructions+=89;goto B508b29;
case 0x508b2d:c.instructions+=88;goto B508b2d;
case 0x508b30:c.instructions+=87;goto B508b30;
case 0x508b32:c.instructions+=86;goto B508b32;
case 0x508b34:c.instructions+=85;goto B508b34;
case 0x508b36:c.instructions+=84;goto B508b36;
case 0x508b38:c.instructions+=83;goto B508b38;
case 0x508b3b:c.instructions+=82;goto B508b3b;
case 0x508b3e:c.instructions+=81;goto B508b3e;
case 0x508b40:c.instructions+=80;goto B508b40;
case 0x508b43:c.instructions+=79;goto B508b43;
case 0x508b46:c.instructions+=78;goto B508b46;
case 0x508b4a:c.instructions+=77;goto B508b4a;
case 0x508b4e:c.instructions+=76;goto B508b4e;
case 0x508b50:c.instructions+=75;goto B508b50;
case 0x508b53:c.instructions+=74;goto B508b53;
case 0x508b57:c.instructions+=73;goto B508b57;
case 0x508b59:c.instructions+=72;goto B508b59;
case 0x508b5b:c.instructions+=71;goto B508b5b;
case 0x508b5e:c.instructions+=70;goto B508b5e;
case 0x508b61:c.instructions+=69;goto B508b61;
case 0x508b64:c.instructions+=68;goto B508b64;
case 0x508b67:c.instructions+=67;goto B508b67;
case 0x508b6a:c.instructions+=66;goto B508b6a;
case 0x508b6d:c.instructions+=65;goto B508b6d;
case 0x508b71:c.instructions+=64;goto B508b71;
case 0x508b74:c.instructions+=63;goto B508b74;
case 0x508b78:c.instructions+=62;goto B508b78;
case 0x508b7a:c.instructions+=61;goto B508b7a;
case 0x508b7c:c.instructions+=60;goto B508b7c;
case 0x508b80:c.instructions+=59;goto B508b80;
case 0x508b82:c.instructions+=58;goto B508b82;
case 0x508b86:c.instructions+=57;goto B508b86;
case 0x508b8a:c.instructions+=56;goto B508b8a;
case 0x508b8d:c.instructions+=55;goto B508b8d;
case 0x508b91:c.instructions+=54;goto B508b91;
case 0x508b95:c.instructions+=53;goto B508b95;
case 0x508b99:c.instructions+=52;goto B508b99;
case 0x508b9b:c.instructions+=51;goto B508b9b;
case 0x508b9e:c.instructions+=50;goto B508b9e;
case 0x508ba2:c.instructions+=49;goto B508ba2;
case 0x508ba6:c.instructions+=48;goto B508ba6;
case 0x508ba9:c.instructions+=47;goto B508ba9;
case 0x508bad:c.instructions+=46;goto B508bad;
case 0x508bb1:c.instructions+=45;goto B508bb1;
case 0x508bb4:c.instructions+=44;goto B508bb4;
case 0x508bb7:c.instructions+=43;goto B508bb7;
case 0x508bbb:c.instructions+=42;goto B508bbb;
case 0x508bbf:c.instructions+=41;goto B508bbf;
case 0x508bc2:c.instructions+=40;goto B508bc2;
case 0x508bc5:c.instructions+=39;goto B508bc5;
case 0x508bc9:c.instructions+=38;goto B508bc9;
case 0x508bcd:c.instructions+=37;goto B508bcd;
case 0x508bd1:c.instructions+=36;goto B508bd1;
case 0x508bd3:c.instructions+=35;goto B508bd3;
case 0x508bd7:c.instructions+=34;goto B508bd7;
case 0x508bdc:c.instructions+=33;goto B508bdc;
case 0x508be0:c.instructions+=32;goto B508be0;
case 0x508be2:c.instructions+=31;goto B508be2;
case 0x508be4:c.instructions+=30;goto B508be4;
case 0x508be8:c.instructions+=29;goto B508be8;
case 0x508bea:c.instructions+=28;goto B508bea;
case 0x508bee:c.instructions+=27;goto B508bee;
case 0x508bf2:c.instructions+=26;goto B508bf2;
case 0x508bf4:c.instructions+=25;goto B508bf4;
case 0x508bf8:c.instructions+=24;goto B508bf8;
case 0x508bfc:c.instructions+=23;goto B508bfc;
case 0x508c00:c.instructions+=22;goto B508c00;
case 0x508c03:c.instructions+=21;goto B508c03;
case 0x508c07:c.instructions+=20;goto B508c07;
case 0x508c0b:c.instructions+=19;goto B508c0b;
case 0x508c0f:c.instructions+=18;goto B508c0f;
case 0x508c13:c.instructions+=17;goto B508c13;
case 0x508c17:c.instructions+=16;goto B508c17;
case 0x508c1b:c.instructions+=15;goto B508c1b;
case 0x508c1f:c.instructions+=14;goto B508c1f;
case 0x508c21:c.instructions+=13;goto B508c21;
case 0x508c24:c.instructions+=12;goto B508c24;
case 0x508c28:c.instructions+=11;goto B508c28;
case 0x508c2c:c.instructions+=10;goto B508c2c;
case 0x508c2e:c.instructions+=9;goto B508c2e;
case 0x508c30:c.instructions+=8;goto B508c30;
case 0x508c33:c.instructions+=7;goto B508c33;
case 0x508c37:c.instructions+=6;goto B508c37;
case 0x508c3a:c.instructions+=5;goto B508c3a;
case 0x508c3b:c.instructions+=4;goto B508c3b;
case 0x508c3f:c.instructions+=3;goto B508c3f;
case 0x508c41:c.instructions+=2;goto B508c41;
case 0x508c44:c.instructions+=1;goto B508c44;
case 0x508c46:goto L508c46;
case 0x508c4a:goto L508c4a;
case 0x508c4c:c.instructions+=27;goto B508c4c;
case 0x508c4f:c.instructions+=26;goto B508c4f;
case 0x508c52:c.instructions+=25;goto B508c52;
case 0x508c55:c.instructions+=24;goto B508c55;
case 0x508c59:c.instructions+=23;goto B508c59;
case 0x508c5b:c.instructions+=22;goto B508c5b;
case 0x508c5d:c.instructions+=21;goto B508c5d;
case 0x508c60:c.instructions+=20;goto B508c60;
case 0x508c63:c.instructions+=19;goto B508c63;
case 0x508c67:c.instructions+=18;goto B508c67;
case 0x508c6a:c.instructions+=17;goto B508c6a;
case 0x508c6e:c.instructions+=16;goto B508c6e;
case 0x508c71:c.instructions+=15;goto B508c71;
case 0x508c75:c.instructions+=14;goto B508c75;
case 0x508c79:c.instructions+=13;goto B508c79;
case 0x508c7d:c.instructions+=12;goto B508c7d;
case 0x508c80:c.instructions+=11;goto B508c80;
case 0x508c84:c.instructions+=10;goto B508c84;
case 0x508c87:c.instructions+=9;goto B508c87;
case 0x508c89:c.instructions+=8;goto B508c89;
case 0x508c8c:c.instructions+=7;goto B508c8c;
case 0x508c90:c.instructions+=6;goto B508c90;
case 0x508c92:c.instructions+=5;goto B508c92;
case 0x508c94:c.instructions+=4;goto B508c94;
case 0x508c96:c.instructions+=3;goto B508c96;
case 0x508c99:c.instructions+=2;goto B508c99;
case 0x508c9c:c.instructions+=1;goto B508c9c;
case 0x508ca1:goto L508ca1;
case 0x508ca3:c.instructions+=1;goto B508ca3;
case 0x508ca9:goto L508ca9;
case 0x508cac:c.instructions+=97;goto B508cac;
case 0x508cb0:c.instructions+=96;goto B508cb0;
case 0x508cb3:c.instructions+=95;goto B508cb3;
case 0x508cb6:c.instructions+=94;goto B508cb6;
case 0x508cba:c.instructions+=93;goto B508cba;
case 0x508cbc:c.instructions+=92;goto B508cbc;
case 0x508cbf:c.instructions+=91;goto B508cbf;
case 0x508cc3:c.instructions+=90;goto B508cc3;
case 0x508cca:c.instructions+=89;goto B508cca;
case 0x508cd1:c.instructions+=88;goto B508cd1;
case 0x508cd3:c.instructions+=87;goto B508cd3;
case 0x508cd5:c.instructions+=86;goto B508cd5;
case 0x508cd8:c.instructions+=85;goto B508cd8;
case 0x508cdc:c.instructions+=84;goto B508cdc;
case 0x508cdf:c.instructions+=83;goto B508cdf;
case 0x508ce2:c.instructions+=82;goto B508ce2;
case 0x508ce6:c.instructions+=81;goto B508ce6;
case 0x508ce9:c.instructions+=80;goto B508ce9;
case 0x508ceb:c.instructions+=79;goto B508ceb;
case 0x508ced:c.instructions+=78;goto B508ced;
case 0x508cef:c.instructions+=77;goto B508cef;
case 0x508cf1:c.instructions+=76;goto B508cf1;
case 0x508cf4:c.instructions+=75;goto B508cf4;
case 0x508cf7:c.instructions+=74;goto B508cf7;
case 0x508cf9:c.instructions+=73;goto B508cf9;
case 0x508cfc:c.instructions+=72;goto B508cfc;
case 0x508cff:c.instructions+=71;goto B508cff;
case 0x508d03:c.instructions+=70;goto B508d03;
case 0x508d07:c.instructions+=69;goto B508d07;
case 0x508d0a:c.instructions+=68;goto B508d0a;
case 0x508d0e:c.instructions+=67;goto B508d0e;
case 0x508d10:c.instructions+=66;goto B508d10;
case 0x508d12:c.instructions+=65;goto B508d12;
case 0x508d14:c.instructions+=64;goto B508d14;
case 0x508d17:c.instructions+=63;goto B508d17;
case 0x508d1a:c.instructions+=62;goto B508d1a;
case 0x508d1d:c.instructions+=61;goto B508d1d;
case 0x508d20:c.instructions+=60;goto B508d20;
case 0x508d23:c.instructions+=59;goto B508d23;
case 0x508d26:c.instructions+=58;goto B508d26;
case 0x508d2a:c.instructions+=57;goto B508d2a;
case 0x508d2d:c.instructions+=56;goto B508d2d;
case 0x508d31:c.instructions+=55;goto B508d31;
case 0x508d33:c.instructions+=54;goto B508d33;
case 0x508d35:c.instructions+=53;goto B508d35;
case 0x508d39:c.instructions+=52;goto B508d39;
case 0x508d3b:c.instructions+=51;goto B508d3b;
case 0x508d3f:c.instructions+=50;goto B508d3f;
case 0x508d43:c.instructions+=49;goto B508d43;
case 0x508d46:c.instructions+=48;goto B508d46;
case 0x508d4a:c.instructions+=47;goto B508d4a;
case 0x508d4e:c.instructions+=46;goto B508d4e;
case 0x508d52:c.instructions+=45;goto B508d52;
case 0x508d54:c.instructions+=44;goto B508d54;
case 0x508d57:c.instructions+=43;goto B508d57;
case 0x508d5b:c.instructions+=42;goto B508d5b;
case 0x508d5f:c.instructions+=41;goto B508d5f;
case 0x508d62:c.instructions+=40;goto B508d62;
case 0x508d66:c.instructions+=39;goto B508d66;
case 0x508d6a:c.instructions+=38;goto B508d6a;
case 0x508d6d:c.instructions+=37;goto B508d6d;
case 0x508d70:c.instructions+=36;goto B508d70;
case 0x508d74:c.instructions+=35;goto B508d74;
case 0x508d78:c.instructions+=34;goto B508d78;
case 0x508d7b:c.instructions+=33;goto B508d7b;
case 0x508d7f:c.instructions+=32;goto B508d7f;
case 0x508d83:c.instructions+=31;goto B508d83;
case 0x508d8a:c.instructions+=30;goto B508d8a;
case 0x508d8e:c.instructions+=29;goto B508d8e;
case 0x508d90:c.instructions+=28;goto B508d90;
case 0x508d95:c.instructions+=27;goto B508d95;
case 0x508d9c:c.instructions+=26;goto B508d9c;
case 0x508d9e:c.instructions+=25;goto B508d9e;
case 0x508da0:c.instructions+=24;goto B508da0;
case 0x508da4:c.instructions+=23;goto B508da4;
case 0x508da6:c.instructions+=22;goto B508da6;
case 0x508daa:c.instructions+=21;goto B508daa;
case 0x508db1:c.instructions+=20;goto B508db1;
case 0x508db3:c.instructions+=19;goto B508db3;
case 0x508db7:c.instructions+=18;goto B508db7;
case 0x508dbe:c.instructions+=17;goto B508dbe;
case 0x508dc2:c.instructions+=16;goto B508dc2;
case 0x508dc5:c.instructions+=15;goto B508dc5;
case 0x508dc9:c.instructions+=14;goto B508dc9;
case 0x508dcd:c.instructions+=13;goto B508dcd;
case 0x508dd1:c.instructions+=12;goto B508dd1;
case 0x508dd5:c.instructions+=11;goto B508dd5;
case 0x508ddc:c.instructions+=10;goto B508ddc;
case 0x508de0:c.instructions+=9;goto B508de0;
case 0x508de7:c.instructions+=8;goto B508de7;
case 0x508de9:c.instructions+=7;goto B508de9;
case 0x508dec:c.instructions+=6;goto B508dec;
case 0x508df3:c.instructions+=5;goto B508df3;
case 0x508dfa:c.instructions+=4;goto B508dfa;
case 0x508dfc:c.instructions+=3;goto B508dfc;
case 0x508dfe:c.instructions+=2;goto B508dfe;
case 0x508e01:c.instructions+=1;goto B508e01;
case 0x508e03:goto L508e03;
case 0x508e06:c.instructions+=6;goto B508e06;
case 0x508e0a:c.instructions+=5;goto B508e0a;
case 0x508e0d:c.instructions+=4;goto B508e0d;
case 0x508e0e:c.instructions+=3;goto B508e0e;
case 0x508e11:c.instructions+=2;goto B508e11;
case 0x508e15:c.instructions+=1;goto B508e15;
case 0x508e19:goto L508e19;
case 0x508e1d:c.instructions+=11;goto B508e1d;
case 0x508e24:c.instructions+=10;goto B508e24;
case 0x508e2b:c.instructions+=9;goto B508e2b;
case 0x508e2f:c.instructions+=8;goto B508e2f;
case 0x508e33:c.instructions+=7;goto B508e33;
case 0x508e35:c.instructions+=6;goto B508e35;
case 0x508e39:c.instructions+=5;goto B508e39;
case 0x508e3e:c.instructions+=4;goto B508e3e;
case 0x508e43:c.instructions+=3;goto B508e43;
case 0x508e47:c.instructions+=2;goto B508e47;
case 0x508e4a:c.instructions+=1;goto B508e4a;
case 0x508e50:goto L508e50;
case 0x508e54:c.instructions+=6;goto B508e54;
case 0x508e55:c.instructions+=5;goto B508e55;
case 0x508e56:c.instructions+=4;goto B508e56;
case 0x508e57:c.instructions+=3;goto B508e57;
case 0x508e59:c.instructions+=2;goto B508e59;
case 0x508e5a:c.instructions+=1;goto B508e5a;
case 0x508e60:goto L508e60;
case 0x508e61:c.instructions+=19;goto B508e61;
case 0x508e63:c.instructions+=18;goto B508e63;
case 0x508e66:c.instructions+=17;goto B508e66;
case 0x508e6c:c.instructions+=16;goto B508e6c;
case 0x508e6f:c.instructions+=15;goto B508e6f;
case 0x508e70:c.instructions+=14;goto B508e70;
case 0x508e73:c.instructions+=13;goto B508e73;
case 0x508e74:c.instructions+=12;goto B508e74;
case 0x508e77:c.instructions+=11;goto B508e77;
case 0x508e78:c.instructions+=10;goto B508e78;
case 0x508e7b:c.instructions+=9;goto B508e7b;
case 0x508e7c:c.instructions+=8;goto B508e7c;
case 0x508e7e:c.instructions+=7;goto B508e7e;
case 0x508e81:c.instructions+=6;goto B508e81;
case 0x508e84:c.instructions+=5;goto B508e84;
case 0x508e87:c.instructions+=4;goto B508e87;
case 0x508e89:c.instructions+=3;goto B508e89;
case 0x508e8c:c.instructions+=2;goto B508e8c;
case 0x508e8f:c.instructions+=1;goto B508e8f;
case 0x508e91:goto L508e91;
case 0x508e95:c.instructions+=27;goto B508e95;
case 0x508e98:c.instructions+=26;goto B508e98;
case 0x508e9c:c.instructions+=25;goto B508e9c;
case 0x508e9f:c.instructions+=24;goto B508e9f;
case 0x508ea1:c.instructions+=23;goto B508ea1;
case 0x508ea3:c.instructions+=22;goto B508ea3;
case 0x508ea6:c.instructions+=21;goto B508ea6;
case 0x508eae:c.instructions+=20;goto B508eae;
case 0x508eb3:c.instructions+=19;goto B508eb3;
case 0x508eb6:c.instructions+=18;goto B508eb6;
case 0x508eb9:c.instructions+=17;goto B508eb9;
case 0x508ebd:c.instructions+=16;goto B508ebd;
case 0x508ec0:c.instructions+=15;goto B508ec0;
case 0x508ec3:c.instructions+=14;goto B508ec3;
case 0x508ec5:c.instructions+=13;goto B508ec5;
case 0x508ec9:c.instructions+=12;goto B508ec9;
case 0x508ecc:c.instructions+=11;goto B508ecc;
case 0x508ed0:c.instructions+=10;goto B508ed0;
case 0x508ed3:c.instructions+=9;goto B508ed3;
case 0x508ed7:c.instructions+=8;goto B508ed7;
case 0x508ed9:c.instructions+=7;goto B508ed9;
case 0x508edd:c.instructions+=6;goto B508edd;
case 0x508ee1:c.instructions+=5;goto B508ee1;
case 0x508ee3:c.instructions+=4;goto B508ee3;
case 0x508ee6:c.instructions+=3;goto B508ee6;
case 0x508ee9:c.instructions+=2;goto B508ee9;
case 0x508eec:c.instructions+=1;goto B508eec;
case 0x508eee:goto L508eee;
case 0x508ef6:c.instructions+=1;goto B508ef6;
case 0x508efb:goto L508efb;
case 0x508eff:c.instructions+=2;goto B508eff;
case 0x508f07:c.instructions+=1;goto B508f07;
case 0x508f0d:goto L508f0d;
case 0x508f10:c.instructions+=29;goto B508f10;
case 0x508f14:c.instructions+=28;goto B508f14;
case 0x508f1b:c.instructions+=27;goto B508f1b;
case 0x508f1f:c.instructions+=26;goto B508f1f;
case 0x508f23:c.instructions+=25;goto B508f23;
case 0x508f26:c.instructions+=24;goto B508f26;
case 0x508f29:c.instructions+=23;goto B508f29;
case 0x508f2c:c.instructions+=22;goto B508f2c;
case 0x508f2e:c.instructions+=21;goto B508f2e;
case 0x508f31:c.instructions+=20;goto B508f31;
case 0x508f33:c.instructions+=19;goto B508f33;
case 0x508f37:c.instructions+=18;goto B508f37;
case 0x508f3a:c.instructions+=17;goto B508f3a;
case 0x508f3f:c.instructions+=16;goto B508f3f;
case 0x508f41:c.instructions+=15;goto B508f41;
case 0x508f45:c.instructions+=14;goto B508f45;
case 0x508f48:c.instructions+=13;goto B508f48;
case 0x508f4f:c.instructions+=12;goto B508f4f;
case 0x508f52:c.instructions+=11;goto B508f52;
case 0x508f57:c.instructions+=10;goto B508f57;
case 0x508f5a:c.instructions+=9;goto B508f5a;
case 0x508f5c:c.instructions+=8;goto B508f5c;
case 0x508f64:c.instructions+=7;goto B508f64;
case 0x508f6b:c.instructions+=6;goto B508f6b;
case 0x508f6e:c.instructions+=5;goto B508f6e;
case 0x508f71:c.instructions+=4;goto B508f71;
case 0x508f73:c.instructions+=3;goto B508f73;
case 0x508f77:c.instructions+=2;goto B508f77;
case 0x508f7a:c.instructions+=1;goto B508f7a;
case 0x508f80:goto L508f80;
case 0x508f82:c.instructions+=1;goto B508f82;
case 0x508f88:goto L508f88;
case 0x508f8b:c.instructions+=38;goto B508f8b;
case 0x508f8f:c.instructions+=37;goto B508f8f;
case 0x508f92:c.instructions+=36;goto B508f92;
case 0x508f95:c.instructions+=35;goto B508f95;
case 0x508f98:c.instructions+=34;goto B508f98;
case 0x508f9c:c.instructions+=33;goto B508f9c;
case 0x508f9f:c.instructions+=32;goto B508f9f;
case 0x508fa3:c.instructions+=31;goto B508fa3;
case 0x508faa:c.instructions+=30;goto B508faa;
case 0x508fb1:c.instructions+=29;goto B508fb1;
case 0x508fb3:c.instructions+=28;goto B508fb3;
case 0x508fb5:c.instructions+=27;goto B508fb5;
case 0x508fb8:c.instructions+=26;goto B508fb8;
case 0x508fbb:c.instructions+=25;goto B508fbb;
case 0x508fbe:c.instructions+=24;goto B508fbe;
case 0x508fc1:c.instructions+=23;goto B508fc1;
case 0x508fc4:c.instructions+=22;goto B508fc4;
case 0x508fc6:c.instructions+=21;goto B508fc6;
case 0x508fc8:c.instructions+=20;goto B508fc8;
case 0x508fca:c.instructions+=19;goto B508fca;
case 0x508fcc:c.instructions+=18;goto B508fcc;
case 0x508fce:c.instructions+=17;goto B508fce;
case 0x508fd1:c.instructions+=16;goto B508fd1;
case 0x508fd4:c.instructions+=15;goto B508fd4;
case 0x508fd6:c.instructions+=14;goto B508fd6;
case 0x508fd9:c.instructions+=13;goto B508fd9;
case 0x508fdc:c.instructions+=12;goto B508fdc;
case 0x508fe0:c.instructions+=11;goto B508fe0;
case 0x508fe4:c.instructions+=10;goto B508fe4;
case 0x508fe6:c.instructions+=9;goto B508fe6;
case 0x508fe9:c.instructions+=8;goto B508fe9;
case 0x508fed:c.instructions+=7;goto B508fed;
case 0x508ff0:c.instructions+=6;goto B508ff0;
case 0x508ff2:c.instructions+=5;goto B508ff2;
case 0x508ff4:c.instructions+=4;goto B508ff4;
case 0x508ff7:c.instructions+=3;goto B508ff7;
case 0x508ffa:c.instructions+=2;goto B508ffa;
case 0x508ffd:c.instructions+=1;goto B508ffd;
default:missing_instruction(c.pc);}
B508000:L508000:{c.instructions+=28;NFSU2_TR(0x508000);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508003:{NFSU2_TR(0x508003);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508007:{NFSU2_TR(0x508007);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50800a:{NFSU2_TR(0x50800a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50800b:{NFSU2_TR(0x50800b);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50800e:{NFSU2_TR(0x50800e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B508011:{NFSU2_TR(0x508011);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508014:{NFSU2_TR(0x508014);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508016:{NFSU2_TR(0x508016);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50801a:{NFSU2_TR(0x50801a);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50801d:{NFSU2_TR(0x50801d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B508020:{NFSU2_TR(0x508020);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508023:{NFSU2_TR(0x508023);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508026:{NFSU2_TR(0x508026);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508029:{NFSU2_TR(0x508029);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50802c:{NFSU2_TR(0x50802c);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508030:{NFSU2_TR(0x508030);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508034:{NFSU2_TR(0x508034);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508037:{NFSU2_TR(0x508037);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50803a:{NFSU2_TR(0x50803a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50803e:{NFSU2_TR(0x50803e);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508041:{NFSU2_TR(0x508041);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508044:{NFSU2_TR(0x508044);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508047:{NFSU2_TR(0x508047);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50804a:{NFSU2_TR(0x50804a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50804c:{NFSU2_TR(0x50804c);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50804f:{NFSU2_TR(0x50804f);
{u32 ea_=u32(r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508052:{NFSU2_TR(0x508052);
{goto L5081d2;}
}
B508057:L508057:{c.instructions+=2;NFSU2_TR(0x508057);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B508059:{NFSU2_TR(0x508059);
if(r1(R+518)){{goto L5081ce;}}
}
B50805f:L50805f:{c.instructions+=106;NFSU2_TR(0x50805f);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508062:{NFSU2_TR(0x508062);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508066:{NFSU2_TR(0x508066);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B508069:{NFSU2_TR(0x508069);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50806c:{NFSU2_TR(0x50806c);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508070:{NFSU2_TR(0x508070);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B508073:{NFSU2_TR(0x508073);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508076:{NFSU2_TR(0x508076);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50807a:{NFSU2_TR(0x50807a);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508081:{NFSU2_TR(0x508081);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B508088:{NFSU2_TR(0x508088);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50808a:{NFSU2_TR(0x50808a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50808c:{NFSU2_TR(0x50808c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50808f:{NFSU2_TR(0x50808f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B508092:{NFSU2_TR(0x508092);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508095:{NFSU2_TR(0x508095);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508098:{NFSU2_TR(0x508098);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50809c:{NFSU2_TR(0x50809c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50809f:{NFSU2_TR(0x50809f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5080a1:{NFSU2_TR(0x5080a1);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5080a3:{NFSU2_TR(0x5080a3);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5080a5:{NFSU2_TR(0x5080a5);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5080a7:{NFSU2_TR(0x5080a7);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5080aa:{NFSU2_TR(0x5080aa);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5080ad:{NFSU2_TR(0x5080ad);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5080af:{NFSU2_TR(0x5080af);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5080b2:{NFSU2_TR(0x5080b2);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5080b5:{NFSU2_TR(0x5080b5);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5080b9:{NFSU2_TR(0x5080b9);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5080bd:{NFSU2_TR(0x5080bd);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5080c0:{NFSU2_TR(0x5080c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5080c4:{NFSU2_TR(0x5080c4);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5080c6:{NFSU2_TR(0x5080c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5080c9:{NFSU2_TR(0x5080c9);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5080cb:{NFSU2_TR(0x5080cb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5080cd:{NFSU2_TR(0x5080cd);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5080d0:{NFSU2_TR(0x5080d0);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5080d3:{NFSU2_TR(0x5080d3);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5080d6:{NFSU2_TR(0x5080d6);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5080d9:{NFSU2_TR(0x5080d9);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5080dc:{NFSU2_TR(0x5080dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5080e0:{NFSU2_TR(0x5080e0);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5080e3:{NFSU2_TR(0x5080e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5080e7:{NFSU2_TR(0x5080e7);
{u32 ea_=u32(r4(R+12)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5080ea:{NFSU2_TR(0x5080ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5080ed:{NFSU2_TR(0x5080ed);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5080f1:{NFSU2_TR(0x5080f1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5080f3:{NFSU2_TR(0x5080f3);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5080f5:{NFSU2_TR(0x5080f5);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5080f9:{NFSU2_TR(0x5080f9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5080fb:{NFSU2_TR(0x5080fb);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5080ff:{NFSU2_TR(0x5080ff);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508103:{NFSU2_TR(0x508103);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508106:{NFSU2_TR(0x508106);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50810a:{NFSU2_TR(0x50810a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50810d:{NFSU2_TR(0x50810d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508111:{NFSU2_TR(0x508111);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508115:{NFSU2_TR(0x508115);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508117:{NFSU2_TR(0x508117);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50811a:{NFSU2_TR(0x50811a);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50811e:{NFSU2_TR(0x50811e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508122:{NFSU2_TR(0x508122);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508125:{NFSU2_TR(0x508125);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B508128:{NFSU2_TR(0x508128);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50812b:{NFSU2_TR(0x50812b);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50812e:{NFSU2_TR(0x50812e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B508131:{NFSU2_TR(0x508131);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508135:{NFSU2_TR(0x508135);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508138:{NFSU2_TR(0x508138);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50813c:{NFSU2_TR(0x50813c);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508143:{NFSU2_TR(0x508143);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508146:{NFSU2_TR(0x508146);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50814a:{NFSU2_TR(0x50814a);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50814f:{NFSU2_TR(0x50814f);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508156:{NFSU2_TR(0x508156);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508158:{NFSU2_TR(0x508158);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50815a:{NFSU2_TR(0x50815a);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50815e:{NFSU2_TR(0x50815e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B508160:{NFSU2_TR(0x508160);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508164:{NFSU2_TR(0x508164);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50816b:{NFSU2_TR(0x50816b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50816d:{NFSU2_TR(0x50816d);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508171:{NFSU2_TR(0x508171);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B508178:{NFSU2_TR(0x508178);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50817c:{NFSU2_TR(0x50817c);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50817f:{NFSU2_TR(0x50817f);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508183:{NFSU2_TR(0x508183);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508187:{NFSU2_TR(0x508187);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50818b:{NFSU2_TR(0x50818b);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50818f:{NFSU2_TR(0x50818f);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508196:{NFSU2_TR(0x508196);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50819a:{NFSU2_TR(0x50819a);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5081a1:{NFSU2_TR(0x5081a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5081a5:{NFSU2_TR(0x5081a5);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B5081a7:{NFSU2_TR(0x5081a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5081aa:{NFSU2_TR(0x5081aa);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5081ab:{NFSU2_TR(0x5081ab);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5081b2:{NFSU2_TR(0x5081b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5081b9:{NFSU2_TR(0x5081b9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5081bb:{NFSU2_TR(0x5081bb);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5081bd:{NFSU2_TR(0x5081bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5081c0:{NFSU2_TR(0x5081c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5081c4:{NFSU2_TR(0x5081c4);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5081c7:{NFSU2_TR(0x5081c7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B5081ca:{NFSU2_TR(0x5081ca);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5081cc:{NFSU2_TR(0x5081cc);
{goto L5081d2;}
}
B5081ce:L5081ce:{c.instructions+=1;NFSU2_TR(0x5081ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5081d2:L5081d2:{c.instructions+=6;NFSU2_TR(0x5081d2);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5081d5:{NFSU2_TR(0x5081d5);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5081d8:{NFSU2_TR(0x5081d8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5081da:{NFSU2_TR(0x5081da);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5081de:{NFSU2_TR(0x5081de);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5081e1:{NFSU2_TR(0x5081e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L508351;}}
}
B5081e7:L5081e7:{c.instructions+=2;NFSU2_TR(0x5081e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5081e9:{NFSU2_TR(0x5081e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50830a;}}
}
B5081ef:L5081ef:{c.instructions+=92;NFSU2_TR(0x5081ef);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5081f2:{NFSU2_TR(0x5081f2);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5081f5:{NFSU2_TR(0x5081f5);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5081f8:{NFSU2_TR(0x5081f8);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5081fb:{NFSU2_TR(0x5081fb);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5081fd:{NFSU2_TR(0x5081fd);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508200:{NFSU2_TR(0x508200);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508207:{NFSU2_TR(0x508207);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50820e:{NFSU2_TR(0x50820e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508210:{NFSU2_TR(0x508210);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508212:{NFSU2_TR(0x508212);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508215:{NFSU2_TR(0x508215);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508219:{NFSU2_TR(0x508219);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50821c:{NFSU2_TR(0x50821c);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50821f:{NFSU2_TR(0x50821f);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508222:{NFSU2_TR(0x508222);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B508225:{NFSU2_TR(0x508225);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B508227:{NFSU2_TR(0x508227);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B508229:{NFSU2_TR(0x508229);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50822b:{NFSU2_TR(0x50822b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50822d:{NFSU2_TR(0x50822d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B508230:{NFSU2_TR(0x508230);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508233:{NFSU2_TR(0x508233);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B508235:{NFSU2_TR(0x508235);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B508238:{NFSU2_TR(0x508238);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50823b:{NFSU2_TR(0x50823b);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50823e:{NFSU2_TR(0x50823e);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508241:{NFSU2_TR(0x508241);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508243:{NFSU2_TR(0x508243);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508246:{NFSU2_TR(0x508246);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508248:{NFSU2_TR(0x508248);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50824a:{NFSU2_TR(0x50824a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50824d:{NFSU2_TR(0x50824d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508250:{NFSU2_TR(0x508250);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508253:{NFSU2_TR(0x508253);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508256:{NFSU2_TR(0x508256);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508259:{NFSU2_TR(0x508259);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50825c:{NFSU2_TR(0x50825c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50825e:{NFSU2_TR(0x50825e);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508261:{NFSU2_TR(0x508261);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508263:{NFSU2_TR(0x508263);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B508265:{NFSU2_TR(0x508265);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508269:{NFSU2_TR(0x508269);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50826b:{NFSU2_TR(0x50826b);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50826f:{NFSU2_TR(0x50826f);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508273:{NFSU2_TR(0x508273);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508276:{NFSU2_TR(0x508276);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50827a:{NFSU2_TR(0x50827a);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50827d:{NFSU2_TR(0x50827d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508280:{NFSU2_TR(0x508280);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508282:{NFSU2_TR(0x508282);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508285:{NFSU2_TR(0x508285);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508289:{NFSU2_TR(0x508289);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50828d:{NFSU2_TR(0x50828d);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508290:{NFSU2_TR(0x508290);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508293:{NFSU2_TR(0x508293);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508296:{NFSU2_TR(0x508296);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508299:{NFSU2_TR(0x508299);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50829c:{NFSU2_TR(0x50829c);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50829f:{NFSU2_TR(0x50829f);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5082a3:{NFSU2_TR(0x5082a3);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5082a5:{NFSU2_TR(0x5082a5);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5082a8:{NFSU2_TR(0x5082a8);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5082ac:{NFSU2_TR(0x5082ac);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5082ae:{NFSU2_TR(0x5082ae);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5082b0:{NFSU2_TR(0x5082b0);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5082b1:{NFSU2_TR(0x5082b1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B5082b4:{NFSU2_TR(0x5082b4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B5082b7:{NFSU2_TR(0x5082b7);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5082bb:{NFSU2_TR(0x5082bb);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5082c0:{NFSU2_TR(0x5082c0);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5082c2:{NFSU2_TR(0x5082c2);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5082c6:{NFSU2_TR(0x5082c6);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5082ca:{NFSU2_TR(0x5082ca);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5082cc:{NFSU2_TR(0x5082cc);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5082d0:{NFSU2_TR(0x5082d0);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5082d4:{NFSU2_TR(0x5082d4);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5082d8:{NFSU2_TR(0x5082d8);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5082db:{NFSU2_TR(0x5082db);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5082df:{NFSU2_TR(0x5082df);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5082e2:{NFSU2_TR(0x5082e2);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5082e6:{NFSU2_TR(0x5082e6);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5082e9:{NFSU2_TR(0x5082e9);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5082ed:{NFSU2_TR(0x5082ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5082f1:{NFSU2_TR(0x5082f1);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5082f3:{NFSU2_TR(0x5082f3);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5082f6:{NFSU2_TR(0x5082f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5082f9:{NFSU2_TR(0x5082f9);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5082fd:{NFSU2_TR(0x5082fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508301:{NFSU2_TR(0x508301);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508304:{NFSU2_TR(0x508304);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508307:{NFSU2_TR(0x508307);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50830a:L50830a:{c.instructions+=24;NFSU2_TR(0x50830a);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50830d:{NFSU2_TR(0x50830d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508311:{NFSU2_TR(0x508311);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508313:{NFSU2_TR(0x508313);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508316:{NFSU2_TR(0x508316);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508318:{NFSU2_TR(0x508318);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50831a:{NFSU2_TR(0x50831a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50831d:{NFSU2_TR(0x50831d);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508320:{NFSU2_TR(0x508320);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508322:{NFSU2_TR(0x508322);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508325:{NFSU2_TR(0x508325);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508328:{NFSU2_TR(0x508328);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50832b:{NFSU2_TR(0x50832b);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50832f:{NFSU2_TR(0x50832f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508333:{NFSU2_TR(0x508333);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508336:{NFSU2_TR(0x508336);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508339:{NFSU2_TR(0x508339);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B50833b:{NFSU2_TR(0x50833b);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50833e:{NFSU2_TR(0x50833e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508342:{NFSU2_TR(0x508342);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508344:{NFSU2_TR(0x508344);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508346:{NFSU2_TR(0x508346);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508349:{NFSU2_TR(0x508349);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50834c:{NFSU2_TR(0x50834c);
{goto L508481;}
}
B508351:L508351:{c.instructions+=2;NFSU2_TR(0x508351);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B508353:{NFSU2_TR(0x508353);
if(r1(R+518)){{goto L50848f;}}
}
B508359:L508359:{c.instructions+=88;NFSU2_TR(0x508359);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50835c:{NFSU2_TR(0x50835c);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50835f:{NFSU2_TR(0x50835f);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508362:{NFSU2_TR(0x508362);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508365:{NFSU2_TR(0x508365);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508367:{NFSU2_TR(0x508367);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50836a:{NFSU2_TR(0x50836a);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508371:{NFSU2_TR(0x508371);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508378:{NFSU2_TR(0x508378);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50837a:{NFSU2_TR(0x50837a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50837c:{NFSU2_TR(0x50837c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50837f:{NFSU2_TR(0x50837f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508383:{NFSU2_TR(0x508383);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508386:{NFSU2_TR(0x508386);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508389:{NFSU2_TR(0x508389);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50838c:{NFSU2_TR(0x50838c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50838f:{NFSU2_TR(0x50838f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B508391:{NFSU2_TR(0x508391);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B508393:{NFSU2_TR(0x508393);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508395:{NFSU2_TR(0x508395);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B508397:{NFSU2_TR(0x508397);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50839a:{NFSU2_TR(0x50839a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50839d:{NFSU2_TR(0x50839d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50839f:{NFSU2_TR(0x50839f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5083a2:{NFSU2_TR(0x5083a2);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5083a5:{NFSU2_TR(0x5083a5);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5083a8:{NFSU2_TR(0x5083a8);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5083ab:{NFSU2_TR(0x5083ab);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5083ad:{NFSU2_TR(0x5083ad);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5083b0:{NFSU2_TR(0x5083b0);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5083b2:{NFSU2_TR(0x5083b2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5083b4:{NFSU2_TR(0x5083b4);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5083b7:{NFSU2_TR(0x5083b7);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5083ba:{NFSU2_TR(0x5083ba);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5083bd:{NFSU2_TR(0x5083bd);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5083c0:{NFSU2_TR(0x5083c0);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5083c3:{NFSU2_TR(0x5083c3);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5083c6:{NFSU2_TR(0x5083c6);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5083c8:{NFSU2_TR(0x5083c8);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5083cb:{NFSU2_TR(0x5083cb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5083cd:{NFSU2_TR(0x5083cd);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5083cf:{NFSU2_TR(0x5083cf);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5083d3:{NFSU2_TR(0x5083d3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5083d5:{NFSU2_TR(0x5083d5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5083d9:{NFSU2_TR(0x5083d9);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5083dd:{NFSU2_TR(0x5083dd);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5083e0:{NFSU2_TR(0x5083e0);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5083e4:{NFSU2_TR(0x5083e4);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5083e7:{NFSU2_TR(0x5083e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5083ea:{NFSU2_TR(0x5083ea);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5083ec:{NFSU2_TR(0x5083ec);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5083ef:{NFSU2_TR(0x5083ef);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5083f3:{NFSU2_TR(0x5083f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5083f7:{NFSU2_TR(0x5083f7);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5083fa:{NFSU2_TR(0x5083fa);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5083fd:{NFSU2_TR(0x5083fd);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508400:{NFSU2_TR(0x508400);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508403:{NFSU2_TR(0x508403);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508406:{NFSU2_TR(0x508406);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508409:{NFSU2_TR(0x508409);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508410:{NFSU2_TR(0x508410);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508412:{NFSU2_TR(0x508412);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508415:{NFSU2_TR(0x508415);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50841c:{NFSU2_TR(0x50841c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50841e:{NFSU2_TR(0x50841e);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B508420:{NFSU2_TR(0x508420);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B508425:{NFSU2_TR(0x508425);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508429:{NFSU2_TR(0x508429);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50842b:{NFSU2_TR(0x50842b);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50842f:{NFSU2_TR(0x50842f);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508436:{NFSU2_TR(0x508436);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B508438:{NFSU2_TR(0x508438);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50843c:{NFSU2_TR(0x50843c);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B508443:{NFSU2_TR(0x508443);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508447:{NFSU2_TR(0x508447);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50844a:{NFSU2_TR(0x50844a);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50844e:{NFSU2_TR(0x50844e);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508451:{NFSU2_TR(0x508451);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508455:{NFSU2_TR(0x508455);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508458:{NFSU2_TR(0x508458);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50845f:{NFSU2_TR(0x50845f);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508466:{NFSU2_TR(0x508466);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B508468:{NFSU2_TR(0x508468);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50846b:{NFSU2_TR(0x50846b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50846e:{NFSU2_TR(0x50846e);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508475:{NFSU2_TR(0x508475);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50847c:{NFSU2_TR(0x50847c);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50847e:{NFSU2_TR(0x50847e);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508481:L508481:{c.instructions+=5;NFSU2_TR(0x508481);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B508482:{NFSU2_TR(0x508482);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508485:{NFSU2_TR(0x508485);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B508488:{NFSU2_TR(0x508488);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50848c:{NFSU2_TR(0x50848c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B50848f:L50848f:{c.instructions+=6;NFSU2_TR(0x50848f);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508492:{NFSU2_TR(0x508492);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B508495:{NFSU2_TR(0x508495);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B508497:{NFSU2_TR(0x508497);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B50849b:{NFSU2_TR(0x50849b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50849e:{NFSU2_TR(0x50849e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50860a;}}
}
B5084a4:L5084a4:{c.instructions+=2;NFSU2_TR(0x5084a4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5084a6:{NFSU2_TR(0x5084a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5085c4;}}
}
B5084ac:L5084ac:{c.instructions+=92;NFSU2_TR(0x5084ac);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5084af:{NFSU2_TR(0x5084af);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5084b2:{NFSU2_TR(0x5084b2);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5084b5:{NFSU2_TR(0x5084b5);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5084b8:{NFSU2_TR(0x5084b8);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5084bb:{NFSU2_TR(0x5084bb);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5084bd:{NFSU2_TR(0x5084bd);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5084c4:{NFSU2_TR(0x5084c4);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5084cb:{NFSU2_TR(0x5084cb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5084cd:{NFSU2_TR(0x5084cd);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5084cf:{NFSU2_TR(0x5084cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5084d2:{NFSU2_TR(0x5084d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5084d6:{NFSU2_TR(0x5084d6);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5084d9:{NFSU2_TR(0x5084d9);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5084dc:{NFSU2_TR(0x5084dc);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5084df:{NFSU2_TR(0x5084df);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5084e2:{NFSU2_TR(0x5084e2);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5084e4:{NFSU2_TR(0x5084e4);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5084e6:{NFSU2_TR(0x5084e6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5084e8:{NFSU2_TR(0x5084e8);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5084ea:{NFSU2_TR(0x5084ea);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5084ed:{NFSU2_TR(0x5084ed);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5084f0:{NFSU2_TR(0x5084f0);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5084f2:{NFSU2_TR(0x5084f2);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5084f5:{NFSU2_TR(0x5084f5);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5084f8:{NFSU2_TR(0x5084f8);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5084fb:{NFSU2_TR(0x5084fb);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5084fd:{NFSU2_TR(0x5084fd);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5084ff:{NFSU2_TR(0x5084ff);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508502:{NFSU2_TR(0x508502);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508504:{NFSU2_TR(0x508504);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508506:{NFSU2_TR(0x508506);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508509:{NFSU2_TR(0x508509);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50850c:{NFSU2_TR(0x50850c);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50850f:{NFSU2_TR(0x50850f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508512:{NFSU2_TR(0x508512);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508515:{NFSU2_TR(0x508515);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508518:{NFSU2_TR(0x508518);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50851b:{NFSU2_TR(0x50851b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50851d:{NFSU2_TR(0x50851d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50851f:{NFSU2_TR(0x50851f);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B508521:{NFSU2_TR(0x508521);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508525:{NFSU2_TR(0x508525);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B508527:{NFSU2_TR(0x508527);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50852b:{NFSU2_TR(0x50852b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50852f:{NFSU2_TR(0x50852f);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508532:{NFSU2_TR(0x508532);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508536:{NFSU2_TR(0x508536);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508538:{NFSU2_TR(0x508538);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50853b:{NFSU2_TR(0x50853b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50853d:{NFSU2_TR(0x50853d);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508540:{NFSU2_TR(0x508540);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508544:{NFSU2_TR(0x508544);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508548:{NFSU2_TR(0x508548);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50854b:{NFSU2_TR(0x50854b);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50854e:{NFSU2_TR(0x50854e);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508551:{NFSU2_TR(0x508551);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508554:{NFSU2_TR(0x508554);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508557:{NFSU2_TR(0x508557);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50855a:{NFSU2_TR(0x50855a);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50855e:{NFSU2_TR(0x50855e);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508561:{NFSU2_TR(0x508561);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508563:{NFSU2_TR(0x508563);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508567:{NFSU2_TR(0x508567);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508569:{NFSU2_TR(0x508569);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50856a:{NFSU2_TR(0x50856a);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50856c:{NFSU2_TR(0x50856c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B50856f:{NFSU2_TR(0x50856f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B508572:{NFSU2_TR(0x508572);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B508577:{NFSU2_TR(0x508577);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50857b:{NFSU2_TR(0x50857b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50857d:{NFSU2_TR(0x50857d);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508581:{NFSU2_TR(0x508581);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508585:{NFSU2_TR(0x508585);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B508587:{NFSU2_TR(0x508587);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50858b:{NFSU2_TR(0x50858b);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50858f:{NFSU2_TR(0x50858f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508593:{NFSU2_TR(0x508593);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508596:{NFSU2_TR(0x508596);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50859a:{NFSU2_TR(0x50859a);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50859d:{NFSU2_TR(0x50859d);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5085a1:{NFSU2_TR(0x5085a1);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5085a4:{NFSU2_TR(0x5085a4);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5085a8:{NFSU2_TR(0x5085a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5085ac:{NFSU2_TR(0x5085ac);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5085ae:{NFSU2_TR(0x5085ae);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5085b0:{NFSU2_TR(0x5085b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5085b3:{NFSU2_TR(0x5085b3);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5085b7:{NFSU2_TR(0x5085b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5085bb:{NFSU2_TR(0x5085bb);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5085be:{NFSU2_TR(0x5085be);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5085c1:{NFSU2_TR(0x5085c1);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5085c4:L5085c4:{c.instructions+=23;NFSU2_TR(0x5085c4);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5085c7:{NFSU2_TR(0x5085c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5085cb:{NFSU2_TR(0x5085cb);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5085ce:{NFSU2_TR(0x5085ce);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5085d1:{NFSU2_TR(0x5085d1);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5085d3:{NFSU2_TR(0x5085d3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5085d5:{NFSU2_TR(0x5085d5);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5085d8:{NFSU2_TR(0x5085d8);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5085db:{NFSU2_TR(0x5085db);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5085de:{NFSU2_TR(0x5085de);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5085e1:{NFSU2_TR(0x5085e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5085e4:{NFSU2_TR(0x5085e4);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5085e7:{NFSU2_TR(0x5085e7);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5085eb:{NFSU2_TR(0x5085eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5085ee:{NFSU2_TR(0x5085ee);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5085f1:{NFSU2_TR(0x5085f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5085f5:{NFSU2_TR(0x5085f5);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5085f8:{NFSU2_TR(0x5085f8);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5085fb:{NFSU2_TR(0x5085fb);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5085fd:{NFSU2_TR(0x5085fd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5085ff:{NFSU2_TR(0x5085ff);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508602:{NFSU2_TR(0x508602);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508605:{NFSU2_TR(0x508605);
{goto L508737;}
}
B50860a:L50860a:{c.instructions+=2;NFSU2_TR(0x50860a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50860c:{NFSU2_TR(0x50860c);
if(r1(R+518)){{goto L508745;}}
}
B508612:L508612:{c.instructions+=88;NFSU2_TR(0x508612);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508615:{NFSU2_TR(0x508615);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508618:{NFSU2_TR(0x508618);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50861b:{NFSU2_TR(0x50861b);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50861e:{NFSU2_TR(0x50861e);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508621:{NFSU2_TR(0x508621);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508623:{NFSU2_TR(0x508623);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50862a:{NFSU2_TR(0x50862a);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508631:{NFSU2_TR(0x508631);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508633:{NFSU2_TR(0x508633);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508635:{NFSU2_TR(0x508635);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508638:{NFSU2_TR(0x508638);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50863c:{NFSU2_TR(0x50863c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50863f:{NFSU2_TR(0x50863f);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508642:{NFSU2_TR(0x508642);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508645:{NFSU2_TR(0x508645);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B508648:{NFSU2_TR(0x508648);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50864a:{NFSU2_TR(0x50864a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50864c:{NFSU2_TR(0x50864c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50864e:{NFSU2_TR(0x50864e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B508650:{NFSU2_TR(0x508650);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B508653:{NFSU2_TR(0x508653);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508656:{NFSU2_TR(0x508656);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B508658:{NFSU2_TR(0x508658);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50865b:{NFSU2_TR(0x50865b);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50865e:{NFSU2_TR(0x50865e);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508661:{NFSU2_TR(0x508661);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508663:{NFSU2_TR(0x508663);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508665:{NFSU2_TR(0x508665);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508668:{NFSU2_TR(0x508668);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50866a:{NFSU2_TR(0x50866a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50866c:{NFSU2_TR(0x50866c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50866f:{NFSU2_TR(0x50866f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508672:{NFSU2_TR(0x508672);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508675:{NFSU2_TR(0x508675);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508678:{NFSU2_TR(0x508678);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50867b:{NFSU2_TR(0x50867b);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50867e:{NFSU2_TR(0x50867e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508681:{NFSU2_TR(0x508681);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508683:{NFSU2_TR(0x508683);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508685:{NFSU2_TR(0x508685);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B508687:{NFSU2_TR(0x508687);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50868b:{NFSU2_TR(0x50868b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50868d:{NFSU2_TR(0x50868d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508691:{NFSU2_TR(0x508691);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508695:{NFSU2_TR(0x508695);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508698:{NFSU2_TR(0x508698);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50869c:{NFSU2_TR(0x50869c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50869e:{NFSU2_TR(0x50869e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5086a1:{NFSU2_TR(0x5086a1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5086a3:{NFSU2_TR(0x5086a3);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5086a6:{NFSU2_TR(0x5086a6);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5086aa:{NFSU2_TR(0x5086aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5086ae:{NFSU2_TR(0x5086ae);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5086b1:{NFSU2_TR(0x5086b1);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5086b4:{NFSU2_TR(0x5086b4);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5086b7:{NFSU2_TR(0x5086b7);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5086ba:{NFSU2_TR(0x5086ba);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5086bd:{NFSU2_TR(0x5086bd);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5086c0:{NFSU2_TR(0x5086c0);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5086c7:{NFSU2_TR(0x5086c7);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5086ca:{NFSU2_TR(0x5086ca);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5086cc:{NFSU2_TR(0x5086cc);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5086d3:{NFSU2_TR(0x5086d3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5086d5:{NFSU2_TR(0x5086d5);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5086da:{NFSU2_TR(0x5086da);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5086dc:{NFSU2_TR(0x5086dc);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5086e0:{NFSU2_TR(0x5086e0);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5086e2:{NFSU2_TR(0x5086e2);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5086e6:{NFSU2_TR(0x5086e6);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5086ed:{NFSU2_TR(0x5086ed);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5086ef:{NFSU2_TR(0x5086ef);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5086f3:{NFSU2_TR(0x5086f3);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5086fa:{NFSU2_TR(0x5086fa);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5086fe:{NFSU2_TR(0x5086fe);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508701:{NFSU2_TR(0x508701);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508705:{NFSU2_TR(0x508705);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508708:{NFSU2_TR(0x508708);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50870c:{NFSU2_TR(0x50870c);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50870f:{NFSU2_TR(0x50870f);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508716:{NFSU2_TR(0x508716);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50871d:{NFSU2_TR(0x50871d);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B50871f:{NFSU2_TR(0x50871f);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508721:{NFSU2_TR(0x508721);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508724:{NFSU2_TR(0x508724);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50872b:{NFSU2_TR(0x50872b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508732:{NFSU2_TR(0x508732);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508734:{NFSU2_TR(0x508734);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508737:L508737:{c.instructions+=5;NFSU2_TR(0x508737);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B508738:{NFSU2_TR(0x508738);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50873b:{NFSU2_TR(0x50873b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B50873e:{NFSU2_TR(0x50873e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508742:{NFSU2_TR(0x508742);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B508745:L508745:{c.instructions+=6;NFSU2_TR(0x508745);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508748:{NFSU2_TR(0x508748);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50874b:{NFSU2_TR(0x50874b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50874d:{NFSU2_TR(0x50874d);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B508751:{NFSU2_TR(0x508751);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B508754:{NFSU2_TR(0x508754);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5088c2;}}
}
B50875a:L50875a:{c.instructions+=2;NFSU2_TR(0x50875a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50875c:{NFSU2_TR(0x50875c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50887c;}}
}
B508762:L508762:{c.instructions+=91;NFSU2_TR(0x508762);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508765:{NFSU2_TR(0x508765);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508768:{NFSU2_TR(0x508768);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50876b:{NFSU2_TR(0x50876b);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50876e:{NFSU2_TR(0x50876e);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508771:{NFSU2_TR(0x508771);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508774:{NFSU2_TR(0x508774);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50877b:{NFSU2_TR(0x50877b);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508782:{NFSU2_TR(0x508782);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508784:{NFSU2_TR(0x508784);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508786:{NFSU2_TR(0x508786);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508789:{NFSU2_TR(0x508789);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50878d:{NFSU2_TR(0x50878d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508790:{NFSU2_TR(0x508790);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508793:{NFSU2_TR(0x508793);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508796:{NFSU2_TR(0x508796);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B508799:{NFSU2_TR(0x508799);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50879b:{NFSU2_TR(0x50879b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50879d:{NFSU2_TR(0x50879d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50879f:{NFSU2_TR(0x50879f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5087a1:{NFSU2_TR(0x5087a1);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5087a4:{NFSU2_TR(0x5087a4);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5087a7:{NFSU2_TR(0x5087a7);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5087a9:{NFSU2_TR(0x5087a9);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5087ac:{NFSU2_TR(0x5087ac);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5087af:{NFSU2_TR(0x5087af);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5087b2:{NFSU2_TR(0x5087b2);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5087b5:{NFSU2_TR(0x5087b5);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5087b7:{NFSU2_TR(0x5087b7);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5087ba:{NFSU2_TR(0x5087ba);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5087bc:{NFSU2_TR(0x5087bc);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5087be:{NFSU2_TR(0x5087be);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5087c1:{NFSU2_TR(0x5087c1);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5087c4:{NFSU2_TR(0x5087c4);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5087c7:{NFSU2_TR(0x5087c7);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5087ca:{NFSU2_TR(0x5087ca);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5087cd:{NFSU2_TR(0x5087cd);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5087d0:{NFSU2_TR(0x5087d0);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5087d3:{NFSU2_TR(0x5087d3);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5087d6:{NFSU2_TR(0x5087d6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5087d8:{NFSU2_TR(0x5087d8);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5087da:{NFSU2_TR(0x5087da);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5087de:{NFSU2_TR(0x5087de);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5087e0:{NFSU2_TR(0x5087e0);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5087e4:{NFSU2_TR(0x5087e4);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5087e8:{NFSU2_TR(0x5087e8);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5087eb:{NFSU2_TR(0x5087eb);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5087ef:{NFSU2_TR(0x5087ef);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5087f2:{NFSU2_TR(0x5087f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5087f5:{NFSU2_TR(0x5087f5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5087f7:{NFSU2_TR(0x5087f7);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5087fa:{NFSU2_TR(0x5087fa);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5087fe:{NFSU2_TR(0x5087fe);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508801:{NFSU2_TR(0x508801);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508804:{NFSU2_TR(0x508804);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508807:{NFSU2_TR(0x508807);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50880a:{NFSU2_TR(0x50880a);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50880d:{NFSU2_TR(0x50880d);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508810:{NFSU2_TR(0x508810);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508814:{NFSU2_TR(0x508814);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508817:{NFSU2_TR(0x508817);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50881a:{NFSU2_TR(0x50881a);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50881e:{NFSU2_TR(0x50881e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50881f:{NFSU2_TR(0x50881f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508821:{NFSU2_TR(0x508821);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B508824:{NFSU2_TR(0x508824);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B508826:{NFSU2_TR(0x508826);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B508829:{NFSU2_TR(0x508829);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50882e:{NFSU2_TR(0x50882e);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508832:{NFSU2_TR(0x508832);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B508834:{NFSU2_TR(0x508834);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508838:{NFSU2_TR(0x508838);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50883c:{NFSU2_TR(0x50883c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50883e:{NFSU2_TR(0x50883e);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508842:{NFSU2_TR(0x508842);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B508846:{NFSU2_TR(0x508846);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50884a:{NFSU2_TR(0x50884a);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50884d:{NFSU2_TR(0x50884d);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508851:{NFSU2_TR(0x508851);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508854:{NFSU2_TR(0x508854);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508858:{NFSU2_TR(0x508858);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50885b:{NFSU2_TR(0x50885b);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50885f:{NFSU2_TR(0x50885f);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508863:{NFSU2_TR(0x508863);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B508865:{NFSU2_TR(0x508865);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508868:{NFSU2_TR(0x508868);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50886b:{NFSU2_TR(0x50886b);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50886f:{NFSU2_TR(0x50886f);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508873:{NFSU2_TR(0x508873);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508876:{NFSU2_TR(0x508876);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508879:{NFSU2_TR(0x508879);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50887c:L50887c:{c.instructions+=23;NFSU2_TR(0x50887c);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50887f:{NFSU2_TR(0x50887f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508883:{NFSU2_TR(0x508883);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508886:{NFSU2_TR(0x508886);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508889:{NFSU2_TR(0x508889);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50888b:{NFSU2_TR(0x50888b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50888d:{NFSU2_TR(0x50888d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508890:{NFSU2_TR(0x508890);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508893:{NFSU2_TR(0x508893);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508896:{NFSU2_TR(0x508896);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508899:{NFSU2_TR(0x508899);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50889c:{NFSU2_TR(0x50889c);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50889f:{NFSU2_TR(0x50889f);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5088a3:{NFSU2_TR(0x5088a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5088a6:{NFSU2_TR(0x5088a6);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5088a9:{NFSU2_TR(0x5088a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5088ad:{NFSU2_TR(0x5088ad);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5088b0:{NFSU2_TR(0x5088b0);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5088b3:{NFSU2_TR(0x5088b3);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5088b5:{NFSU2_TR(0x5088b5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5088b7:{NFSU2_TR(0x5088b7);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5088ba:{NFSU2_TR(0x5088ba);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5088bd:{NFSU2_TR(0x5088bd);
{goto L5089f1;}
}
B5088c2:L5088c2:{c.instructions+=2;NFSU2_TR(0x5088c2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5088c4:{NFSU2_TR(0x5088c4);
if(r1(R+518)){{goto L5089ff;}}
}
B5088ca:L5088ca:{c.instructions+=87;NFSU2_TR(0x5088ca);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5088cd:{NFSU2_TR(0x5088cd);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5088d0:{NFSU2_TR(0x5088d0);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5088d3:{NFSU2_TR(0x5088d3);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5088d6:{NFSU2_TR(0x5088d6);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5088d9:{NFSU2_TR(0x5088d9);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5088dc:{NFSU2_TR(0x5088dc);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5088e3:{NFSU2_TR(0x5088e3);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5088ea:{NFSU2_TR(0x5088ea);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5088ec:{NFSU2_TR(0x5088ec);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5088ee:{NFSU2_TR(0x5088ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5088f1:{NFSU2_TR(0x5088f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5088f5:{NFSU2_TR(0x5088f5);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5088f8:{NFSU2_TR(0x5088f8);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5088fb:{NFSU2_TR(0x5088fb);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5088fe:{NFSU2_TR(0x5088fe);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B508901:{NFSU2_TR(0x508901);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B508903:{NFSU2_TR(0x508903);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B508905:{NFSU2_TR(0x508905);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508907:{NFSU2_TR(0x508907);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B508909:{NFSU2_TR(0x508909);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50890c:{NFSU2_TR(0x50890c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50890f:{NFSU2_TR(0x50890f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B508911:{NFSU2_TR(0x508911);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B508914:{NFSU2_TR(0x508914);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508917:{NFSU2_TR(0x508917);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50891a:{NFSU2_TR(0x50891a);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50891d:{NFSU2_TR(0x50891d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50891f:{NFSU2_TR(0x50891f);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508922:{NFSU2_TR(0x508922);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508924:{NFSU2_TR(0x508924);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508926:{NFSU2_TR(0x508926);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508929:{NFSU2_TR(0x508929);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50892c:{NFSU2_TR(0x50892c);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50892f:{NFSU2_TR(0x50892f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508932:{NFSU2_TR(0x508932);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508935:{NFSU2_TR(0x508935);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508938:{NFSU2_TR(0x508938);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50893b:{NFSU2_TR(0x50893b);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50893e:{NFSU2_TR(0x50893e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508940:{NFSU2_TR(0x508940);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B508942:{NFSU2_TR(0x508942);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508946:{NFSU2_TR(0x508946);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B508948:{NFSU2_TR(0x508948);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50894c:{NFSU2_TR(0x50894c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508950:{NFSU2_TR(0x508950);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508953:{NFSU2_TR(0x508953);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508957:{NFSU2_TR(0x508957);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50895a:{NFSU2_TR(0x50895a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50895d:{NFSU2_TR(0x50895d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50895f:{NFSU2_TR(0x50895f);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508962:{NFSU2_TR(0x508962);
{u32 ea_=u32((r4(R+12)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508966:{NFSU2_TR(0x508966);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508969:{NFSU2_TR(0x508969);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50896c:{NFSU2_TR(0x50896c);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50896f:{NFSU2_TR(0x50896f);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508972:{NFSU2_TR(0x508972);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508975:{NFSU2_TR(0x508975);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508978:{NFSU2_TR(0x508978);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50897f:{NFSU2_TR(0x50897f);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508982:{NFSU2_TR(0x508982);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508985:{NFSU2_TR(0x508985);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50898c:{NFSU2_TR(0x50898c);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B508991:{NFSU2_TR(0x508991);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508993:{NFSU2_TR(0x508993);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B508995:{NFSU2_TR(0x508995);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508999:{NFSU2_TR(0x508999);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50899b:{NFSU2_TR(0x50899b);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50899f:{NFSU2_TR(0x50899f);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5089a6:{NFSU2_TR(0x5089a6);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5089a8:{NFSU2_TR(0x5089a8);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5089ac:{NFSU2_TR(0x5089ac);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5089b3:{NFSU2_TR(0x5089b3);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5089b7:{NFSU2_TR(0x5089b7);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5089ba:{NFSU2_TR(0x5089ba);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5089be:{NFSU2_TR(0x5089be);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5089c1:{NFSU2_TR(0x5089c1);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5089c5:{NFSU2_TR(0x5089c5);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5089c8:{NFSU2_TR(0x5089c8);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5089cf:{NFSU2_TR(0x5089cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5089d6:{NFSU2_TR(0x5089d6);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5089d8:{NFSU2_TR(0x5089d8);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5089db:{NFSU2_TR(0x5089db);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5089de:{NFSU2_TR(0x5089de);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5089e5:{NFSU2_TR(0x5089e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5089ec:{NFSU2_TR(0x5089ec);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5089ee:{NFSU2_TR(0x5089ee);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5089f1:L5089f1:{c.instructions+=5;NFSU2_TR(0x5089f1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5089f2:{NFSU2_TR(0x5089f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5089f5:{NFSU2_TR(0x5089f5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B5089f8:{NFSU2_TR(0x5089f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5089fc:{NFSU2_TR(0x5089fc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B5089ff:L5089ff:{c.instructions+=22;NFSU2_TR(0x5089ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508a03:{NFSU2_TR(0x508a03);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B508a0a:{NFSU2_TR(0x508a0a);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508a11:{NFSU2_TR(0x508a11);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508a15:{NFSU2_TR(0x508a15);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B508a17:{NFSU2_TR(0x508a17);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508a1b:{NFSU2_TR(0x508a1b);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B508a22:{NFSU2_TR(0x508a22);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B508a24:{NFSU2_TR(0x508a24);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508a28:{NFSU2_TR(0x508a28);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B508a2c:{NFSU2_TR(0x508a2c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B508a2f:{NFSU2_TR(0x508a2f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B508a32:{NFSU2_TR(0x508a32);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508a36:{NFSU2_TR(0x508a36);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508a3a:{NFSU2_TR(0x508a3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508a3e:{NFSU2_TR(0x508a3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B508a41:{NFSU2_TR(0x508a41);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B508a44:{NFSU2_TR(0x508a44);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x40ull))));
}
B508a47:{NFSU2_TR(0x508a47);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B508a4a:{NFSU2_TR(0x508a4a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B508a4c:{NFSU2_TR(0x508a4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508a50:{NFSU2_TR(0x508a50);
if(r1(R+512)){TAIL_STATIC(0x507e8cu,507);}
}
B508a56:L508a56:{c.instructions+=7;NFSU2_TR(0x508a56);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B508a5d:{NFSU2_TR(0x508a5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508a60:{NFSU2_TR(0x508a60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B508a63:{NFSU2_TR(0x508a63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B508a66:{NFSU2_TR(0x508a66);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B508a6a:{NFSU2_TR(0x508a6a);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
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
B508a6d:{NFSU2_TR(0x508a6d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L508e50;}}
}
B508a73:L508a73:{c.instructions+=25;NFSU2_TR(0x508a73);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B508a7a:{NFSU2_TR(0x508a7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508a7e:{NFSU2_TR(0x508a7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B508a82:{NFSU2_TR(0x508a82);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B508a85:{NFSU2_TR(0x508a85);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B508a87:{NFSU2_TR(0x508a87);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508a8b:{NFSU2_TR(0x508a8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508a8e:{NFSU2_TR(0x508a8e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B508a90:{NFSU2_TR(0x508a90);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508a94:{NFSU2_TR(0x508a94);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B508a97:{NFSU2_TR(0x508a97);
__builtin_memmove((R+8),(R+28),4);
}
B508a99:{NFSU2_TR(0x508a99);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B508a9d:{NFSU2_TR(0x508a9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508aa1:{NFSU2_TR(0x508aa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B508aa4:{NFSU2_TR(0x508aa4);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B508aa8:{NFSU2_TR(0x508aa8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508aac:{NFSU2_TR(0x508aac);
__builtin_memmove((R+0),(R+12),4);
}
B508aae:{NFSU2_TR(0x508aae);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B508ab0:{NFSU2_TR(0x508ab0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508ab4:{NFSU2_TR(0x508ab4);
w4(R+0,u32(0xfffffffcull));
}
B508ab9:{NFSU2_TR(0x508ab9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B508abc:{NFSU2_TR(0x508abc);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B508abe:{NFSU2_TR(0x508abe);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B508ac2:{NFSU2_TR(0x508ac2);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508ac9:{NFSU2_TR(0x508ac9);
__builtin_memmove((R+16),(R+16),4);
}
B508ad0:L508ad0:{c.instructions+=7;NFSU2_TR(0x508ad0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508ad4:{NFSU2_TR(0x508ad4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508ad6:{NFSU2_TR(0x508ad6);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B508ad9:{NFSU2_TR(0x508ad9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B508adb:{NFSU2_TR(0x508adb);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B508adf:{NFSU2_TR(0x508adf);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B508ae2:{NFSU2_TR(0x508ae2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L508ca1;}}
}
B508ae8:L508ae8:{c.instructions+=2;NFSU2_TR(0x508ae8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B508aea:{NFSU2_TR(0x508aea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L508c46;}}
}
B508af0:L508af0:{c.instructions+=105;NFSU2_TR(0x508af0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508af3:{NFSU2_TR(0x508af3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B508af7:{NFSU2_TR(0x508af7);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508afa:{NFSU2_TR(0x508afa);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508afd:{NFSU2_TR(0x508afd);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508b01:{NFSU2_TR(0x508b01);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B508b03:{NFSU2_TR(0x508b03);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508b06:{NFSU2_TR(0x508b06);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508b0a:{NFSU2_TR(0x508b0a);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508b11:{NFSU2_TR(0x508b11);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B508b18:{NFSU2_TR(0x508b18);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508b1a:{NFSU2_TR(0x508b1a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508b1c:{NFSU2_TR(0x508b1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508b1f:{NFSU2_TR(0x508b1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B508b23:{NFSU2_TR(0x508b23);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508b26:{NFSU2_TR(0x508b26);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508b29:{NFSU2_TR(0x508b29);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508b2d:{NFSU2_TR(0x508b2d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B508b30:{NFSU2_TR(0x508b30);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B508b32:{NFSU2_TR(0x508b32);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B508b34:{NFSU2_TR(0x508b34);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508b36:{NFSU2_TR(0x508b36);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B508b38:{NFSU2_TR(0x508b38);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B508b3b:{NFSU2_TR(0x508b3b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508b3e:{NFSU2_TR(0x508b3e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B508b40:{NFSU2_TR(0x508b40);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B508b43:{NFSU2_TR(0x508b43);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508b46:{NFSU2_TR(0x508b46);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508b4a:{NFSU2_TR(0x508b4a);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508b4e:{NFSU2_TR(0x508b4e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508b50:{NFSU2_TR(0x508b50);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508b53:{NFSU2_TR(0x508b53);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508b57:{NFSU2_TR(0x508b57);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508b59:{NFSU2_TR(0x508b59);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508b5b:{NFSU2_TR(0x508b5b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508b5e:{NFSU2_TR(0x508b5e);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508b61:{NFSU2_TR(0x508b61);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508b64:{NFSU2_TR(0x508b64);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508b67:{NFSU2_TR(0x508b67);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508b6a:{NFSU2_TR(0x508b6a);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508b6d:{NFSU2_TR(0x508b6d);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508b71:{NFSU2_TR(0x508b71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B508b74:{NFSU2_TR(0x508b74);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508b78:{NFSU2_TR(0x508b78);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508b7a:{NFSU2_TR(0x508b7a);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B508b7c:{NFSU2_TR(0x508b7c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508b80:{NFSU2_TR(0x508b80);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B508b82:{NFSU2_TR(0x508b82);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508b86:{NFSU2_TR(0x508b86);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508b8a:{NFSU2_TR(0x508b8a);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508b8d:{NFSU2_TR(0x508b8d);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508b91:{NFSU2_TR(0x508b91);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508b95:{NFSU2_TR(0x508b95);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508b99:{NFSU2_TR(0x508b99);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508b9b:{NFSU2_TR(0x508b9b);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508b9e:{NFSU2_TR(0x508b9e);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508ba2:{NFSU2_TR(0x508ba2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508ba6:{NFSU2_TR(0x508ba6);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508ba9:{NFSU2_TR(0x508ba9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508bad:{NFSU2_TR(0x508bad);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B508bb1:{NFSU2_TR(0x508bb1);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508bb4:{NFSU2_TR(0x508bb4);
{u32 ea_=u32(r4(R+28)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508bb7:{NFSU2_TR(0x508bb7);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508bbb:{NFSU2_TR(0x508bbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B508bbf:{NFSU2_TR(0x508bbf);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508bc2:{NFSU2_TR(0x508bc2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B508bc5:{NFSU2_TR(0x508bc5);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508bc9:{NFSU2_TR(0x508bc9);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508bcd:{NFSU2_TR(0x508bcd);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508bd1:{NFSU2_TR(0x508bd1);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B508bd3:{NFSU2_TR(0x508bd3);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B508bd7:{NFSU2_TR(0x508bd7);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B508bdc:{NFSU2_TR(0x508bdc);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508be0:{NFSU2_TR(0x508be0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508be2:{NFSU2_TR(0x508be2);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B508be4:{NFSU2_TR(0x508be4);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508be8:{NFSU2_TR(0x508be8);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B508bea:{NFSU2_TR(0x508bea);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508bee:{NFSU2_TR(0x508bee);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508bf2:{NFSU2_TR(0x508bf2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B508bf4:{NFSU2_TR(0x508bf4);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508bf8:{NFSU2_TR(0x508bf8);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B508bfc:{NFSU2_TR(0x508bfc);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508c00:{NFSU2_TR(0x508c00);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508c03:{NFSU2_TR(0x508c03);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508c07:{NFSU2_TR(0x508c07);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508c0b:{NFSU2_TR(0x508c0b);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508c0f:{NFSU2_TR(0x508c0f);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508c13:{NFSU2_TR(0x508c13);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508c17:{NFSU2_TR(0x508c17);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508c1b:{NFSU2_TR(0x508c1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B508c1f:{NFSU2_TR(0x508c1f);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B508c21:{NFSU2_TR(0x508c21);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508c24:{NFSU2_TR(0x508c24);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508c28:{NFSU2_TR(0x508c28);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B508c2c:{NFSU2_TR(0x508c2c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508c2e:{NFSU2_TR(0x508c2e);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508c30:{NFSU2_TR(0x508c30);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508c33:{NFSU2_TR(0x508c33);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B508c37:{NFSU2_TR(0x508c37);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508c3a:{NFSU2_TR(0x508c3a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B508c3b:{NFSU2_TR(0x508c3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508c3f:{NFSU2_TR(0x508c3f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B508c41:{NFSU2_TR(0x508c41);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B508c44:{NFSU2_TR(0x508c44);
{goto L508c4a;}
}
B508c46:L508c46:{c.instructions+=1;NFSU2_TR(0x508c46);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508c4a:L508c4a:{c.instructions+=28;NFSU2_TR(0x508c4a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508c4c:{NFSU2_TR(0x508c4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B508c4f:{NFSU2_TR(0x508c4f);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508c52:{NFSU2_TR(0x508c52);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508c55:{NFSU2_TR(0x508c55);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508c59:{NFSU2_TR(0x508c59);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508c5b:{NFSU2_TR(0x508c5b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508c5d:{NFSU2_TR(0x508c5d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508c60:{NFSU2_TR(0x508c60);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508c63:{NFSU2_TR(0x508c63);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508c67:{NFSU2_TR(0x508c67);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508c6a:{NFSU2_TR(0x508c6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508c6e:{NFSU2_TR(0x508c6e);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508c71:{NFSU2_TR(0x508c71);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508c75:{NFSU2_TR(0x508c75);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508c79:{NFSU2_TR(0x508c79);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B508c7d:{NFSU2_TR(0x508c7d);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508c80:{NFSU2_TR(0x508c80);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508c84:{NFSU2_TR(0x508c84);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508c87:{NFSU2_TR(0x508c87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B508c89:{NFSU2_TR(0x508c89);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508c8c:{NFSU2_TR(0x508c8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508c90:{NFSU2_TR(0x508c90);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508c92:{NFSU2_TR(0x508c92);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508c94:{NFSU2_TR(0x508c94);
__builtin_memmove((R+0),(R+8),4);
}
B508c96:{NFSU2_TR(0x508c96);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508c99:{NFSU2_TR(0x508c99);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508c9c:{NFSU2_TR(0x508c9c);
{goto L508e03;}
}
B508ca1:L508ca1:{c.instructions+=2;NFSU2_TR(0x508ca1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B508ca3:{NFSU2_TR(0x508ca3);
if(r1(R+518)){{goto L508e19;}}
}
B508ca9:L508ca9:{c.instructions+=98;NFSU2_TR(0x508ca9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508cac:{NFSU2_TR(0x508cac);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B508cb0:{NFSU2_TR(0x508cb0);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508cb3:{NFSU2_TR(0x508cb3);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508cb6:{NFSU2_TR(0x508cb6);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508cba:{NFSU2_TR(0x508cba);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B508cbc:{NFSU2_TR(0x508cbc);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508cbf:{NFSU2_TR(0x508cbf);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508cc3:{NFSU2_TR(0x508cc3);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508cca:{NFSU2_TR(0x508cca);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B508cd1:{NFSU2_TR(0x508cd1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508cd3:{NFSU2_TR(0x508cd3);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508cd5:{NFSU2_TR(0x508cd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508cd8:{NFSU2_TR(0x508cd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B508cdc:{NFSU2_TR(0x508cdc);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508cdf:{NFSU2_TR(0x508cdf);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508ce2:{NFSU2_TR(0x508ce2);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508ce6:{NFSU2_TR(0x508ce6);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B508ce9:{NFSU2_TR(0x508ce9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B508ceb:{NFSU2_TR(0x508ceb);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B508ced:{NFSU2_TR(0x508ced);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508cef:{NFSU2_TR(0x508cef);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B508cf1:{NFSU2_TR(0x508cf1);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B508cf4:{NFSU2_TR(0x508cf4);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508cf7:{NFSU2_TR(0x508cf7);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B508cf9:{NFSU2_TR(0x508cf9);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B508cfc:{NFSU2_TR(0x508cfc);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508cff:{NFSU2_TR(0x508cff);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508d03:{NFSU2_TR(0x508d03);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508d07:{NFSU2_TR(0x508d07);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508d0a:{NFSU2_TR(0x508d0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508d0e:{NFSU2_TR(0x508d0e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508d10:{NFSU2_TR(0x508d10);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508d12:{NFSU2_TR(0x508d12);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508d14:{NFSU2_TR(0x508d14);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508d17:{NFSU2_TR(0x508d17);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508d1a:{NFSU2_TR(0x508d1a);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508d1d:{NFSU2_TR(0x508d1d);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508d20:{NFSU2_TR(0x508d20);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508d23:{NFSU2_TR(0x508d23);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508d26:{NFSU2_TR(0x508d26);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508d2a:{NFSU2_TR(0x508d2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B508d2d:{NFSU2_TR(0x508d2d);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508d31:{NFSU2_TR(0x508d31);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508d33:{NFSU2_TR(0x508d33);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B508d35:{NFSU2_TR(0x508d35);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508d39:{NFSU2_TR(0x508d39);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B508d3b:{NFSU2_TR(0x508d3b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508d3f:{NFSU2_TR(0x508d3f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508d43:{NFSU2_TR(0x508d43);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508d46:{NFSU2_TR(0x508d46);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508d4a:{NFSU2_TR(0x508d4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508d4e:{NFSU2_TR(0x508d4e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508d52:{NFSU2_TR(0x508d52);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508d54:{NFSU2_TR(0x508d54);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508d57:{NFSU2_TR(0x508d57);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508d5b:{NFSU2_TR(0x508d5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508d5f:{NFSU2_TR(0x508d5f);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508d62:{NFSU2_TR(0x508d62);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508d66:{NFSU2_TR(0x508d66);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B508d6a:{NFSU2_TR(0x508d6a);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508d6d:{NFSU2_TR(0x508d6d);
{u32 ea_=u32(r4(R+0)+r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508d70:{NFSU2_TR(0x508d70);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508d74:{NFSU2_TR(0x508d74);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508d78:{NFSU2_TR(0x508d78);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508d7b:{NFSU2_TR(0x508d7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B508d7f:{NFSU2_TR(0x508d7f);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508d83:{NFSU2_TR(0x508d83);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508d8a:{NFSU2_TR(0x508d8a);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508d8e:{NFSU2_TR(0x508d8e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B508d90:{NFSU2_TR(0x508d90);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B508d95:{NFSU2_TR(0x508d95);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508d9c:{NFSU2_TR(0x508d9c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508d9e:{NFSU2_TR(0x508d9e);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B508da0:{NFSU2_TR(0x508da0);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508da4:{NFSU2_TR(0x508da4);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B508da6:{NFSU2_TR(0x508da6);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508daa:{NFSU2_TR(0x508daa);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508db1:{NFSU2_TR(0x508db1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B508db3:{NFSU2_TR(0x508db3);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508db7:{NFSU2_TR(0x508db7);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B508dbe:{NFSU2_TR(0x508dbe);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508dc2:{NFSU2_TR(0x508dc2);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508dc5:{NFSU2_TR(0x508dc5);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508dc9:{NFSU2_TR(0x508dc9);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508dcd:{NFSU2_TR(0x508dcd);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508dd1:{NFSU2_TR(0x508dd1);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508dd5:{NFSU2_TR(0x508dd5);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508ddc:{NFSU2_TR(0x508ddc);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508de0:{NFSU2_TR(0x508de0);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B508de7:{NFSU2_TR(0x508de7);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B508de9:{NFSU2_TR(0x508de9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508dec:{NFSU2_TR(0x508dec);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508df3:{NFSU2_TR(0x508df3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508dfa:{NFSU2_TR(0x508dfa);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508dfc:{NFSU2_TR(0x508dfc);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508dfe:{NFSU2_TR(0x508dfe);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508e01:{NFSU2_TR(0x508e01);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B508e03:L508e03:{c.instructions+=7;NFSU2_TR(0x508e03);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508e06:{NFSU2_TR(0x508e06);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508e0a:{NFSU2_TR(0x508e0a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B508e0d:{NFSU2_TR(0x508e0d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B508e0e:{NFSU2_TR(0x508e0e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B508e11:{NFSU2_TR(0x508e11);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508e15:{NFSU2_TR(0x508e15);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508e19:L508e19:{c.instructions+=12;NFSU2_TR(0x508e19);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B508e1d:{NFSU2_TR(0x508e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B508e24:{NFSU2_TR(0x508e24);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B508e2b:{NFSU2_TR(0x508e2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508e2f:{NFSU2_TR(0x508e2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508e33:{NFSU2_TR(0x508e33);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B508e35:{NFSU2_TR(0x508e35);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B508e39:{NFSU2_TR(0x508e39);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B508e3e:{NFSU2_TR(0x508e3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B508e43:{NFSU2_TR(0x508e43);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508e47:{NFSU2_TR(0x508e47);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
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
B508e4a:{NFSU2_TR(0x508e4a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x508ad0u);}goto L508ad0;}}
}
B508e50:L508e50:{c.instructions+=7;NFSU2_TR(0x508e50);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508e54:{NFSU2_TR(0x508e54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B508e55:{NFSU2_TR(0x508e55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B508e56:{NFSU2_TR(0x508e56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B508e57:{NFSU2_TR(0x508e57);
__builtin_memmove((R+16),(R+20),4);
}
B508e59:{NFSU2_TR(0x508e59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B508e5a:{NFSU2_TR(0x508e5a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B508e60:L508e60:{c.instructions+=20;NFSU2_TR(0x508e60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B508e61:{NFSU2_TR(0x508e61);
__builtin_memmove((R+20),(R+16),4);
}
B508e63:{NFSU2_TR(0x508e63);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B508e66:{NFSU2_TR(0x508e66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xd4ull))));
}
B508e6c:{NFSU2_TR(0x508e6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B508e6f:{NFSU2_TR(0x508e6f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B508e70:{NFSU2_TR(0x508e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B508e73:{NFSU2_TR(0x508e73);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B508e74:{NFSU2_TR(0x508e74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B508e77:{NFSU2_TR(0x508e77);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B508e78:{NFSU2_TR(0x508e78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B508e7b:{NFSU2_TR(0x508e7b);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B508e7c:{NFSU2_TR(0x508e7c);
__builtin_memmove((R+4),(R+28),4);
}
B508e7e:{NFSU2_TR(0x508e7e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B508e81:{NFSU2_TR(0x508e81);
{u32 ea_=u32(r4(R+8)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508e84:{NFSU2_TR(0x508e84);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B508e87:{NFSU2_TR(0x508e87);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B508e89:{NFSU2_TR(0x508e89);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B508e8c:{NFSU2_TR(0x508e8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508e8f:{NFSU2_TR(0x508e8f);
if(r1(R+514)){{goto L508eee;}}
}
B508e91:L508e91:{c.instructions+=28;NFSU2_TR(0x508e91);
{u32 ea_=u32(r4(R+8)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508e95:{NFSU2_TR(0x508e95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508e98:{NFSU2_TR(0x508e98);
{u32 ea_=u32(r4(R+8)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508e9c:{NFSU2_TR(0x508e9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B508e9f:{NFSU2_TR(0x508e9f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B508ea1:{NFSU2_TR(0x508ea1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508ea3:{NFSU2_TR(0x508ea3);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508ea6:{NFSU2_TR(0x508ea6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B508eae:{NFSU2_TR(0x508eae);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B508eb3:{NFSU2_TR(0x508eb3);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508eb6:{NFSU2_TR(0x508eb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B508eb9:{NFSU2_TR(0x508eb9);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508ebd:{NFSU2_TR(0x508ebd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508ec0:{NFSU2_TR(0x508ec0);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508ec3:{NFSU2_TR(0x508ec3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B508ec5:{NFSU2_TR(0x508ec5);
{u32 ea_=u32(r4(R+12)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508ec9:{NFSU2_TR(0x508ec9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B508ecc:{NFSU2_TR(0x508ecc);
{u32 ea_=u32(r4(R+12)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508ed0:{NFSU2_TR(0x508ed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508ed3:{NFSU2_TR(0x508ed3);
{u32 ea_=u32(r4(R+12)+r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508ed7:{NFSU2_TR(0x508ed7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B508ed9:{NFSU2_TR(0x508ed9);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508edd:{NFSU2_TR(0x508edd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B508ee1:{NFSU2_TR(0x508ee1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508ee3:{NFSU2_TR(0x508ee3);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508ee6:{NFSU2_TR(0x508ee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508ee9:{NFSU2_TR(0x508ee9);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508eec:{NFSU2_TR(0x508eec);
{goto L508efb;}
}
B508eee:L508eee:{c.instructions+=2;NFSU2_TR(0x508eee);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B508ef6:{NFSU2_TR(0x508ef6);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B508efb:L508efb:{c.instructions+=3;NFSU2_TR(0x508efb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x4ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B508eff:{NFSU2_TR(0x508eff);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B508f07:{NFSU2_TR(0x508f07);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x509b3au,509);}
}
B508f0d:L508f0d:{c.instructions+=30;NFSU2_TR(0x508f0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B508f10:{NFSU2_TR(0x508f10);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508f14:{NFSU2_TR(0x508f14);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B508f1b:{NFSU2_TR(0x508f1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508f1f:{NFSU2_TR(0x508f1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B508f23:{NFSU2_TR(0x508f23);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B508f26:{NFSU2_TR(0x508f26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B508f29:{NFSU2_TR(0x508f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508f2c:{NFSU2_TR(0x508f2c);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B508f2e:{NFSU2_TR(0x508f2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((R+8),(U+0),4);
}
B508f31:{NFSU2_TR(0x508f31);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B508f33:{NFSU2_TR(0x508f33);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508f37:{NFSU2_TR(0x508f37);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B508f3a:{NFSU2_TR(0x508f3a);
w4(R+12,u32(0x18ull));
}
B508f3f:{NFSU2_TR(0x508f3f);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B508f41:{NFSU2_TR(0x508f41);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508f45:{NFSU2_TR(0x508f45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B508f48:{NFSU2_TR(0x508f48);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508f4f:{NFSU2_TR(0x508f4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B508f52:{NFSU2_TR(0x508f52);
w4(R+0,u32(0xcull));
}
B508f57:{NFSU2_TR(0x508f57);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B508f5a:{NFSU2_TR(0x508f5a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B508f5c:{NFSU2_TR(0x508f5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B508f64:{NFSU2_TR(0x508f64);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508f6b:{NFSU2_TR(0x508f6b);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508f6e:{NFSU2_TR(0x508f6e);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B508f71:{NFSU2_TR(0x508f71);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B508f73:{NFSU2_TR(0x508f73);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B508f77:{NFSU2_TR(0x508f77);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B508f7a:{NFSU2_TR(0x508f7a);
if(r1(R+514)){TAIL_STATIC(0x509133u,509);}
}
B508f80:L508f80:{c.instructions+=2;NFSU2_TR(0x508f80);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B508f82:{NFSU2_TR(0x508f82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5090d9u,509);}
}
B508f88:L508f88:{c.instructions+=39;NFSU2_TR(0x508f88);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508f8b:{NFSU2_TR(0x508f8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508f8f:{NFSU2_TR(0x508f8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B508f92:{NFSU2_TR(0x508f92);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508f95:{NFSU2_TR(0x508f95);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508f98:{NFSU2_TR(0x508f98);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508f9c:{NFSU2_TR(0x508f9c);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508f9f:{NFSU2_TR(0x508f9f);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508fa3:{NFSU2_TR(0x508fa3);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508faa:{NFSU2_TR(0x508faa);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B508fb1:{NFSU2_TR(0x508fb1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508fb3:{NFSU2_TR(0x508fb3);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508fb5:{NFSU2_TR(0x508fb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B508fb8:{NFSU2_TR(0x508fb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B508fbb:{NFSU2_TR(0x508fbb);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508fbe:{NFSU2_TR(0x508fbe);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508fc1:{NFSU2_TR(0x508fc1);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B508fc4:{NFSU2_TR(0x508fc4);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B508fc6:{NFSU2_TR(0x508fc6);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B508fc8:{NFSU2_TR(0x508fc8);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B508fca:{NFSU2_TR(0x508fca);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508fcc:{NFSU2_TR(0x508fcc);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B508fce:{NFSU2_TR(0x508fce);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B508fd1:{NFSU2_TR(0x508fd1);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508fd4:{NFSU2_TR(0x508fd4);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B508fd6:{NFSU2_TR(0x508fd6);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B508fd9:{NFSU2_TR(0x508fd9);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508fdc:{NFSU2_TR(0x508fdc);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508fe0:{NFSU2_TR(0x508fe0);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508fe4:{NFSU2_TR(0x508fe4);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B508fe6:{NFSU2_TR(0x508fe6);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508fe9:{NFSU2_TR(0x508fe9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B508fed:{NFSU2_TR(0x508fed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B508ff0:{NFSU2_TR(0x508ff0);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508ff2:{NFSU2_TR(0x508ff2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B508ff4:{NFSU2_TR(0x508ff4);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508ff7:{NFSU2_TR(0x508ff7);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B508ffa:{NFSU2_TR(0x508ffa);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B508ffd:{NFSU2_TR(0x508ffd);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
TAIL_STATIC(0x509000u,509);
}
XIT:NFSU2_TR_EXIT(0x508,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
