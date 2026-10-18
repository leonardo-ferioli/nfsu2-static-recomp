#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69d(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6a4(u8* __restrict R,Cpu& c);
u32 body_6a6(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6a5,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6a5,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6a5(u8* __restrict R,Cpu& c);
u32 page_6a5(Cpu& c){return body_6a5(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6a5(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6a5000:goto L6a5000;
case 0x6a5003:c.instructions+=4;goto B6a5003;
case 0x6a5006:c.instructions+=3;goto B6a5006;
case 0x6a5009:c.instructions+=2;goto B6a5009;
case 0x6a500c:c.instructions+=1;goto B6a500c;
case 0x6a500e:goto L6a500e;
case 0x6a5012:c.instructions+=1;goto B6a5012;
case 0x6a5014:goto L6a5014;
case 0x6a5017:c.instructions+=5;goto B6a5017;
case 0x6a5019:c.instructions+=4;goto B6a5019;
case 0x6a501b:c.instructions+=3;goto B6a501b;
case 0x6a501d:c.instructions+=2;goto B6a501d;
case 0x6a5020:c.instructions+=1;goto B6a5020;
case 0x6a5022:goto L6a5022;
case 0x6a5026:c.instructions+=3;goto B6a5026;
case 0x6a5027:c.instructions+=2;goto B6a5027;
case 0x6a502a:c.instructions+=1;goto B6a502a;
case 0x6a502c:goto L6a502c;
case 0x6a502f:c.instructions+=1;goto B6a502f;
case 0x6a5031:goto L6a5031;
case 0x6a5032:c.instructions+=7;goto B6a5032;
case 0x6a5033:c.instructions+=6;goto B6a5033;
case 0x6a5036:c.instructions+=5;goto B6a5036;
case 0x6a5038:c.instructions+=4;goto B6a5038;
case 0x6a503a:c.instructions+=3;goto B6a503a;
case 0x6a503d:c.instructions+=2;goto B6a503d;
case 0x6a503f:c.instructions+=1;goto B6a503f;
case 0x6a5044:goto L6a5044;
case 0x6a5046:c.instructions+=2;goto B6a5046;
case 0x6a5049:c.instructions+=1;goto B6a5049;
case 0x6a504b:goto L6a504b;
case 0x6a504d:c.instructions+=1;goto B6a504d;
case 0x6a5052:goto L6a5052;
case 0x6a5054:goto L6a5054;
case 0x6a5057:c.instructions+=10;goto B6a5057;
case 0x6a5059:c.instructions+=9;goto B6a5059;
case 0x6a505c:c.instructions+=8;goto B6a505c;
case 0x6a505f:c.instructions+=7;goto B6a505f;
case 0x6a5062:c.instructions+=6;goto B6a5062;
case 0x6a5069:c.instructions+=5;goto B6a5069;
case 0x6a506c:c.instructions+=4;goto B6a506c;
case 0x6a506e:c.instructions+=3;goto B6a506e;
case 0x6a5075:c.instructions+=2;goto B6a5075;
case 0x6a5077:c.instructions+=1;goto B6a5077;
case 0x6a5079:goto L6a5079;
case 0x6a507c:c.instructions+=5;goto B6a507c;
case 0x6a507f:c.instructions+=4;goto B6a507f;
case 0x6a5082:c.instructions+=3;goto B6a5082;
case 0x6a5085:c.instructions+=2;goto B6a5085;
case 0x6a5087:c.instructions+=1;goto B6a5087;
case 0x6a5089:goto L6a5089;
case 0x6a508b:c.instructions+=1;goto B6a508b;
case 0x6a5090:goto L6a5090;
case 0x6a5093:c.instructions+=5;goto B6a5093;
case 0x6a5096:c.instructions+=4;goto B6a5096;
case 0x6a5099:c.instructions+=3;goto B6a5099;
case 0x6a509c:c.instructions+=2;goto B6a509c;
case 0x6a509f:c.instructions+=1;goto B6a509f;
case 0x6a50a5:goto L6a50a5;
case 0x6a50a7:c.instructions+=3;goto B6a50a7;
case 0x6a50aa:c.instructions+=2;goto B6a50aa;
case 0x6a50ad:c.instructions+=1;goto B6a50ad;
case 0x6a50b3:goto L6a50b3;
case 0x6a50b5:c.instructions+=2;goto B6a50b5;
case 0x6a50b8:c.instructions+=1;goto B6a50b8;
case 0x6a50be:goto L6a50be;
case 0x6a50c1:c.instructions+=5;goto B6a50c1;
case 0x6a50c4:c.instructions+=4;goto B6a50c4;
case 0x6a50c8:c.instructions+=3;goto B6a50c8;
case 0x6a50cb:c.instructions+=2;goto B6a50cb;
case 0x6a50ce:c.instructions+=1;goto B6a50ce;
case 0x6a50d4:goto L6a50d4;
case 0x6a50d7:c.instructions+=9;goto B6a50d7;
case 0x6a50db:c.instructions+=8;goto B6a50db;
case 0x6a50dd:c.instructions+=7;goto B6a50dd;
case 0x6a50e0:c.instructions+=6;goto B6a50e0;
case 0x6a50e3:c.instructions+=5;goto B6a50e3;
case 0x6a50e6:c.instructions+=4;goto B6a50e6;
case 0x6a50e9:c.instructions+=3;goto B6a50e9;
case 0x6a50ec:c.instructions+=2;goto B6a50ec;
case 0x6a50f0:c.instructions+=1;goto B6a50f0;
case 0x6a50f2:goto L6a50f2;
case 0x6a50f6:c.instructions+=1;goto B6a50f6;
case 0x6a50fc:goto L6a50fc;
case 0x6a5100:c.instructions+=3;goto B6a5100;
case 0x6a5104:c.instructions+=2;goto B6a5104;
case 0x6a5108:c.instructions+=1;goto B6a5108;
case 0x6a510b:goto L6a510b;
case 0x6a510e:c.instructions+=5;goto B6a510e;
case 0x6a5110:c.instructions+=4;goto B6a5110;
case 0x6a5113:c.instructions+=3;goto B6a5113;
case 0x6a5116:c.instructions+=2;goto B6a5116;
case 0x6a5119:c.instructions+=1;goto B6a5119;
case 0x6a511e:goto L6a511e;
case 0x6a5120:c.instructions+=1;goto B6a5120;
case 0x6a5126:goto L6a5126;
case 0x6a5129:c.instructions+=5;goto B6a5129;
case 0x6a512b:c.instructions+=4;goto B6a512b;
case 0x6a512e:c.instructions+=3;goto B6a512e;
case 0x6a5130:c.instructions+=2;goto B6a5130;
case 0x6a5133:c.instructions+=1;goto B6a5133;
case 0x6a5138:goto L6a5138;
case 0x6a513b:c.instructions+=7;goto B6a513b;
case 0x6a513e:c.instructions+=6;goto B6a513e;
case 0x6a5141:c.instructions+=5;goto B6a5141;
case 0x6a5143:c.instructions+=4;goto B6a5143;
case 0x6a5147:c.instructions+=3;goto B6a5147;
case 0x6a514a:c.instructions+=2;goto B6a514a;
case 0x6a514d:c.instructions+=1;goto B6a514d;
case 0x6a514f:goto L6a514f;
case 0x6a5153:goto L6a5153;
case 0x6a5156:goto L6a5156;
case 0x6a5159:c.instructions+=3;goto B6a5159;
case 0x6a515c:c.instructions+=2;goto B6a515c;
case 0x6a5161:c.instructions+=1;goto B6a5161;
case 0x6a5167:goto L6a5167;
case 0x6a516b:c.instructions+=1;goto B6a516b;
case 0x6a516e:goto L6a516e;
case 0x6a5171:c.instructions+=5;goto B6a5171;
case 0x6a5173:c.instructions+=4;goto B6a5173;
case 0x6a5176:c.instructions+=3;goto B6a5176;
case 0x6a5179:c.instructions+=2;goto B6a5179;
case 0x6a517a:c.instructions+=1;goto B6a517a;
case 0x6a517f:goto L6a517f;
case 0x6a5181:c.instructions+=1;goto B6a5181;
case 0x6a5183:goto L6a5183;
case 0x6a5186:c.instructions+=2;goto B6a5186;
case 0x6a5188:c.instructions+=1;goto B6a5188;
case 0x6a518a:goto L6a518a;
case 0x6a518b:c.instructions+=3;goto B6a518b;
case 0x6a518e:c.instructions+=2;goto B6a518e;
case 0x6a5190:c.instructions+=1;goto B6a5190;
case 0x6a5195:goto L6a5195;
case 0x6a5197:c.instructions+=1;goto B6a5197;
case 0x6a5199:goto L6a5199;
case 0x6a519c:c.instructions+=1;goto B6a519c;
case 0x6a519e:goto L6a519e;
case 0x6a519f:c.instructions+=4;goto B6a519f;
case 0x6a51a0:c.instructions+=3;goto B6a51a0;
case 0x6a51a1:c.instructions+=2;goto B6a51a1;
case 0x6a51a3:c.instructions+=1;goto B6a51a3;
case 0x6a51a8:goto L6a51a8;
case 0x6a51aa:c.instructions+=2;goto B6a51aa;
case 0x6a51ad:c.instructions+=1;goto B6a51ad;
case 0x6a51af:goto L6a51af;
case 0x6a51b1:goto L6a51b1;
case 0x6a51b4:c.instructions+=4;goto B6a51b4;
case 0x6a51b7:c.instructions+=3;goto B6a51b7;
case 0x6a51ba:c.instructions+=2;goto B6a51ba;
case 0x6a51be:c.instructions+=1;goto B6a51be;
case 0x6a51c0:goto L6a51c0;
case 0x6a51c3:c.instructions+=7;goto B6a51c3;
case 0x6a51c6:c.instructions+=6;goto B6a51c6;
case 0x6a51c9:c.instructions+=5;goto B6a51c9;
case 0x6a51cc:c.instructions+=4;goto B6a51cc;
case 0x6a51ce:c.instructions+=3;goto B6a51ce;
case 0x6a51d1:c.instructions+=2;goto B6a51d1;
case 0x6a51d4:c.instructions+=1;goto B6a51d4;
case 0x6a51d6:goto L6a51d6;
case 0x6a51d9:goto L6a51d9;
case 0x6a51dc:c.instructions+=1;goto B6a51dc;
case 0x6a51de:goto L6a51de;
case 0x6a51e1:c.instructions+=4;goto B6a51e1;
case 0x6a51e4:c.instructions+=3;goto B6a51e4;
case 0x6a51e7:c.instructions+=2;goto B6a51e7;
case 0x6a51ea:c.instructions+=1;goto B6a51ea;
case 0x6a51ec:goto L6a51ec;
case 0x6a51ee:c.instructions+=1;goto B6a51ee;
case 0x6a51f3:goto L6a51f3;
case 0x6a51f6:c.instructions+=3;goto B6a51f6;
case 0x6a51f9:c.instructions+=2;goto B6a51f9;
case 0x6a51fc:c.instructions+=1;goto B6a51fc;
case 0x6a5202:goto L6a5202;
case 0x6a5205:c.instructions+=2;goto B6a5205;
case 0x6a5208:c.instructions+=1;goto B6a5208;
case 0x6a520a:goto L6a520a;
case 0x6a520c:goto L6a520c;
case 0x6a520f:c.instructions+=2;goto B6a520f;
case 0x6a5212:c.instructions+=1;goto B6a5212;
case 0x6a5214:goto L6a5214;
case 0x6a5217:c.instructions+=8;goto B6a5217;
case 0x6a521a:c.instructions+=7;goto B6a521a;
case 0x6a521d:c.instructions+=6;goto B6a521d;
case 0x6a5220:c.instructions+=5;goto B6a5220;
case 0x6a5223:c.instructions+=4;goto B6a5223;
case 0x6a5226:c.instructions+=3;goto B6a5226;
case 0x6a5229:c.instructions+=2;goto B6a5229;
case 0x6a522c:c.instructions+=1;goto B6a522c;
case 0x6a522f:goto L6a522f;
case 0x6a5233:c.instructions+=1;goto B6a5233;
case 0x6a5235:goto L6a5235;
case 0x6a5238:c.instructions+=6;goto B6a5238;
case 0x6a5239:c.instructions+=5;goto B6a5239;
case 0x6a523c:c.instructions+=4;goto B6a523c;
case 0x6a523d:c.instructions+=3;goto B6a523d;
case 0x6a5240:c.instructions+=2;goto B6a5240;
case 0x6a5242:c.instructions+=1;goto B6a5242;
case 0x6a5247:goto L6a5247;
case 0x6a524a:c.instructions+=2;goto B6a524a;
case 0x6a524d:c.instructions+=1;goto B6a524d;
case 0x6a5253:goto L6a5253;
case 0x6a5256:c.instructions+=6;goto B6a5256;
case 0x6a5259:c.instructions+=5;goto B6a5259;
case 0x6a525c:c.instructions+=4;goto B6a525c;
case 0x6a525f:c.instructions+=3;goto B6a525f;
case 0x6a5262:c.instructions+=2;goto B6a5262;
case 0x6a5264:c.instructions+=1;goto B6a5264;
case 0x6a5266:goto L6a5266;
case 0x6a5269:c.instructions+=1;goto B6a5269;
case 0x6a526e:goto L6a526e;
case 0x6a5271:c.instructions+=2;goto B6a5271;
case 0x6a5274:c.instructions+=1;goto B6a5274;
case 0x6a527a:goto L6a527a;
case 0x6a527d:c.instructions+=9;goto B6a527d;
case 0x6a527f:c.instructions+=8;goto B6a527f;
case 0x6a5282:c.instructions+=7;goto B6a5282;
case 0x6a5285:c.instructions+=6;goto B6a5285;
case 0x6a5289:c.instructions+=5;goto B6a5289;
case 0x6a5290:c.instructions+=4;goto B6a5290;
case 0x6a5293:c.instructions+=3;goto B6a5293;
case 0x6a529a:c.instructions+=2;goto B6a529a;
case 0x6a529d:c.instructions+=1;goto B6a529d;
case 0x6a52a3:goto L6a52a3;
case 0x6a52a6:c.instructions+=5;goto B6a52a6;
case 0x6a52a9:c.instructions+=4;goto B6a52a9;
case 0x6a52ad:c.instructions+=3;goto B6a52ad;
case 0x6a52b0:c.instructions+=2;goto B6a52b0;
case 0x6a52b3:c.instructions+=1;goto B6a52b3;
case 0x6a52b9:goto L6a52b9;
case 0x6a52bd:c.instructions+=1;goto B6a52bd;
case 0x6a52bf:goto L6a52bf;
case 0x6a52c2:c.instructions+=6;goto B6a52c2;
case 0x6a52c4:c.instructions+=5;goto B6a52c4;
case 0x6a52c7:c.instructions+=4;goto B6a52c7;
case 0x6a52ca:c.instructions+=3;goto B6a52ca;
case 0x6a52cd:c.instructions+=2;goto B6a52cd;
case 0x6a52ce:c.instructions+=1;goto B6a52ce;
case 0x6a52d3:goto L6a52d3;
case 0x6a52d5:c.instructions+=1;goto B6a52d5;
case 0x6a52d7:goto L6a52d7;
case 0x6a52da:c.instructions+=5;goto B6a52da;
case 0x6a52dc:c.instructions+=4;goto B6a52dc;
case 0x6a52df:c.instructions+=3;goto B6a52df;
case 0x6a52e1:c.instructions+=2;goto B6a52e1;
case 0x6a52e4:c.instructions+=1;goto B6a52e4;
case 0x6a52e6:goto L6a52e6;
case 0x6a52e7:c.instructions+=3;goto B6a52e7;
case 0x6a52ea:c.instructions+=2;goto B6a52ea;
case 0x6a52ec:c.instructions+=1;goto B6a52ec;
case 0x6a52f1:goto L6a52f1;
case 0x6a52f3:c.instructions+=1;goto B6a52f3;
case 0x6a52f5:goto L6a52f5;
case 0x6a52f8:c.instructions+=1;goto B6a52f8;
case 0x6a52fa:goto L6a52fa;
case 0x6a52fd:c.instructions+=6;goto B6a52fd;
case 0x6a52fe:c.instructions+=5;goto B6a52fe;
case 0x6a5301:c.instructions+=4;goto B6a5301;
case 0x6a5302:c.instructions+=3;goto B6a5302;
case 0x6a5303:c.instructions+=2;goto B6a5303;
case 0x6a5305:c.instructions+=1;goto B6a5305;
case 0x6a530a:goto L6a530a;
case 0x6a530c:goto L6a530c;
case 0x6a530f:c.instructions+=1;goto B6a530f;
case 0x6a5311:goto L6a5311;
case 0x6a5313:goto L6a5313;
case 0x6a5316:c.instructions+=9;goto B6a5316;
case 0x6a5319:c.instructions+=8;goto B6a5319;
case 0x6a531c:c.instructions+=7;goto B6a531c;
case 0x6a5323:c.instructions+=6;goto B6a5323;
case 0x6a5325:c.instructions+=5;goto B6a5325;
case 0x6a5328:c.instructions+=4;goto B6a5328;
case 0x6a532f:c.instructions+=3;goto B6a532f;
case 0x6a5332:c.instructions+=2;goto B6a5332;
case 0x6a5338:c.instructions+=1;goto B6a5338;
case 0x6a533a:goto L6a533a;
case 0x6a533d:goto L6a533d;
case 0x6a5340:c.instructions+=1;goto B6a5340;
case 0x6a5342:goto L6a5342;
case 0x6a5345:c.instructions+=5;goto B6a5345;
case 0x6a5348:c.instructions+=4;goto B6a5348;
case 0x6a534b:c.instructions+=3;goto B6a534b;
case 0x6a534e:c.instructions+=2;goto B6a534e;
case 0x6a5350:c.instructions+=1;goto B6a5350;
case 0x6a5356:goto L6a5356;
case 0x6a5359:c.instructions+=3;goto B6a5359;
case 0x6a535c:c.instructions+=2;goto B6a535c;
case 0x6a535f:c.instructions+=1;goto B6a535f;
case 0x6a5365:goto L6a5365;
case 0x6a5368:c.instructions+=3;goto B6a5368;
case 0x6a536b:c.instructions+=2;goto B6a536b;
case 0x6a536e:c.instructions+=1;goto B6a536e;
case 0x6a5374:goto L6a5374;
case 0x6a5376:goto L6a5376;
case 0x6a5379:c.instructions+=5;goto B6a5379;
case 0x6a537c:c.instructions+=4;goto B6a537c;
case 0x6a537f:c.instructions+=3;goto B6a537f;
case 0x6a5382:c.instructions+=2;goto B6a5382;
case 0x6a5385:c.instructions+=1;goto B6a5385;
case 0x6a538b:goto L6a538b;
case 0x6a538f:c.instructions+=6;goto B6a538f;
case 0x6a5392:c.instructions+=5;goto B6a5392;
case 0x6a5395:c.instructions+=4;goto B6a5395;
case 0x6a5398:c.instructions+=3;goto B6a5398;
case 0x6a5399:c.instructions+=2;goto B6a5399;
case 0x6a539b:c.instructions+=1;goto B6a539b;
case 0x6a53a0:goto L6a53a0;
case 0x6a53a2:c.instructions+=3;goto B6a53a2;
case 0x6a53a3:c.instructions+=2;goto B6a53a3;
case 0x6a53a5:c.instructions+=1;goto B6a53a5;
case 0x6a53a7:goto L6a53a7;
case 0x6a53aa:goto L6a53aa;
case 0x6a53b1:c.instructions+=5;goto B6a53b1;
case 0x6a53b7:c.instructions+=4;goto B6a53b7;
case 0x6a53b9:c.instructions+=3;goto B6a53b9;
case 0x6a53bb:c.instructions+=2;goto B6a53bb;
case 0x6a53be:c.instructions+=1;goto B6a53be;
case 0x6a53c0:goto L6a53c0;
case 0x6a53c3:goto L6a53c3;
case 0x6a53ca:c.instructions+=5;goto B6a53ca;
case 0x6a53d0:c.instructions+=4;goto B6a53d0;
case 0x6a53d2:c.instructions+=3;goto B6a53d2;
case 0x6a53d4:c.instructions+=2;goto B6a53d4;
case 0x6a53d7:c.instructions+=1;goto B6a53d7;
case 0x6a53d9:goto L6a53d9;
case 0x6a53dc:goto L6a53dc;
case 0x6a53df:c.instructions+=4;goto B6a53df;
case 0x6a53e2:c.instructions+=3;goto B6a53e2;
case 0x6a53e5:c.instructions+=2;goto B6a53e5;
case 0x6a53e9:c.instructions+=1;goto B6a53e9;
case 0x6a53eb:goto L6a53eb;
case 0x6a53ef:c.instructions+=1;goto B6a53ef;
case 0x6a53f1:goto L6a53f1;
case 0x6a53f4:goto L6a53f4;
case 0x6a53f5:c.instructions+=2;goto B6a53f5;
case 0x6a53f8:c.instructions+=1;goto B6a53f8;
case 0x6a53fa:goto L6a53fa;
case 0x6a53fc:c.instructions+=2;goto B6a53fc;
case 0x6a53ff:c.instructions+=1;goto B6a53ff;
case 0x6a5401:goto L6a5401;
case 0x6a5404:c.instructions+=1;goto B6a5404;
case 0x6a5406:goto L6a5406;
case 0x6a5409:c.instructions+=1;goto B6a5409;
case 0x6a540b:goto L6a540b;
case 0x6a540e:c.instructions+=4;goto B6a540e;
case 0x6a5411:c.instructions+=3;goto B6a5411;
case 0x6a5413:c.instructions+=2;goto B6a5413;
case 0x6a5416:c.instructions+=1;goto B6a5416;
case 0x6a5419:goto L6a5419;
case 0x6a541b:goto L6a541b;
case 0x6a541d:c.instructions+=1;goto B6a541d;
case 0x6a5420:goto L6a5420;
case 0x6a5422:goto L6a5422;
case 0x6a5424:c.instructions+=1;goto B6a5424;
case 0x6a5425:goto L6a5425;
case 0x6a5426:c.instructions+=4;goto B6a5426;
case 0x6a5427:c.instructions+=3;goto B6a5427;
case 0x6a5428:c.instructions+=2;goto B6a5428;
case 0x6a5429:c.instructions+=1;goto B6a5429;
case 0x6a542c:goto L6a542c;
case 0x6a542e:goto L6a542e;
case 0x6a5431:c.instructions+=1;goto B6a5431;
case 0x6a5437:goto L6a5437;
case 0x6a543a:c.instructions+=6;goto B6a543a;
case 0x6a543d:c.instructions+=5;goto B6a543d;
case 0x6a5440:c.instructions+=4;goto B6a5440;
case 0x6a5443:c.instructions+=3;goto B6a5443;
case 0x6a5446:c.instructions+=2;goto B6a5446;
case 0x6a5449:c.instructions+=1;goto B6a5449;
case 0x6a544c:goto L6a544c;
case 0x6a544f:c.instructions+=6;goto B6a544f;
case 0x6a5453:c.instructions+=5;goto B6a5453;
case 0x6a5456:c.instructions+=4;goto B6a5456;
case 0x6a5459:c.instructions+=3;goto B6a5459;
case 0x6a545b:c.instructions+=2;goto B6a545b;
case 0x6a545e:c.instructions+=1;goto B6a545e;
case 0x6a5464:goto L6a5464;
case 0x6a5468:c.instructions+=1;goto B6a5468;
case 0x6a546e:goto L6a546e;
case 0x6a5471:c.instructions+=4;goto B6a5471;
case 0x6a5474:c.instructions+=3;goto B6a5474;
case 0x6a5477:c.instructions+=2;goto B6a5477;
case 0x6a547b:c.instructions+=1;goto B6a547b;
case 0x6a547d:goto L6a547d;
case 0x6a5481:c.instructions+=1;goto B6a5481;
case 0x6a5483:goto L6a5483;
case 0x6a5486:c.instructions+=1;goto B6a5486;
case 0x6a548c:goto L6a548c;
case 0x6a5490:c.instructions+=4;goto B6a5490;
case 0x6a5493:c.instructions+=3;goto B6a5493;
case 0x6a5496:c.instructions+=2;goto B6a5496;
case 0x6a5499:c.instructions+=1;goto B6a5499;
case 0x6a549b:goto L6a549b;
case 0x6a549f:c.instructions+=1;goto B6a549f;
case 0x6a54a1:goto L6a54a1;
case 0x6a54a4:c.instructions+=5;goto B6a54a4;
case 0x6a54a7:c.instructions+=4;goto B6a54a7;
case 0x6a54a9:c.instructions+=3;goto B6a54a9;
case 0x6a54ab:c.instructions+=2;goto B6a54ab;
case 0x6a54ae:c.instructions+=1;goto B6a54ae;
case 0x6a54b0:goto L6a54b0;
case 0x6a54b1:c.instructions+=2;goto B6a54b1;
case 0x6a54b4:c.instructions+=1;goto B6a54b4;
case 0x6a54b6:goto L6a54b6;
case 0x6a54b8:goto L6a54b8;
case 0x6a54bb:c.instructions+=1;goto B6a54bb;
case 0x6a54bd:goto L6a54bd;
case 0x6a54c0:c.instructions+=9;goto B6a54c0;
case 0x6a54c7:c.instructions+=8;goto B6a54c7;
case 0x6a54cb:c.instructions+=7;goto B6a54cb;
case 0x6a54ce:c.instructions+=6;goto B6a54ce;
case 0x6a54d1:c.instructions+=5;goto B6a54d1;
case 0x6a54d8:c.instructions+=4;goto B6a54d8;
case 0x6a54da:c.instructions+=3;goto B6a54da;
case 0x6a54dc:c.instructions+=2;goto B6a54dc;
case 0x6a54df:c.instructions+=1;goto B6a54df;
case 0x6a54e1:goto L6a54e1;
case 0x6a54e4:c.instructions+=6;goto B6a54e4;
case 0x6a54eb:c.instructions+=5;goto B6a54eb;
case 0x6a54f2:c.instructions+=4;goto B6a54f2;
case 0x6a54f4:c.instructions+=3;goto B6a54f4;
case 0x6a54f6:c.instructions+=2;goto B6a54f6;
case 0x6a54f9:c.instructions+=1;goto B6a54f9;
case 0x6a54fb:goto L6a54fb;
case 0x6a54fe:c.instructions+=1;goto B6a54fe;
case 0x6a5500:goto L6a5500;
case 0x6a5503:c.instructions+=2;goto B6a5503;
case 0x6a5506:c.instructions+=1;goto B6a5506;
case 0x6a5508:goto L6a5508;
case 0x6a550b:c.instructions+=2;goto B6a550b;
case 0x6a550e:c.instructions+=1;goto B6a550e;
case 0x6a5510:goto L6a5510;
case 0x6a5513:c.instructions+=2;goto B6a5513;
case 0x6a5516:c.instructions+=1;goto B6a5516;
case 0x6a5518:goto L6a5518;
case 0x6a5519:c.instructions+=2;goto B6a5519;
case 0x6a551c:c.instructions+=1;goto B6a551c;
case 0x6a551e:goto L6a551e;
case 0x6a5520:goto L6a5520;
case 0x6a5522:goto L6a5522;
case 0x6a5525:c.instructions+=3;goto B6a5525;
case 0x6a5527:c.instructions+=2;goto B6a5527;
case 0x6a552e:c.instructions+=1;goto B6a552e;
case 0x6a5530:goto L6a5530;
case 0x6a5533:goto L6a5533;
case 0x6a5537:c.instructions+=4;goto B6a5537;
case 0x6a5538:c.instructions+=3;goto B6a5538;
case 0x6a553b:c.instructions+=2;goto B6a553b;
case 0x6a553e:c.instructions+=1;goto B6a553e;
case 0x6a5544:goto L6a5544;
case 0x6a5548:c.instructions+=4;goto B6a5548;
case 0x6a554a:c.instructions+=3;goto B6a554a;
case 0x6a5551:c.instructions+=2;goto B6a5551;
case 0x6a5554:c.instructions+=1;goto B6a5554;
case 0x6a5557:goto L6a5557;
case 0x6a555e:c.instructions+=1;goto B6a555e;
case 0x6a5564:goto L6a5564;
case 0x6a5568:c.instructions+=5;goto B6a5568;
case 0x6a556b:c.instructions+=4;goto B6a556b;
case 0x6a556e:c.instructions+=3;goto B6a556e;
case 0x6a5574:c.instructions+=2;goto B6a5574;
case 0x6a5577:c.instructions+=1;goto B6a5577;
case 0x6a557d:goto L6a557d;
case 0x6a5580:c.instructions+=2;goto B6a5580;
case 0x6a5583:c.instructions+=1;goto B6a5583;
case 0x6a5585:goto L6a5585;
case 0x6a558c:c.instructions+=1;goto B6a558c;
case 0x6a558e:goto L6a558e;
case 0x6a5592:c.instructions+=4;goto B6a5592;
case 0x6a5595:c.instructions+=3;goto B6a5595;
case 0x6a5598:c.instructions+=2;goto B6a5598;
case 0x6a559b:c.instructions+=1;goto B6a559b;
case 0x6a559d:goto L6a559d;
case 0x6a55a0:c.instructions+=2;goto B6a55a0;
case 0x6a55a3:c.instructions+=1;goto B6a55a3;
case 0x6a55a5:goto L6a55a5;
case 0x6a55ac:c.instructions+=5;goto B6a55ac;
case 0x6a55b2:c.instructions+=4;goto B6a55b2;
case 0x6a55b4:c.instructions+=3;goto B6a55b4;
case 0x6a55b6:c.instructions+=2;goto B6a55b6;
case 0x6a55b9:c.instructions+=1;goto B6a55b9;
case 0x6a55bb:goto L6a55bb;
case 0x6a55c2:c.instructions+=5;goto B6a55c2;
case 0x6a55c8:c.instructions+=4;goto B6a55c8;
case 0x6a55ca:c.instructions+=3;goto B6a55ca;
case 0x6a55cc:c.instructions+=2;goto B6a55cc;
case 0x6a55cf:c.instructions+=1;goto B6a55cf;
case 0x6a55d1:goto L6a55d1;
case 0x6a55d4:goto L6a55d4;
case 0x6a55d7:goto L6a55d7;
case 0x6a55d8:c.instructions+=2;goto B6a55d8;
case 0x6a55db:c.instructions+=1;goto B6a55db;
case 0x6a55dd:goto L6a55dd;
case 0x6a55e0:c.instructions+=6;goto B6a55e0;
case 0x6a55e3:c.instructions+=5;goto B6a55e3;
case 0x6a55e6:c.instructions+=4;goto B6a55e6;
case 0x6a55e9:c.instructions+=3;goto B6a55e9;
case 0x6a55eb:c.instructions+=2;goto B6a55eb;
case 0x6a55ee:c.instructions+=1;goto B6a55ee;
case 0x6a55f0:goto L6a55f0;
case 0x6a55f3:c.instructions+=1;goto B6a55f3;
case 0x6a55f5:goto L6a55f5;
case 0x6a55f9:c.instructions+=2;goto B6a55f9;
case 0x6a55fc:c.instructions+=1;goto B6a55fc;
case 0x6a55ff:goto L6a55ff;
case 0x6a5600:c.instructions+=3;goto B6a5600;
case 0x6a5603:c.instructions+=2;goto B6a5603;
case 0x6a5606:c.instructions+=1;goto B6a5606;
case 0x6a560c:goto L6a560c;
case 0x6a5610:c.instructions+=1;goto B6a5610;
case 0x6a5612:goto L6a5612;
case 0x6a5616:c.instructions+=1;goto B6a5616;
case 0x6a561c:goto L6a561c;
case 0x6a561f:c.instructions+=4;goto B6a561f;
case 0x6a5621:c.instructions+=3;goto B6a5621;
case 0x6a5626:c.instructions+=2;goto B6a5626;
case 0x6a562b:c.instructions+=1;goto B6a562b;
case 0x6a5631:goto L6a5631;
case 0x6a5636:c.instructions+=1;goto B6a5636;
case 0x6a563c:goto L6a563c;
case 0x6a5640:goto L6a5640;
case 0x6a5644:c.instructions+=1;goto B6a5644;
case 0x6a564a:goto L6a564a;
case 0x6a564d:c.instructions+=9;goto B6a564d;
case 0x6a5650:c.instructions+=8;goto B6a5650;
case 0x6a5653:c.instructions+=7;goto B6a5653;
case 0x6a5656:c.instructions+=6;goto B6a5656;
case 0x6a565a:c.instructions+=5;goto B6a565a;
case 0x6a565d:c.instructions+=4;goto B6a565d;
case 0x6a5660:c.instructions+=3;goto B6a5660;
case 0x6a5663:c.instructions+=2;goto B6a5663;
case 0x6a5667:c.instructions+=1;goto B6a5667;
case 0x6a5669:goto L6a5669;
case 0x6a566d:c.instructions+=1;goto B6a566d;
case 0x6a566f:goto L6a566f;
case 0x6a5672:c.instructions+=6;goto B6a5672;
case 0x6a5675:c.instructions+=5;goto B6a5675;
case 0x6a5678:c.instructions+=4;goto B6a5678;
case 0x6a567b:c.instructions+=3;goto B6a567b;
case 0x6a567e:c.instructions+=2;goto B6a567e;
case 0x6a5681:c.instructions+=1;goto B6a5681;
case 0x6a5683:goto L6a5683;
case 0x6a5687:c.instructions+=1;goto B6a5687;
case 0x6a568b:goto L6a568b;
case 0x6a568e:c.instructions+=4;goto B6a568e;
case 0x6a5692:c.instructions+=3;goto B6a5692;
case 0x6a5695:c.instructions+=2;goto B6a5695;
case 0x6a5698:c.instructions+=1;goto B6a5698;
case 0x6a569a:goto L6a569a;
case 0x6a569d:c.instructions+=2;goto B6a569d;
case 0x6a56a0:c.instructions+=1;goto B6a56a0;
case 0x6a56a2:goto L6a56a2;
case 0x6a56a5:c.instructions+=2;goto B6a56a5;
case 0x6a56a8:c.instructions+=1;goto B6a56a8;
case 0x6a56aa:goto L6a56aa;
case 0x6a56ad:goto L6a56ad;
case 0x6a56b0:c.instructions+=3;goto B6a56b0;
case 0x6a56b3:c.instructions+=2;goto B6a56b3;
case 0x6a56b6:c.instructions+=1;goto B6a56b6;
case 0x6a56b8:goto L6a56b8;
case 0x6a56ba:c.instructions+=3;goto B6a56ba;
case 0x6a56bb:c.instructions+=2;goto B6a56bb;
case 0x6a56be:c.instructions+=1;goto B6a56be;
case 0x6a56c0:goto L6a56c0;
case 0x6a56c3:goto L6a56c3;
case 0x6a56c6:c.instructions+=3;goto B6a56c6;
case 0x6a56c9:c.instructions+=2;goto B6a56c9;
case 0x6a56cc:c.instructions+=1;goto B6a56cc;
case 0x6a56d2:goto L6a56d2;
case 0x6a56d5:c.instructions+=5;goto B6a56d5;
case 0x6a56d7:c.instructions+=4;goto B6a56d7;
case 0x6a56dc:c.instructions+=3;goto B6a56dc;
case 0x6a56e1:c.instructions+=2;goto B6a56e1;
case 0x6a56e3:c.instructions+=1;goto B6a56e3;
case 0x6a56e5:goto L6a56e5;
case 0x6a56e9:c.instructions+=1;goto B6a56e9;
case 0x6a56eb:goto L6a56eb;
case 0x6a56ee:c.instructions+=8;goto B6a56ee;
case 0x6a56f0:c.instructions+=7;goto B6a56f0;
case 0x6a56f3:c.instructions+=6;goto B6a56f3;
case 0x6a56f6:c.instructions+=5;goto B6a56f6;
case 0x6a56f9:c.instructions+=4;goto B6a56f9;
case 0x6a56fc:c.instructions+=3;goto B6a56fc;
case 0x6a56ff:c.instructions+=2;goto B6a56ff;
case 0x6a5703:c.instructions+=1;goto B6a5703;
case 0x6a5705:goto L6a5705;
case 0x6a570a:c.instructions+=1;goto B6a570a;
case 0x6a570c:goto L6a570c;
case 0x6a570e:c.instructions+=1;goto B6a570e;
case 0x6a5710:goto L6a5710;
case 0x6a5712:c.instructions+=2;goto B6a5712;
case 0x6a5715:c.instructions+=1;goto B6a5715;
case 0x6a5717:goto L6a5717;
case 0x6a571a:c.instructions+=1;goto B6a571a;
case 0x6a571c:goto L6a571c;
case 0x6a571f:c.instructions+=1;goto B6a571f;
case 0x6a5721:goto L6a5721;
case 0x6a5724:c.instructions+=4;goto B6a5724;
case 0x6a5727:c.instructions+=3;goto B6a5727;
case 0x6a5729:c.instructions+=2;goto B6a5729;
case 0x6a572c:c.instructions+=1;goto B6a572c;
case 0x6a572f:goto L6a572f;
case 0x6a5731:goto L6a5731;
case 0x6a5733:c.instructions+=1;goto B6a5733;
case 0x6a5736:goto L6a5736;
case 0x6a5738:goto L6a5738;
case 0x6a573d:goto L6a573d;
case 0x6a5741:c.instructions+=3;goto B6a5741;
case 0x6a5745:c.instructions+=2;goto B6a5745;
case 0x6a5748:c.instructions+=1;goto B6a5748;
case 0x6a574a:goto L6a574a;
case 0x6a574c:c.instructions+=3;goto B6a574c;
case 0x6a574f:c.instructions+=2;goto B6a574f;
case 0x6a5751:c.instructions+=1;goto B6a5751;
case 0x6a5753:goto L6a5753;
case 0x6a5756:c.instructions+=4;goto B6a5756;
case 0x6a575a:c.instructions+=3;goto B6a575a;
case 0x6a575d:c.instructions+=2;goto B6a575d;
case 0x6a5760:c.instructions+=1;goto B6a5760;
case 0x6a5763:goto L6a5763;
case 0x6a5766:c.instructions+=12;goto B6a5766;
case 0x6a5768:c.instructions+=11;goto B6a5768;
case 0x6a576b:c.instructions+=10;goto B6a576b;
case 0x6a576e:c.instructions+=9;goto B6a576e;
case 0x6a5771:c.instructions+=8;goto B6a5771;
case 0x6a5774:c.instructions+=7;goto B6a5774;
case 0x6a5777:c.instructions+=6;goto B6a5777;
case 0x6a577a:c.instructions+=5;goto B6a577a;
case 0x6a577c:c.instructions+=4;goto B6a577c;
case 0x6a577f:c.instructions+=3;goto B6a577f;
case 0x6a5782:c.instructions+=2;goto B6a5782;
case 0x6a5784:c.instructions+=1;goto B6a5784;
case 0x6a5787:goto L6a5787;
case 0x6a5789:goto L6a5789;
case 0x6a578b:c.instructions+=1;goto B6a578b;
case 0x6a578e:goto L6a578e;
case 0x6a5790:goto L6a5790;
case 0x6a5793:c.instructions+=1;goto B6a5793;
case 0x6a5795:goto L6a5795;
case 0x6a579c:c.instructions+=1;goto B6a579c;
case 0x6a579e:goto L6a579e;
case 0x6a57a1:c.instructions+=5;goto B6a57a1;
case 0x6a57a5:c.instructions+=4;goto B6a57a5;
case 0x6a57a8:c.instructions+=3;goto B6a57a8;
case 0x6a57ae:c.instructions+=2;goto B6a57ae;
case 0x6a57b1:c.instructions+=1;goto B6a57b1;
case 0x6a57b3:goto L6a57b3;
case 0x6a57b6:c.instructions+=1;goto B6a57b6;
case 0x6a57b8:goto L6a57b8;
case 0x6a57bf:c.instructions+=5;goto B6a57bf;
case 0x6a57c5:c.instructions+=4;goto B6a57c5;
case 0x6a57c7:c.instructions+=3;goto B6a57c7;
case 0x6a57c9:c.instructions+=2;goto B6a57c9;
case 0x6a57cc:c.instructions+=1;goto B6a57cc;
case 0x6a57ce:goto L6a57ce;
case 0x6a57d5:c.instructions+=5;goto B6a57d5;
case 0x6a57db:c.instructions+=4;goto B6a57db;
case 0x6a57dd:c.instructions+=3;goto B6a57dd;
case 0x6a57df:c.instructions+=2;goto B6a57df;
case 0x6a57e2:c.instructions+=1;goto B6a57e2;
case 0x6a57e4:goto L6a57e4;
case 0x6a57ec:goto L6a57ec;
case 0x6a57ed:c.instructions+=2;goto B6a57ed;
case 0x6a57f0:c.instructions+=1;goto B6a57f0;
case 0x6a57f2:goto L6a57f2;
case 0x6a57f6:c.instructions+=1;goto B6a57f6;
case 0x6a57fc:goto L6a57fc;
case 0x6a57fe:c.instructions+=1;goto B6a57fe;
case 0x6a5801:goto L6a5801;
case 0x6a5804:c.instructions+=2;goto B6a5804;
case 0x6a5809:c.instructions+=1;goto B6a5809;
case 0x6a580f:goto L6a580f;
case 0x6a5813:c.instructions+=5;goto B6a5813;
case 0x6a5816:c.instructions+=4;goto B6a5816;
case 0x6a5819:c.instructions+=3;goto B6a5819;
case 0x6a581f:c.instructions+=2;goto B6a581f;
case 0x6a5822:c.instructions+=1;goto B6a5822;
case 0x6a5828:goto L6a5828;
case 0x6a582a:c.instructions+=3;goto B6a582a;
case 0x6a582d:c.instructions+=2;goto B6a582d;
case 0x6a5830:c.instructions+=1;goto B6a5830;
case 0x6a5833:goto L6a5833;
case 0x6a5836:c.instructions+=3;goto B6a5836;
case 0x6a5839:c.instructions+=2;goto B6a5839;
case 0x6a583e:c.instructions+=1;goto B6a583e;
case 0x6a5840:goto L6a5840;
case 0x6a5844:c.instructions+=4;goto B6a5844;
case 0x6a5847:c.instructions+=3;goto B6a5847;
case 0x6a5848:c.instructions+=2;goto B6a5848;
case 0x6a584a:c.instructions+=1;goto B6a584a;
case 0x6a584f:goto L6a584f;
case 0x6a5851:c.instructions+=1;goto B6a5851;
case 0x6a5853:goto L6a5853;
case 0x6a5856:c.instructions+=8;goto B6a5856;
case 0x6a5859:c.instructions+=7;goto B6a5859;
case 0x6a585c:c.instructions+=6;goto B6a585c;
case 0x6a5863:c.instructions+=5;goto B6a5863;
case 0x6a5869:c.instructions+=4;goto B6a5869;
case 0x6a586b:c.instructions+=3;goto B6a586b;
case 0x6a586d:c.instructions+=2;goto B6a586d;
case 0x6a5870:c.instructions+=1;goto B6a5870;
case 0x6a5872:goto L6a5872;
case 0x6a5879:c.instructions+=5;goto B6a5879;
case 0x6a587f:c.instructions+=4;goto B6a587f;
case 0x6a5881:c.instructions+=3;goto B6a5881;
case 0x6a5883:c.instructions+=2;goto B6a5883;
case 0x6a5886:c.instructions+=1;goto B6a5886;
case 0x6a5888:goto L6a5888;
case 0x6a588b:c.instructions+=3;goto B6a588b;
case 0x6a588e:c.instructions+=2;goto B6a588e;
case 0x6a5891:c.instructions+=1;goto B6a5891;
case 0x6a5893:goto L6a5893;
case 0x6a5896:c.instructions+=2;goto B6a5896;
case 0x6a5899:c.instructions+=1;goto B6a5899;
case 0x6a589f:goto L6a589f;
case 0x6a58a2:c.instructions+=10;goto B6a58a2;
case 0x6a58a5:c.instructions+=9;goto B6a58a5;
case 0x6a58a8:c.instructions+=8;goto B6a58a8;
case 0x6a58ab:c.instructions+=7;goto B6a58ab;
case 0x6a58ae:c.instructions+=6;goto B6a58ae;
case 0x6a58b1:c.instructions+=5;goto B6a58b1;
case 0x6a58b4:c.instructions+=4;goto B6a58b4;
case 0x6a58b6:c.instructions+=3;goto B6a58b6;
case 0x6a58b9:c.instructions+=2;goto B6a58b9;
case 0x6a58bc:c.instructions+=1;goto B6a58bc;
case 0x6a58be:goto L6a58be;
case 0x6a58c0:goto L6a58c0;
case 0x6a58c4:c.instructions+=2;goto B6a58c4;
case 0x6a58c7:c.instructions+=1;goto B6a58c7;
case 0x6a58c9:goto L6a58c9;
case 0x6a58cd:c.instructions+=5;goto B6a58cd;
case 0x6a58d0:c.instructions+=4;goto B6a58d0;
case 0x6a58d3:c.instructions+=3;goto B6a58d3;
case 0x6a58d9:c.instructions+=2;goto B6a58d9;
case 0x6a58dc:c.instructions+=1;goto B6a58dc;
case 0x6a58de:goto L6a58de;
case 0x6a58e1:c.instructions+=1;goto B6a58e1;
case 0x6a58e3:goto L6a58e3;
case 0x6a58e9:goto L6a58e9;
case 0x6a58ea:c.instructions+=2;goto B6a58ea;
case 0x6a58ed:c.instructions+=1;goto B6a58ed;
case 0x6a58ef:goto L6a58ef;
case 0x6a58f1:c.instructions+=2;goto B6a58f1;
case 0x6a58f4:c.instructions+=1;goto B6a58f4;
case 0x6a58f6:goto L6a58f6;
case 0x6a58f9:c.instructions+=4;goto B6a58f9;
case 0x6a58fc:c.instructions+=3;goto B6a58fc;
case 0x6a5902:c.instructions+=2;goto B6a5902;
case 0x6a5905:c.instructions+=1;goto B6a5905;
case 0x6a5907:goto L6a5907;
case 0x6a590a:c.instructions+=1;goto B6a590a;
case 0x6a590c:goto L6a590c;
case 0x6a590f:c.instructions+=4;goto B6a590f;
case 0x6a5912:c.instructions+=3;goto B6a5912;
case 0x6a5915:c.instructions+=2;goto B6a5915;
case 0x6a5917:c.instructions+=1;goto B6a5917;
case 0x6a591a:goto L6a591a;
case 0x6a591b:c.instructions+=2;goto B6a591b;
case 0x6a591e:c.instructions+=1;goto B6a591e;
case 0x6a5920:goto L6a5920;
case 0x6a5923:c.instructions+=5;goto B6a5923;
case 0x6a5926:c.instructions+=4;goto B6a5926;
case 0x6a5928:c.instructions+=3;goto B6a5928;
case 0x6a592b:c.instructions+=2;goto B6a592b;
case 0x6a592d:c.instructions+=1;goto B6a592d;
case 0x6a5930:goto L6a5930;
case 0x6a5933:c.instructions+=4;goto B6a5933;
case 0x6a5934:c.instructions+=3;goto B6a5934;
case 0x6a5937:c.instructions+=2;goto B6a5937;
case 0x6a593a:c.instructions+=1;goto B6a593a;
case 0x6a5940:goto L6a5940;
case 0x6a5944:c.instructions+=1;goto B6a5944;
case 0x6a594a:goto L6a594a;
case 0x6a594c:c.instructions+=1;goto B6a594c;
case 0x6a594f:goto L6a594f;
case 0x6a5952:c.instructions+=2;goto B6a5952;
case 0x6a5957:c.instructions+=1;goto B6a5957;
case 0x6a595d:goto L6a595d;
case 0x6a5960:c.instructions+=8;goto B6a5960;
case 0x6a5964:c.instructions+=7;goto B6a5964;
case 0x6a5966:c.instructions+=6;goto B6a5966;
case 0x6a5969:c.instructions+=5;goto B6a5969;
case 0x6a596c:c.instructions+=4;goto B6a596c;
case 0x6a596f:c.instructions+=3;goto B6a596f;
case 0x6a5972:c.instructions+=2;goto B6a5972;
case 0x6a5976:c.instructions+=1;goto B6a5976;
case 0x6a5978:goto L6a5978;
case 0x6a597c:c.instructions+=1;goto B6a597c;
case 0x6a5982:goto L6a5982;
case 0x6a5986:c.instructions+=1;goto B6a5986;
case 0x6a598a:goto L6a598a;
case 0x6a598d:c.instructions+=3;goto B6a598d;
case 0x6a5990:c.instructions+=2;goto B6a5990;
case 0x6a5995:c.instructions+=1;goto B6a5995;
case 0x6a5997:goto L6a5997;
case 0x6a599b:c.instructions+=3;goto B6a599b;
case 0x6a599d:c.instructions+=2;goto B6a599d;
case 0x6a599e:c.instructions+=1;goto B6a599e;
case 0x6a59a3:goto L6a59a3;
case 0x6a59a5:c.instructions+=1;goto B6a59a5;
case 0x6a59a7:goto L6a59a7;
case 0x6a59aa:goto L6a59aa;
case 0x6a59ad:c.instructions+=3;goto B6a59ad;
case 0x6a59b0:c.instructions+=2;goto B6a59b0;
case 0x6a59b3:c.instructions+=1;goto B6a59b3;
case 0x6a59b5:goto L6a59b5;
case 0x6a59b9:goto L6a59b9;
case 0x6a59bd:c.instructions+=1;goto B6a59bd;
case 0x6a59bf:goto L6a59bf;
case 0x6a59c2:c.instructions+=3;goto B6a59c2;
case 0x6a59c5:c.instructions+=2;goto B6a59c5;
case 0x6a59ca:c.instructions+=1;goto B6a59ca;
case 0x6a59cc:goto L6a59cc;
case 0x6a59cf:c.instructions+=8;goto B6a59cf;
case 0x6a59d3:c.instructions+=7;goto B6a59d3;
case 0x6a59d5:c.instructions+=6;goto B6a59d5;
case 0x6a59d8:c.instructions+=5;goto B6a59d8;
case 0x6a59db:c.instructions+=4;goto B6a59db;
case 0x6a59de:c.instructions+=3;goto B6a59de;
case 0x6a59e1:c.instructions+=2;goto B6a59e1;
case 0x6a59e5:c.instructions+=1;goto B6a59e5;
case 0x6a59e7:goto L6a59e7;
case 0x6a59eb:c.instructions+=1;goto B6a59eb;
case 0x6a59ed:goto L6a59ed;
case 0x6a59ef:c.instructions+=12;goto B6a59ef;
case 0x6a59f2:c.instructions+=11;goto B6a59f2;
case 0x6a59f4:c.instructions+=10;goto B6a59f4;
case 0x6a59f7:c.instructions+=9;goto B6a59f7;
case 0x6a59fa:c.instructions+=8;goto B6a59fa;
case 0x6a59fd:c.instructions+=7;goto B6a59fd;
case 0x6a5a04:c.instructions+=6;goto B6a5a04;
case 0x6a5a06:c.instructions+=5;goto B6a5a06;
case 0x6a5a0d:c.instructions+=4;goto B6a5a0d;
case 0x6a5a0f:c.instructions+=3;goto B6a5a0f;
case 0x6a5a11:c.instructions+=2;goto B6a5a11;
case 0x6a5a13:c.instructions+=1;goto B6a5a13;
case 0x6a5a15:goto L6a5a15;
case 0x6a5a18:c.instructions+=3;goto B6a5a18;
case 0x6a5a1b:c.instructions+=2;goto B6a5a1b;
case 0x6a5a1e:c.instructions+=1;goto B6a5a1e;
case 0x6a5a20:goto L6a5a20;
case 0x6a5a23:c.instructions+=4;goto B6a5a23;
case 0x6a5a24:c.instructions+=3;goto B6a5a24;
case 0x6a5a27:c.instructions+=2;goto B6a5a27;
case 0x6a5a2a:c.instructions+=1;goto B6a5a2a;
case 0x6a5a30:goto L6a5a30;
case 0x6a5a34:goto L6a5a34;
case 0x6a5a37:c.instructions+=4;goto B6a5a37;
case 0x6a5a3a:c.instructions+=3;goto B6a5a3a;
case 0x6a5a3c:c.instructions+=2;goto B6a5a3c;
case 0x6a5a40:c.instructions+=1;goto B6a5a40;
case 0x6a5a46:goto L6a5a46;
case 0x6a5a4a:c.instructions+=8;goto B6a5a4a;
case 0x6a5a4c:c.instructions+=7;goto B6a5a4c;
case 0x6a5a4d:c.instructions+=6;goto B6a5a4d;
case 0x6a5a50:c.instructions+=5;goto B6a5a50;
case 0x6a5a53:c.instructions+=4;goto B6a5a53;
case 0x6a5a56:c.instructions+=3;goto B6a5a56;
case 0x6a5a59:c.instructions+=2;goto B6a5a59;
case 0x6a5a5c:c.instructions+=1;goto B6a5a5c;
case 0x6a5a5f:goto L6a5a5f;
case 0x6a5a64:c.instructions+=1;goto B6a5a64;
case 0x6a5a66:goto L6a5a66;
case 0x6a5a6a:c.instructions+=3;goto B6a5a6a;
case 0x6a5a6c:c.instructions+=2;goto B6a5a6c;
case 0x6a5a6d:c.instructions+=1;goto B6a5a6d;
case 0x6a5a72:goto L6a5a72;
case 0x6a5a74:c.instructions+=1;goto B6a5a74;
case 0x6a5a76:goto L6a5a76;
case 0x6a5a79:c.instructions+=7;goto B6a5a79;
case 0x6a5a80:c.instructions+=6;goto B6a5a80;
case 0x6a5a82:c.instructions+=5;goto B6a5a82;
case 0x6a5a88:c.instructions+=4;goto B6a5a88;
case 0x6a5a8a:c.instructions+=3;goto B6a5a8a;
case 0x6a5a8c:c.instructions+=2;goto B6a5a8c;
case 0x6a5a8f:c.instructions+=1;goto B6a5a8f;
case 0x6a5a91:goto L6a5a91;
case 0x6a5a98:goto L6a5a98;
case 0x6a5a9a:c.instructions+=5;goto B6a5a9a;
case 0x6a5aa0:c.instructions+=4;goto B6a5aa0;
case 0x6a5aa2:c.instructions+=3;goto B6a5aa2;
case 0x6a5aa4:c.instructions+=2;goto B6a5aa4;
case 0x6a5aa7:c.instructions+=1;goto B6a5aa7;
case 0x6a5aa9:goto L6a5aa9;
case 0x6a5aad:goto L6a5aad;
case 0x6a5ab4:c.instructions+=5;goto B6a5ab4;
case 0x6a5aba:c.instructions+=4;goto B6a5aba;
case 0x6a5abc:c.instructions+=3;goto B6a5abc;
case 0x6a5abe:c.instructions+=2;goto B6a5abe;
case 0x6a5ac1:c.instructions+=1;goto B6a5ac1;
case 0x6a5ac3:goto L6a5ac3;
case 0x6a5aca:goto L6a5aca;
case 0x6a5acc:c.instructions+=5;goto B6a5acc;
case 0x6a5ad2:c.instructions+=4;goto B6a5ad2;
case 0x6a5ad4:c.instructions+=3;goto B6a5ad4;
case 0x6a5ad6:c.instructions+=2;goto B6a5ad6;
case 0x6a5ad9:c.instructions+=1;goto B6a5ad9;
case 0x6a5adb:goto L6a5adb;
case 0x6a5adf:goto L6a5adf;
case 0x6a5ae0:c.instructions+=2;goto B6a5ae0;
case 0x6a5ae3:c.instructions+=1;goto B6a5ae3;
case 0x6a5ae9:goto L6a5ae9;
case 0x6a5aeb:c.instructions+=2;goto B6a5aeb;
case 0x6a5aee:c.instructions+=1;goto B6a5aee;
case 0x6a5af0:goto L6a5af0;
case 0x6a5af3:c.instructions+=1;goto B6a5af3;
case 0x6a5af6:goto L6a5af6;
case 0x6a5af9:c.instructions+=1;goto B6a5af9;
case 0x6a5afb:goto L6a5afb;
case 0x6a5afe:c.instructions+=5;goto B6a5afe;
case 0x6a5b01:c.instructions+=4;goto B6a5b01;
case 0x6a5b03:c.instructions+=3;goto B6a5b03;
case 0x6a5b05:c.instructions+=2;goto B6a5b05;
case 0x6a5b07:c.instructions+=1;goto B6a5b07;
case 0x6a5b09:goto L6a5b09;
case 0x6a5b0e:c.instructions+=2;goto B6a5b0e;
case 0x6a5b13:c.instructions+=1;goto B6a5b13;
case 0x6a5b15:goto L6a5b15;
case 0x6a5b1a:c.instructions+=1;goto B6a5b1a;
case 0x6a5b1f:goto L6a5b1f;
case 0x6a5b20:c.instructions+=1;goto B6a5b20;
case 0x6a5b25:goto L6a5b25;
case 0x6a5b27:c.instructions+=3;goto B6a5b27;
case 0x6a5b2a:c.instructions+=2;goto B6a5b2a;
case 0x6a5b2d:c.instructions+=1;goto B6a5b2d;
case 0x6a5b33:goto L6a5b33;
case 0x6a5b36:c.instructions+=5;goto B6a5b36;
case 0x6a5b39:c.instructions+=4;goto B6a5b39;
case 0x6a5b3c:c.instructions+=3;goto B6a5b3c;
case 0x6a5b3e:c.instructions+=2;goto B6a5b3e;
case 0x6a5b41:c.instructions+=1;goto B6a5b41;
case 0x6a5b46:goto L6a5b46;
case 0x6a5b4a:c.instructions+=1;goto B6a5b4a;
case 0x6a5b4c:goto L6a5b4c;
case 0x6a5b4f:c.instructions+=2;goto B6a5b4f;
case 0x6a5b52:c.instructions+=1;goto B6a5b52;
case 0x6a5b54:goto L6a5b54;
case 0x6a5b57:c.instructions+=1;goto B6a5b57;
case 0x6a5b59:goto L6a5b59;
case 0x6a5b5c:c.instructions+=7;goto B6a5b5c;
case 0x6a5b5e:c.instructions+=6;goto B6a5b5e;
case 0x6a5b63:c.instructions+=5;goto B6a5b63;
case 0x6a5b65:c.instructions+=4;goto B6a5b65;
case 0x6a5b6a:c.instructions+=3;goto B6a5b6a;
case 0x6a5b6b:c.instructions+=2;goto B6a5b6b;
case 0x6a5b6d:c.instructions+=1;goto B6a5b6d;
case 0x6a5b72:goto L6a5b72;
case 0x6a5b74:c.instructions+=3;goto B6a5b74;
case 0x6a5b77:c.instructions+=2;goto B6a5b77;
case 0x6a5b7a:c.instructions+=1;goto B6a5b7a;
case 0x6a5b80:goto L6a5b80;
case 0x6a5b83:c.instructions+=5;goto B6a5b83;
case 0x6a5b86:c.instructions+=4;goto B6a5b86;
case 0x6a5b89:c.instructions+=3;goto B6a5b89;
case 0x6a5b8b:c.instructions+=2;goto B6a5b8b;
case 0x6a5b8e:c.instructions+=1;goto B6a5b8e;
case 0x6a5b93:goto L6a5b93;
case 0x6a5b97:c.instructions+=1;goto B6a5b97;
case 0x6a5b99:goto L6a5b99;
case 0x6a5b9c:c.instructions+=1;goto B6a5b9c;
case 0x6a5b9f:goto L6a5b9f;
case 0x6a5ba3:c.instructions+=1;goto B6a5ba3;
case 0x6a5ba5:goto L6a5ba5;
case 0x6a5ba9:c.instructions+=1;goto B6a5ba9;
case 0x6a5bab:goto L6a5bab;
case 0x6a5bae:c.instructions+=7;goto B6a5bae;
case 0x6a5bb0:c.instructions+=6;goto B6a5bb0;
case 0x6a5bb5:c.instructions+=5;goto B6a5bb5;
case 0x6a5bb7:c.instructions+=4;goto B6a5bb7;
case 0x6a5bbc:c.instructions+=3;goto B6a5bbc;
case 0x6a5bbd:c.instructions+=2;goto B6a5bbd;
case 0x6a5bbf:c.instructions+=1;goto B6a5bbf;
case 0x6a5bc4:goto L6a5bc4;
case 0x6a5bc7:c.instructions+=3;goto B6a5bc7;
case 0x6a5bca:c.instructions+=2;goto B6a5bca;
case 0x6a5bcd:c.instructions+=1;goto B6a5bcd;
case 0x6a5bd3:goto L6a5bd3;
case 0x6a5bd6:c.instructions+=6;goto B6a5bd6;
case 0x6a5bd9:c.instructions+=5;goto B6a5bd9;
case 0x6a5bdc:c.instructions+=4;goto B6a5bdc;
case 0x6a5bde:c.instructions+=3;goto B6a5bde;
case 0x6a5be1:c.instructions+=2;goto B6a5be1;
case 0x6a5be4:c.instructions+=1;goto B6a5be4;
case 0x6a5be9:goto L6a5be9;
case 0x6a5bec:c.instructions+=8;goto B6a5bec;
case 0x6a5bef:c.instructions+=7;goto B6a5bef;
case 0x6a5bf2:c.instructions+=6;goto B6a5bf2;
case 0x6a5bf5:c.instructions+=5;goto B6a5bf5;
case 0x6a5bf7:c.instructions+=4;goto B6a5bf7;
case 0x6a5bfa:c.instructions+=3;goto B6a5bfa;
case 0x6a5bfc:c.instructions+=2;goto B6a5bfc;
case 0x6a5bff:c.instructions+=1;goto B6a5bff;
case 0x6a5c02:goto L6a5c02;
case 0x6a5c05:c.instructions+=5;goto B6a5c05;
case 0x6a5c08:c.instructions+=4;goto B6a5c08;
case 0x6a5c0c:c.instructions+=3;goto B6a5c0c;
case 0x6a5c0f:c.instructions+=2;goto B6a5c0f;
case 0x6a5c12:c.instructions+=1;goto B6a5c12;
case 0x6a5c18:goto L6a5c18;
case 0x6a5c1c:c.instructions+=6;goto B6a5c1c;
case 0x6a5c1e:c.instructions+=5;goto B6a5c1e;
case 0x6a5c1f:c.instructions+=4;goto B6a5c1f;
case 0x6a5c22:c.instructions+=3;goto B6a5c22;
case 0x6a5c24:c.instructions+=2;goto B6a5c24;
case 0x6a5c27:c.instructions+=1;goto B6a5c27;
case 0x6a5c2c:goto L6a5c2c;
case 0x6a5c2e:c.instructions+=1;goto B6a5c2e;
case 0x6a5c34:goto L6a5c34;
case 0x6a5c36:c.instructions+=2;goto B6a5c36;
case 0x6a5c39:c.instructions+=1;goto B6a5c39;
case 0x6a5c3b:goto L6a5c3b;
case 0x6a5c3e:c.instructions+=9;goto B6a5c3e;
case 0x6a5c45:c.instructions+=8;goto B6a5c45;
case 0x6a5c46:c.instructions+=7;goto B6a5c46;
case 0x6a5c47:c.instructions+=6;goto B6a5c47;
case 0x6a5c4a:c.instructions+=5;goto B6a5c4a;
case 0x6a5c4b:c.instructions+=4;goto B6a5c4b;
case 0x6a5c4c:c.instructions+=3;goto B6a5c4c;
case 0x6a5c4f:c.instructions+=2;goto B6a5c4f;
case 0x6a5c51:c.instructions+=1;goto B6a5c51;
case 0x6a5c56:goto L6a5c56;
case 0x6a5c58:goto L6a5c58;
case 0x6a5c5a:goto L6a5c5a;
case 0x6a5c5d:c.instructions+=1;goto B6a5c5d;
case 0x6a5c63:goto L6a5c63;
case 0x6a5c66:c.instructions+=8;goto B6a5c66;
case 0x6a5c69:c.instructions+=7;goto B6a5c69;
case 0x6a5c6c:c.instructions+=6;goto B6a5c6c;
case 0x6a5c6f:c.instructions+=5;goto B6a5c6f;
case 0x6a5c72:c.instructions+=4;goto B6a5c72;
case 0x6a5c74:c.instructions+=3;goto B6a5c74;
case 0x6a5c77:c.instructions+=2;goto B6a5c77;
case 0x6a5c7a:c.instructions+=1;goto B6a5c7a;
case 0x6a5c7c:goto L6a5c7c;
case 0x6a5c7f:goto L6a5c7f;
case 0x6a5c82:c.instructions+=1;goto B6a5c82;
case 0x6a5c88:goto L6a5c88;
case 0x6a5c8b:c.instructions+=1;goto B6a5c8b;
case 0x6a5c8d:goto L6a5c8d;
case 0x6a5c90:c.instructions+=9;goto B6a5c90;
case 0x6a5c97:c.instructions+=8;goto B6a5c97;
case 0x6a5c98:c.instructions+=7;goto B6a5c98;
case 0x6a5c99:c.instructions+=6;goto B6a5c99;
case 0x6a5c9c:c.instructions+=5;goto B6a5c9c;
case 0x6a5c9e:c.instructions+=4;goto B6a5c9e;
case 0x6a5ca0:c.instructions+=3;goto B6a5ca0;
case 0x6a5ca3:c.instructions+=2;goto B6a5ca3;
case 0x6a5ca5:c.instructions+=1;goto B6a5ca5;
case 0x6a5caa:goto L6a5caa;
case 0x6a5cad:c.instructions+=5;goto B6a5cad;
case 0x6a5cb0:c.instructions+=4;goto B6a5cb0;
case 0x6a5cb3:c.instructions+=3;goto B6a5cb3;
case 0x6a5cb6:c.instructions+=2;goto B6a5cb6;
case 0x6a5cba:c.instructions+=1;goto B6a5cba;
case 0x6a5cc0:goto L6a5cc0;
case 0x6a5cc4:c.instructions+=1;goto B6a5cc4;
case 0x6a5cca:goto L6a5cca;
case 0x6a5ccd:c.instructions+=2;goto B6a5ccd;
case 0x6a5cd0:c.instructions+=1;goto B6a5cd0;
case 0x6a5cd2:goto L6a5cd2;
case 0x6a5cd5:c.instructions+=4;goto B6a5cd5;
case 0x6a5cd7:c.instructions+=3;goto B6a5cd7;
case 0x6a5cda:c.instructions+=2;goto B6a5cda;
case 0x6a5cdd:c.instructions+=1;goto B6a5cdd;
case 0x6a5cdf:goto L6a5cdf;
case 0x6a5ce2:c.instructions+=14;goto B6a5ce2;
case 0x6a5ce4:c.instructions+=13;goto B6a5ce4;
case 0x6a5ce7:c.instructions+=12;goto B6a5ce7;
case 0x6a5ce9:c.instructions+=11;goto B6a5ce9;
case 0x6a5cea:c.instructions+=10;goto B6a5cea;
case 0x6a5ceb:c.instructions+=9;goto B6a5ceb;
case 0x6a5cee:c.instructions+=8;goto B6a5cee;
case 0x6a5cef:c.instructions+=7;goto B6a5cef;
case 0x6a5cf2:c.instructions+=6;goto B6a5cf2;
case 0x6a5cf4:c.instructions+=5;goto B6a5cf4;
case 0x6a5cf5:c.instructions+=4;goto B6a5cf5;
case 0x6a5cfb:c.instructions+=3;goto B6a5cfb;
case 0x6a5cfe:c.instructions+=2;goto B6a5cfe;
case 0x6a5d00:c.instructions+=1;goto B6a5d00;
case 0x6a5d05:goto L6a5d05;
case 0x6a5d07:c.instructions+=2;goto B6a5d07;
case 0x6a5d0a:c.instructions+=1;goto B6a5d0a;
case 0x6a5d10:goto L6a5d10;
case 0x6a5d13:c.instructions+=2;goto B6a5d13;
case 0x6a5d16:c.instructions+=1;goto B6a5d16;
case 0x6a5d18:goto L6a5d18;
case 0x6a5d1d:c.instructions+=4;goto B6a5d1d;
case 0x6a5d1f:c.instructions+=3;goto B6a5d1f;
case 0x6a5d21:c.instructions+=2;goto B6a5d21;
case 0x6a5d22:c.instructions+=1;goto B6a5d22;
case 0x6a5d27:goto L6a5d27;
case 0x6a5d2a:goto L6a5d2a;
case 0x6a5d2d:c.instructions+=17;goto B6a5d2d;
case 0x6a5d30:c.instructions+=16;goto B6a5d30;
case 0x6a5d33:c.instructions+=15;goto B6a5d33;
case 0x6a5d36:c.instructions+=14;goto B6a5d36;
case 0x6a5d39:c.instructions+=13;goto B6a5d39;
case 0x6a5d3c:c.instructions+=12;goto B6a5d3c;
case 0x6a5d3f:c.instructions+=11;goto B6a5d3f;
case 0x6a5d41:c.instructions+=10;goto B6a5d41;
case 0x6a5d47:c.instructions+=9;goto B6a5d47;
case 0x6a5d49:c.instructions+=8;goto B6a5d49;
case 0x6a5d4c:c.instructions+=7;goto B6a5d4c;
case 0x6a5d4f:c.instructions+=6;goto B6a5d4f;
case 0x6a5d52:c.instructions+=5;goto B6a5d52;
case 0x6a5d55:c.instructions+=4;goto B6a5d55;
case 0x6a5d58:c.instructions+=3;goto B6a5d58;
case 0x6a5d5b:c.instructions+=2;goto B6a5d5b;
case 0x6a5d5e:c.instructions+=1;goto B6a5d5e;
case 0x6a5d61:goto L6a5d61;
case 0x6a5d63:c.instructions+=2;goto B6a5d63;
case 0x6a5d66:c.instructions+=1;goto B6a5d66;
case 0x6a5d68:goto L6a5d68;
case 0x6a5d6b:c.instructions+=1;goto B6a5d6b;
case 0x6a5d6d:goto L6a5d6d;
case 0x6a5d70:goto L6a5d70;
case 0x6a5d72:c.instructions+=3;goto B6a5d72;
case 0x6a5d75:c.instructions+=2;goto B6a5d75;
case 0x6a5d78:c.instructions+=1;goto B6a5d78;
case 0x6a5d7a:goto L6a5d7a;
case 0x6a5d7e:c.instructions+=1;goto B6a5d7e;
case 0x6a5d80:goto L6a5d80;
case 0x6a5d83:c.instructions+=6;goto B6a5d83;
case 0x6a5d8a:c.instructions+=5;goto B6a5d8a;
case 0x6a5d8d:c.instructions+=4;goto B6a5d8d;
case 0x6a5d8f:c.instructions+=3;goto B6a5d8f;
case 0x6a5d91:c.instructions+=2;goto B6a5d91;
case 0x6a5d94:c.instructions+=1;goto B6a5d94;
case 0x6a5d96:goto L6a5d96;
case 0x6a5d97:c.instructions+=3;goto B6a5d97;
case 0x6a5d9a:c.instructions+=2;goto B6a5d9a;
case 0x6a5d9d:c.instructions+=1;goto B6a5d9d;
case 0x6a5d9f:goto L6a5d9f;
case 0x6a5da2:goto L6a5da2;
case 0x6a5da4:goto L6a5da4;
case 0x6a5da7:c.instructions+=9;goto B6a5da7;
case 0x6a5dae:c.instructions+=8;goto B6a5dae;
case 0x6a5daf:c.instructions+=7;goto B6a5daf;
case 0x6a5db0:c.instructions+=6;goto B6a5db0;
case 0x6a5db3:c.instructions+=5;goto B6a5db3;
case 0x6a5db5:c.instructions+=4;goto B6a5db5;
case 0x6a5db7:c.instructions+=3;goto B6a5db7;
case 0x6a5dba:c.instructions+=2;goto B6a5dba;
case 0x6a5dbc:c.instructions+=1;goto B6a5dbc;
case 0x6a5dc1:goto L6a5dc1;
case 0x6a5dc3:c.instructions+=2;goto B6a5dc3;
case 0x6a5dc6:c.instructions+=1;goto B6a5dc6;
case 0x6a5dcc:goto L6a5dcc;
case 0x6a5dcf:c.instructions+=2;goto B6a5dcf;
case 0x6a5dd2:c.instructions+=1;goto B6a5dd2;
case 0x6a5dd5:goto L6a5dd5;
case 0x6a5dd8:c.instructions+=3;goto B6a5dd8;
case 0x6a5ddb:c.instructions+=2;goto B6a5ddb;
case 0x6a5dde:c.instructions+=1;goto B6a5dde;
case 0x6a5de1:goto L6a5de1;
case 0x6a5de4:c.instructions+=15;goto B6a5de4;
case 0x6a5de6:c.instructions+=14;goto B6a5de6;
case 0x6a5de9:c.instructions+=13;goto B6a5de9;
case 0x6a5dec:c.instructions+=12;goto B6a5dec;
case 0x6a5dee:c.instructions+=11;goto B6a5dee;
case 0x6a5def:c.instructions+=10;goto B6a5def;
case 0x6a5df0:c.instructions+=9;goto B6a5df0;
case 0x6a5df3:c.instructions+=8;goto B6a5df3;
case 0x6a5df4:c.instructions+=7;goto B6a5df4;
case 0x6a5df7:c.instructions+=6;goto B6a5df7;
case 0x6a5df9:c.instructions+=5;goto B6a5df9;
case 0x6a5dfa:c.instructions+=4;goto B6a5dfa;
case 0x6a5e00:c.instructions+=3;goto B6a5e00;
case 0x6a5e03:c.instructions+=2;goto B6a5e03;
case 0x6a5e05:c.instructions+=1;goto B6a5e05;
case 0x6a5e0a:goto L6a5e0a;
case 0x6a5e0c:c.instructions+=2;goto B6a5e0c;
case 0x6a5e0f:c.instructions+=1;goto B6a5e0f;
case 0x6a5e15:goto L6a5e15;
case 0x6a5e18:c.instructions+=2;goto B6a5e18;
case 0x6a5e1b:c.instructions+=1;goto B6a5e1b;
case 0x6a5e1d:goto L6a5e1d;
case 0x6a5e22:c.instructions+=4;goto B6a5e22;
case 0x6a5e24:c.instructions+=3;goto B6a5e24;
case 0x6a5e26:c.instructions+=2;goto B6a5e26;
case 0x6a5e27:c.instructions+=1;goto B6a5e27;
case 0x6a5e2c:goto L6a5e2c;
case 0x6a5e2f:goto L6a5e2f;
case 0x6a5e32:c.instructions+=39;goto B6a5e32;
case 0x6a5e35:c.instructions+=38;goto B6a5e35;
case 0x6a5e38:c.instructions+=37;goto B6a5e38;
case 0x6a5e3b:c.instructions+=36;goto B6a5e3b;
case 0x6a5e3e:c.instructions+=35;goto B6a5e3e;
case 0x6a5e41:c.instructions+=34;goto B6a5e41;
case 0x6a5e44:c.instructions+=33;goto B6a5e44;
case 0x6a5e47:c.instructions+=32;goto B6a5e47;
case 0x6a5e49:c.instructions+=31;goto B6a5e49;
case 0x6a5e4c:c.instructions+=30;goto B6a5e4c;
case 0x6a5e4f:c.instructions+=29;goto B6a5e4f;
case 0x6a5e51:c.instructions+=28;goto B6a5e51;
case 0x6a5e54:c.instructions+=27;goto B6a5e54;
case 0x6a5e56:c.instructions+=26;goto B6a5e56;
case 0x6a5e58:c.instructions+=25;goto B6a5e58;
case 0x6a5e5b:c.instructions+=24;goto B6a5e5b;
case 0x6a5e5e:c.instructions+=23;goto B6a5e5e;
case 0x6a5e61:c.instructions+=22;goto B6a5e61;
case 0x6a5e64:c.instructions+=21;goto B6a5e64;
case 0x6a5e67:c.instructions+=20;goto B6a5e67;
case 0x6a5e6a:c.instructions+=19;goto B6a5e6a;
case 0x6a5e6c:c.instructions+=18;goto B6a5e6c;
case 0x6a5e6f:c.instructions+=17;goto B6a5e6f;
case 0x6a5e72:c.instructions+=16;goto B6a5e72;
case 0x6a5e75:c.instructions+=15;goto B6a5e75;
case 0x6a5e78:c.instructions+=14;goto B6a5e78;
case 0x6a5e7b:c.instructions+=13;goto B6a5e7b;
case 0x6a5e7d:c.instructions+=12;goto B6a5e7d;
case 0x6a5e80:c.instructions+=11;goto B6a5e80;
case 0x6a5e83:c.instructions+=10;goto B6a5e83;
case 0x6a5e86:c.instructions+=9;goto B6a5e86;
case 0x6a5e89:c.instructions+=8;goto B6a5e89;
case 0x6a5e8c:c.instructions+=7;goto B6a5e8c;
case 0x6a5e8f:c.instructions+=6;goto B6a5e8f;
case 0x6a5e92:c.instructions+=5;goto B6a5e92;
case 0x6a5e94:c.instructions+=4;goto B6a5e94;
case 0x6a5e97:c.instructions+=3;goto B6a5e97;
case 0x6a5e9a:c.instructions+=2;goto B6a5e9a;
case 0x6a5e9e:c.instructions+=1;goto B6a5e9e;
case 0x6a5ea4:goto L6a5ea4;
case 0x6a5ea7:c.instructions+=3;goto B6a5ea7;
case 0x6a5eaa:c.instructions+=2;goto B6a5eaa;
case 0x6a5ead:c.instructions+=1;goto B6a5ead;
case 0x6a5eb3:goto L6a5eb3;
case 0x6a5eb6:c.instructions+=3;goto B6a5eb6;
case 0x6a5eb9:c.instructions+=2;goto B6a5eb9;
case 0x6a5ebc:c.instructions+=1;goto B6a5ebc;
case 0x6a5ec2:goto L6a5ec2;
case 0x6a5ec5:c.instructions+=3;goto B6a5ec5;
case 0x6a5ecb:c.instructions+=2;goto B6a5ecb;
case 0x6a5ecd:c.instructions+=1;goto B6a5ecd;
case 0x6a5ecf:goto L6a5ecf;
case 0x6a5ed2:c.instructions+=5;goto B6a5ed2;
case 0x6a5ed6:c.instructions+=4;goto B6a5ed6;
case 0x6a5ed8:c.instructions+=3;goto B6a5ed8;
case 0x6a5edb:c.instructions+=2;goto B6a5edb;
case 0x6a5edc:c.instructions+=1;goto B6a5edc;
case 0x6a5ede:goto L6a5ede;
case 0x6a5ee0:goto L6a5ee0;
case 0x6a5ee5:c.instructions+=1;goto B6a5ee5;
case 0x6a5eeb:goto L6a5eeb;
case 0x6a5eec:c.instructions+=2;goto B6a5eec;
case 0x6a5eee:c.instructions+=1;goto B6a5eee;
case 0x6a5ef0:goto L6a5ef0;
case 0x6a5ef5:goto L6a5ef5;
case 0x6a5ef7:c.instructions+=10;goto B6a5ef7;
case 0x6a5ef8:c.instructions+=9;goto B6a5ef8;
case 0x6a5efa:c.instructions+=8;goto B6a5efa;
case 0x6a5efd:c.instructions+=7;goto B6a5efd;
case 0x6a5f00:c.instructions+=6;goto B6a5f00;
case 0x6a5f03:c.instructions+=5;goto B6a5f03;
case 0x6a5f06:c.instructions+=4;goto B6a5f06;
case 0x6a5f09:c.instructions+=3;goto B6a5f09;
case 0x6a5f0c:c.instructions+=2;goto B6a5f0c;
case 0x6a5f0f:c.instructions+=1;goto B6a5f0f;
case 0x6a5f11:goto L6a5f11;
case 0x6a5f14:c.instructions+=1;goto B6a5f14;
case 0x6a5f16:goto L6a5f16;
case 0x6a5f17:c.instructions+=8;goto B6a5f17;
case 0x6a5f1a:c.instructions+=7;goto B6a5f1a;
case 0x6a5f1b:c.instructions+=6;goto B6a5f1b;
case 0x6a5f1e:c.instructions+=5;goto B6a5f1e;
case 0x6a5f20:c.instructions+=4;goto B6a5f20;
case 0x6a5f23:c.instructions+=3;goto B6a5f23;
case 0x6a5f24:c.instructions+=2;goto B6a5f24;
case 0x6a5f27:c.instructions+=1;goto B6a5f27;
case 0x6a5f2d:goto L6a5f2d;
case 0x6a5f30:c.instructions+=4;goto B6a5f30;
case 0x6a5f33:c.instructions+=3;goto B6a5f33;
case 0x6a5f36:c.instructions+=2;goto B6a5f36;
case 0x6a5f3a:c.instructions+=1;goto B6a5f3a;
case 0x6a5f40:goto L6a5f40;
case 0x6a5f43:c.instructions+=3;goto B6a5f43;
case 0x6a5f46:c.instructions+=2;goto B6a5f46;
case 0x6a5f49:c.instructions+=1;goto B6a5f49;
case 0x6a5f4b:goto L6a5f4b;
case 0x6a5f4e:c.instructions+=2;goto B6a5f4e;
case 0x6a5f51:c.instructions+=1;goto B6a5f51;
case 0x6a5f57:goto L6a5f57;
case 0x6a5f5a:c.instructions+=5;goto B6a5f5a;
case 0x6a5f5d:c.instructions+=4;goto B6a5f5d;
case 0x6a5f5f:c.instructions+=3;goto B6a5f5f;
case 0x6a5f62:c.instructions+=2;goto B6a5f62;
case 0x6a5f65:c.instructions+=1;goto B6a5f65;
case 0x6a5f6b:goto L6a5f6b;
case 0x6a5f6f:c.instructions+=2;goto B6a5f6f;
case 0x6a5f73:c.instructions+=1;goto B6a5f73;
case 0x6a5f79:goto L6a5f79;
case 0x6a5f7c:c.instructions+=16;goto B6a5f7c;
case 0x6a5f7f:c.instructions+=15;goto B6a5f7f;
case 0x6a5f82:c.instructions+=14;goto B6a5f82;
case 0x6a5f85:c.instructions+=13;goto B6a5f85;
case 0x6a5f88:c.instructions+=12;goto B6a5f88;
case 0x6a5f8c:c.instructions+=11;goto B6a5f8c;
case 0x6a5f8f:c.instructions+=10;goto B6a5f8f;
case 0x6a5f92:c.instructions+=9;goto B6a5f92;
case 0x6a5f95:c.instructions+=8;goto B6a5f95;
case 0x6a5f98:c.instructions+=7;goto B6a5f98;
case 0x6a5f9b:c.instructions+=6;goto B6a5f9b;
case 0x6a5f9d:c.instructions+=5;goto B6a5f9d;
case 0x6a5fa0:c.instructions+=4;goto B6a5fa0;
case 0x6a5fa3:c.instructions+=3;goto B6a5fa3;
case 0x6a5fa6:c.instructions+=2;goto B6a5fa6;
case 0x6a5fa9:c.instructions+=1;goto B6a5fa9;
case 0x6a5fab:goto L6a5fab;
case 0x6a5fae:goto L6a5fae;
case 0x6a5fb1:c.instructions+=5;goto B6a5fb1;
case 0x6a5fb4:c.instructions+=4;goto B6a5fb4;
case 0x6a5fb7:c.instructions+=3;goto B6a5fb7;
case 0x6a5fba:c.instructions+=2;goto B6a5fba;
case 0x6a5fbd:c.instructions+=1;goto B6a5fbd;
case 0x6a5fbf:goto L6a5fbf;
case 0x6a5fc2:c.instructions+=3;goto B6a5fc2;
case 0x6a5fc5:c.instructions+=2;goto B6a5fc5;
case 0x6a5fc8:c.instructions+=1;goto B6a5fc8;
case 0x6a5fca:goto L6a5fca;
case 0x6a5fcd:goto L6a5fcd;
case 0x6a5fd0:c.instructions+=2;goto B6a5fd0;
case 0x6a5fd3:c.instructions+=1;goto B6a5fd3;
case 0x6a5fd5:goto L6a5fd5;
case 0x6a5fd7:goto L6a5fd7;
case 0x6a5fda:goto L6a5fda;
case 0x6a5fdd:c.instructions+=2;goto B6a5fdd;
case 0x6a5fe0:c.instructions+=1;goto B6a5fe0;
case 0x6a5fe2:goto L6a5fe2;
case 0x6a5fe5:c.instructions+=9;goto B6a5fe5;
case 0x6a5fe8:c.instructions+=8;goto B6a5fe8;
case 0x6a5feb:c.instructions+=7;goto B6a5feb;
case 0x6a5fee:c.instructions+=6;goto B6a5fee;
case 0x6a5ff2:c.instructions+=5;goto B6a5ff2;
case 0x6a5ff5:c.instructions+=4;goto B6a5ff5;
case 0x6a5ff8:c.instructions+=3;goto B6a5ff8;
case 0x6a5ffa:c.instructions+=2;goto B6a5ffa;
case 0x6a5ffd:c.instructions+=1;goto B6a5ffd;
default:missing_instruction(c.pc);}
B6a5000:L6a5000:{c.instructions+=5;NFSU2_TR(0x6a5000);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a5003:{NFSU2_TR(0x6a5003);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a5006:{NFSU2_TR(0x6a5006);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a5009:{NFSU2_TR(0x6a5009);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a500c:{NFSU2_TR(0x6a500c);
if(r1(R+518)){{goto L6a5022;}}
}
B6a500e:L6a500e:{c.instructions+=2;NFSU2_TR(0x6a500e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5012:{NFSU2_TR(0x6a5012);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5022;}}
}
B6a5014:L6a5014:{c.instructions+=6;NFSU2_TR(0x6a5014);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a5017:{NFSU2_TR(0x6a5017);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6a5019:{NFSU2_TR(0x6a5019);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a501b:{NFSU2_TR(0x6a501b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a501d:{NFSU2_TR(0x6a501d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a5020:{NFSU2_TR(0x6a5020);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6a502c;}}
}
B6a5022:L6a5022:{c.instructions+=4;NFSU2_TR(0x6a5022);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5026:{NFSU2_TR(0x6a5026);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a5027:{NFSU2_TR(0x6a5027);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a502a:{NFSU2_TR(0x6a502a);
if(r1(R+512)){TAIL_STATIC(0x6a4ffbu,6a4);}
}
B6a502c:L6a502c:{c.instructions+=2;NFSU2_TR(0x6a502c);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a502f:{NFSU2_TR(0x6a502f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5052;}}
}
B6a5031:L6a5031:{c.instructions+=8;NFSU2_TR(0x6a5031);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5032:{NFSU2_TR(0x6a5032);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5033:{NFSU2_TR(0x6a5033);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a5036:{NFSU2_TR(0x6a5036);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5038:{NFSU2_TR(0x6a5038);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a503a:{NFSU2_TR(0x6a503a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a503d:{NFSU2_TR(0x6a503d);
__builtin_memmove((R+4),(R+12),4);
}
B6a503f:{NFSU2_TR(0x6a503f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a5044ull));
TAIL_STATIC(0x699c39u,699);
}
B6a5044:L6a5044:{c.instructions+=3;NFSU2_TR(0x6a5044);
__builtin_memmove((R+4),(R+0),4);
}
B6a5046:{NFSU2_TR(0x6a5046);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a5049:{NFSU2_TR(0x6a5049);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5054;}}
}
B6a504b:L6a504b:{c.instructions+=2;NFSU2_TR(0x6a504b);
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
B6a504d:{NFSU2_TR(0x6a504d);
{goto L6a5425;}
}
B6a5052:L6a5052:{c.instructions+=1;NFSU2_TR(0x6a5052);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6a5054:L6a5054:{c.instructions+=11;NFSU2_TR(0x6a5054);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5057:{NFSU2_TR(0x6a5057);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6a5059:{NFSU2_TR(0x6a5059);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a505c:{NFSU2_TR(0x6a505c);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a505f:{NFSU2_TR(0x6a505f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5062:{NFSU2_TR(0x6a5062);
{u32 ea_=u32(r4(R+0)+r4(R+20)+u32(4294967108u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a5069:{NFSU2_TR(0x6a5069);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a506c:{NFSU2_TR(0x6a506c);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a506e:{NFSU2_TR(0x6a506e);
{u32 ea_=u32(r4(R+0)+r4(R+20)+u32(4294967140u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a5075:{NFSU2_TR(0x6a5075);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6a5077:{NFSU2_TR(0x6a5077);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5090;}}
}
B6a5079:L6a5079:{c.instructions+=6;NFSU2_TR(0x6a5079);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a507c:{NFSU2_TR(0x6a507c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a507f:{NFSU2_TR(0x6a507f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a5082:{NFSU2_TR(0x6a5082);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5085:{NFSU2_TR(0x6a5085);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a5087:{NFSU2_TR(0x6a5087);
if(r1(R+518)){{goto L6a5090;}}
}
B6a5089:L6a5089:{c.instructions+=2;NFSU2_TR(0x6a5089);
__builtin_memmove((R+28),(R+0),4);
}
B6a508b:{NFSU2_TR(0x6a508b);
TAIL_STATIC(0x6a4f52u,6a4);
}
B6a5090:L6a5090:{c.instructions+=6;NFSU2_TR(0x6a5090);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5093:{NFSU2_TR(0x6a5093);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5096:{NFSU2_TR(0x6a5096);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6a5099:{NFSU2_TR(0x6a5099);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a509c:{NFSU2_TR(0x6a509c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a509f:{NFSU2_TR(0x6a509f);
if(r1(R+512)){TAIL_STATIC(0x6a4f50u,6a4);}
}
B6a50a5:L6a50a5:{c.instructions+=4;NFSU2_TR(0x6a50a5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6a50a7:{NFSU2_TR(0x6a50a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a50aa:{NFSU2_TR(0x6a50aa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a50ad:{NFSU2_TR(0x6a50ad);
if(r1(R+518)){{goto L6a540b;}}
}
B6a50b3:L6a50b3:{c.instructions+=3;NFSU2_TR(0x6a50b3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a50b5:{NFSU2_TR(0x6a50b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a50b8:{NFSU2_TR(0x6a50b8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a5376;}}
}
B6a50be:L6a50be:{c.instructions+=6;NFSU2_TR(0x6a50be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a50c1:{NFSU2_TR(0x6a50c1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a50c4:{NFSU2_TR(0x6a50c4);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6a50c8:{NFSU2_TR(0x6a50c8);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a50cb:{NFSU2_TR(0x6a50cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a50ce:{NFSU2_TR(0x6a50ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5365;}}
}
B6a50d4:L6a50d4:{c.instructions+=10;NFSU2_TR(0x6a50d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a50d7:{NFSU2_TR(0x6a50d7);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6a50db:{NFSU2_TR(0x6a50db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a50dd:{NFSU2_TR(0x6a50dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a50e0:{NFSU2_TR(0x6a50e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a50e3:{NFSU2_TR(0x6a50e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a50e6:{NFSU2_TR(0x6a50e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a50e9:{NFSU2_TR(0x6a50e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a50ec:{NFSU2_TR(0x6a50ec);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a50f0:{NFSU2_TR(0x6a50f0);
if(r1(R+518)){{goto L6a50fc;}}
}
B6a50f2:L6a50f2:{c.instructions+=2;NFSU2_TR(0x6a50f2);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a50f6:{NFSU2_TR(0x6a50f6);
if(r1(R+518)){{goto L6a5365;}}
}
B6a50fc:L6a50fc:{c.instructions+=4;NFSU2_TR(0x6a50fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5100:{NFSU2_TR(0x6a5100);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5104:{NFSU2_TR(0x6a5104);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5108:{NFSU2_TR(0x6a5108);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a510b:L6a510b:{c.instructions+=6;NFSU2_TR(0x6a510b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a510e:{NFSU2_TR(0x6a510e);
__builtin_memmove((R+4),(R+12),4);
}
B6a5110:{NFSU2_TR(0x6a5110);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a5113:{NFSU2_TR(0x6a5113);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a5116:{NFSU2_TR(0x6a5116);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a5119:{NFSU2_TR(0x6a5119);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a511eull));
TAIL_STATIC(0x69d5ebu,69d);
}
B6a511e:L6a511e:{c.instructions+=2;NFSU2_TR(0x6a511e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a5120:{NFSU2_TR(0x6a5120);
if(r1(R+518)){{goto L6a5253;}}
}
B6a5126:L6a5126:{c.instructions+=6;NFSU2_TR(0x6a5126);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5129:{NFSU2_TR(0x6a5129);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6a512b:{NFSU2_TR(0x6a512b);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a512e:{NFSU2_TR(0x6a512e);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a5130:{NFSU2_TR(0x6a5130);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a5133:{NFSU2_TR(0x6a5133);
{goto L6a5247;}
}
B6a5138:L6a5138:{c.instructions+=8;NFSU2_TR(0x6a5138);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a513b:{NFSU2_TR(0x6a513b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a513e:{NFSU2_TR(0x6a513e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a5141:{NFSU2_TR(0x6a5141);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a5143:{NFSU2_TR(0x6a5143);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5147:{NFSU2_TR(0x6a5147);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a514a:{NFSU2_TR(0x6a514a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a514d:{NFSU2_TR(0x6a514d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5153;}}
}
B6a514f:L6a514f:{c.instructions+=1;NFSU2_TR(0x6a514f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5153:L6a5153:{c.instructions+=1;NFSU2_TR(0x6a5153);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5156:L6a5156:{c.instructions+=4;NFSU2_TR(0x6a5156);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5159:{NFSU2_TR(0x6a5159);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a515c:{NFSU2_TR(0x6a515c);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6a5161:{NFSU2_TR(0x6a5161);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a51f3;}}
}
B6a5167:L6a5167:{c.instructions+=2;NFSU2_TR(0x6a5167);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6a516b:{NFSU2_TR(0x6a516b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a516e:L6a516e:{c.instructions+=6;NFSU2_TR(0x6a516e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a5171:{NFSU2_TR(0x6a5171);
__builtin_memmove((R+4),(R+12),4);
}
B6a5173:{NFSU2_TR(0x6a5173);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a5176:{NFSU2_TR(0x6a5176);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a5179:{NFSU2_TR(0x6a5179);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a517a:{NFSU2_TR(0x6a517a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a517full));
TAIL_STATIC(0x69d5ebu,69d);
}
B6a517f:L6a517f:{c.instructions+=2;NFSU2_TR(0x6a517f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a5181:{NFSU2_TR(0x6a5181);
if(r1(R+518)){{goto L6a51de;}}
}
B6a5183:L6a5183:{c.instructions+=3;NFSU2_TR(0x6a5183);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a5186:{NFSU2_TR(0x6a5186);
__builtin_memmove((R+24),(R+28),4);
}
B6a5188:{NFSU2_TR(0x6a5188);
if(r1(R+518)){{goto L6a51de;}}
}
B6a518a:L6a518a:{c.instructions+=4;NFSU2_TR(0x6a518a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a518b:{NFSU2_TR(0x6a518b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a518e:{NFSU2_TR(0x6a518e);
__builtin_memmove((R+4),(R+12),4);
}
B6a5190:{NFSU2_TR(0x6a5190);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a5195ull));
TAIL_STATIC(0x69d655u,69d);
}
B6a5195:L6a5195:{c.instructions+=2;NFSU2_TR(0x6a5195);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a5197:{NFSU2_TR(0x6a5197);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a51b1;}}
}
B6a5199:L6a5199:{c.instructions+=2;NFSU2_TR(0x6a5199);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a519c:{NFSU2_TR(0x6a519c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a51d6;}}
}
B6a519e:L6a519e:{c.instructions+=5;NFSU2_TR(0x6a519e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a519f:{NFSU2_TR(0x6a519f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a51a0:{NFSU2_TR(0x6a51a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a51a1:{NFSU2_TR(0x6a51a1);
__builtin_memmove((R+4),(R+12),4);
}
B6a51a3:{NFSU2_TR(0x6a51a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a51a8ull));
TAIL_STATIC(0x69d6a8u,69d);
}
B6a51a8:L6a51a8:{c.instructions+=3;NFSU2_TR(0x6a51a8);
__builtin_memmove((R+24),(R+0),4);
}
B6a51aa:{NFSU2_TR(0x6a51aa);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a51ad:{NFSU2_TR(0x6a51ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a518au);}goto L6a518a;}}
}
B6a51af:L6a51af:{c.instructions+=1;NFSU2_TR(0x6a51af);
{goto L6a51de;}
}
B6a51b1:L6a51b1:{c.instructions+=5;NFSU2_TR(0x6a51b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a51b4:{NFSU2_TR(0x6a51b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a51b7:{NFSU2_TR(0x6a51b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a51ba:{NFSU2_TR(0x6a51ba);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a51be:{NFSU2_TR(0x6a51be);
if(r1(R+518)){{goto L6a51d9;}}
}
B6a51c0:L6a51c0:{c.instructions+=8;NFSU2_TR(0x6a51c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a51c3:{NFSU2_TR(0x6a51c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a51c6:{NFSU2_TR(0x6a51c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a51c9:{NFSU2_TR(0x6a51c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6a51cc:{NFSU2_TR(0x6a51cc);
__builtin_memmove((R+4),(R+0),4);
}
B6a51ce:{NFSU2_TR(0x6a51ce);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6a51d1:{NFSU2_TR(0x6a51d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a51d4:{NFSU2_TR(0x6a51d4);
{goto L6a51d9;}
}
B6a51d6:L6a51d6:{c.instructions+=1;NFSU2_TR(0x6a51d6);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B6a51d9:L6a51d9:{c.instructions+=2;NFSU2_TR(0x6a51d9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a51dc:{NFSU2_TR(0x6a51dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a51f3;}}
}
B6a51de:L6a51de:{c.instructions+=5;NFSU2_TR(0x6a51de);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a51e1:{NFSU2_TR(0x6a51e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a51e4:{NFSU2_TR(0x6a51e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a51e7:{NFSU2_TR(0x6a51e7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a51ea:{NFSU2_TR(0x6a51ea);
if(r1(R+518)){{goto L6a51f3;}}
}
B6a51ec:L6a51ec:{c.instructions+=2;NFSU2_TR(0x6a51ec);
__builtin_memmove((R+28),(R+0),4);
}
B6a51ee:{NFSU2_TR(0x6a51ee);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a516eu);}goto L6a516e;}
}
B6a51f3:L6a51f3:{c.instructions+=4;NFSU2_TR(0x6a51f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a51f6:{NFSU2_TR(0x6a51f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a51f9:{NFSU2_TR(0x6a51f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a51fc:{NFSU2_TR(0x6a51fc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a5156u);}goto L6a5156;}}
}
B6a5202:L6a5202:{c.instructions+=3;NFSU2_TR(0x6a5202);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5205:{NFSU2_TR(0x6a5205);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5208:{NFSU2_TR(0x6a5208);
if(r1(R+512)){{goto L6a5214;}}
}
B6a520a:L6a520a:{c.instructions+=1;NFSU2_TR(0x6a520a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a522f;}}
}
B6a520c:L6a520c:{c.instructions+=3;NFSU2_TR(0x6a520c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a520f:{NFSU2_TR(0x6a520f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a5212:{NFSU2_TR(0x6a5212);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a522f;}}
}
B6a5214:L6a5214:{c.instructions+=9;NFSU2_TR(0x6a5214);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a5217:{NFSU2_TR(0x6a5217);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a521a:{NFSU2_TR(0x6a521a);
{u32 ea_=u32(r4(R+20)+u32(4294967180u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a521d:{NFSU2_TR(0x6a521d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5220:{NFSU2_TR(0x6a5220);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a5223:{NFSU2_TR(0x6a5223);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5226:{NFSU2_TR(0x6a5226);
{u32 ea_=u32(r4(R+20)+u32(4294967172u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a5229:{NFSU2_TR(0x6a5229);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a522c:{NFSU2_TR(0x6a522c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a522f:L6a522f:{c.instructions+=2;NFSU2_TR(0x6a522f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5233:{NFSU2_TR(0x6a5233);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5253;}}
}
B6a5235:L6a5235:{c.instructions+=7;NFSU2_TR(0x6a5235);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a5238:{NFSU2_TR(0x6a5238);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5239:{NFSU2_TR(0x6a5239);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a523c:{NFSU2_TR(0x6a523c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a523d:{NFSU2_TR(0x6a523d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a5240:{NFSU2_TR(0x6a5240);
__builtin_memmove((R+4),(R+12),4);
}
B6a5242:{NFSU2_TR(0x6a5242);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a5247ull));
TAIL_STATIC(0x69d6a8u,69d);
}
B6a5247:L6a5247:{c.instructions+=3;NFSU2_TR(0x6a5247);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a524a:{NFSU2_TR(0x6a524a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a524d:{NFSU2_TR(0x6a524d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a5138u);}goto L6a5138;}}
}
B6a5253:L6a5253:{c.instructions+=7;NFSU2_TR(0x6a5253);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5256:{NFSU2_TR(0x6a5256);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5259:{NFSU2_TR(0x6a5259);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a525c:{NFSU2_TR(0x6a525c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a525f:{NFSU2_TR(0x6a525f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5262:{NFSU2_TR(0x6a5262);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a5264:{NFSU2_TR(0x6a5264);
if(r1(R+518)){{goto L6a526e;}}
}
B6a5266:L6a5266:{c.instructions+=2;NFSU2_TR(0x6a5266);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5269:{NFSU2_TR(0x6a5269);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a510bu);}goto L6a510b;}
}
B6a526e:L6a526e:{c.instructions+=3;NFSU2_TR(0x6a526e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5271:{NFSU2_TR(0x6a5271);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a5274:{NFSU2_TR(0x6a5274);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a504bu);}goto L6a504b;}}
}
B6a527a:L6a527a:{c.instructions+=10;NFSU2_TR(0x6a527a);
{u32 ea_=u32(r4(R+20)+u32(4294967180u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a527d:{NFSU2_TR(0x6a527d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6a527f:{NFSU2_TR(0x6a527f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5282:{NFSU2_TR(0x6a5282);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a5285:{NFSU2_TR(0x6a5285);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5289:{NFSU2_TR(0x6a5289);
{u32 ea_=u32(r4(R+0)+r4(R+20)+u32(4294967108u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a5290:{NFSU2_TR(0x6a5290);
{u32 ea_=u32(r4(R+20)+u32(4294967172u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a5293:{NFSU2_TR(0x6a5293);
{u32 ea_=u32(r4(R+0)+r4(R+20)+u32(4294967140u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a529a:{NFSU2_TR(0x6a529a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a529d:{NFSU2_TR(0x6a529d);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6a52a3:L6a52a3:{c.instructions+=6;NFSU2_TR(0x6a52a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a52a6:{NFSU2_TR(0x6a52a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a52a9:{NFSU2_TR(0x6a52a9);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6a52ad:{NFSU2_TR(0x6a52ad);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a52b0:{NFSU2_TR(0x6a52b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a52b3:{NFSU2_TR(0x6a52b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5356;}}
}
B6a52b9:L6a52b9:{c.instructions+=2;NFSU2_TR(0x6a52b9);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6a52bd:{NFSU2_TR(0x6a52bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a52bf:L6a52bf:{c.instructions+=7;NFSU2_TR(0x6a52bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a52c2:{NFSU2_TR(0x6a52c2);
__builtin_memmove((R+4),(R+12),4);
}
B6a52c4:{NFSU2_TR(0x6a52c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a52c7:{NFSU2_TR(0x6a52c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a52ca:{NFSU2_TR(0x6a52ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a52cd:{NFSU2_TR(0x6a52cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a52ce:{NFSU2_TR(0x6a52ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a52d3ull));
TAIL_STATIC(0x69d5ebu,69d);
}
B6a52d3:L6a52d3:{c.instructions+=2;NFSU2_TR(0x6a52d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a52d5:{NFSU2_TR(0x6a52d5);
if(r1(R+518)){{goto L6a5342;}}
}
B6a52d7:L6a52d7:{c.instructions+=6;NFSU2_TR(0x6a52d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a52da:{NFSU2_TR(0x6a52da);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6a52dc:{NFSU2_TR(0x6a52dc);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a52df:{NFSU2_TR(0x6a52df);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a52e1:{NFSU2_TR(0x6a52e1);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a52e4:{NFSU2_TR(0x6a52e4);
{goto L6a530c;}
}
B6a52e6:L6a52e6:{c.instructions+=4;NFSU2_TR(0x6a52e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a52e7:{NFSU2_TR(0x6a52e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a52ea:{NFSU2_TR(0x6a52ea);
__builtin_memmove((R+4),(R+12),4);
}
B6a52ec:{NFSU2_TR(0x6a52ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a52f1ull));
TAIL_STATIC(0x69d655u,69d);
}
B6a52f1:L6a52f1:{c.instructions+=2;NFSU2_TR(0x6a52f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a52f3:{NFSU2_TR(0x6a52f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5313;}}
}
B6a52f5:L6a52f5:{c.instructions+=2;NFSU2_TR(0x6a52f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a52f8:{NFSU2_TR(0x6a52f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a533a;}}
}
B6a52fa:L6a52fa:{c.instructions+=7;NFSU2_TR(0x6a52fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a52fd:{NFSU2_TR(0x6a52fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a52fe:{NFSU2_TR(0x6a52fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a5301:{NFSU2_TR(0x6a5301);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5302:{NFSU2_TR(0x6a5302);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5303:{NFSU2_TR(0x6a5303);
__builtin_memmove((R+4),(R+12),4);
}
B6a5305:{NFSU2_TR(0x6a5305);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a530aull));
TAIL_STATIC(0x69d6a8u,69d);
}
B6a530a:L6a530a:{c.instructions+=1;NFSU2_TR(0x6a530a);
__builtin_memmove((R+24),(R+0),4);
}
B6a530c:L6a530c:{c.instructions+=2;NFSU2_TR(0x6a530c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a530f:{NFSU2_TR(0x6a530f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a52e6u);}goto L6a52e6;}}
}
B6a5311:L6a5311:{c.instructions+=1;NFSU2_TR(0x6a5311);
{goto L6a5342;}
}
B6a5313:L6a5313:{c.instructions+=10;NFSU2_TR(0x6a5313);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5316:{NFSU2_TR(0x6a5316);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a5319:{NFSU2_TR(0x6a5319);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a531c:{NFSU2_TR(0x6a531c);
{u32 ea_=u32(r4(R+0)+r4(R+20)+u32(4294967108u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a5323:{NFSU2_TR(0x6a5323);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6a5325:{NFSU2_TR(0x6a5325);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a5328:{NFSU2_TR(0x6a5328);
{u32 ea_=u32(r4(R+0)+r4(R+20)+u32(4294967140u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a532f:{NFSU2_TR(0x6a532f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5332:{NFSU2_TR(0x6a5332);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6a5338:{NFSU2_TR(0x6a5338);
{goto L6a533d;}
}
B6a533a:L6a533a:{c.instructions+=1;NFSU2_TR(0x6a533a);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B6a533d:L6a533d:{c.instructions+=2;NFSU2_TR(0x6a533d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a5340:{NFSU2_TR(0x6a5340);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5356;}}
}
B6a5342:L6a5342:{c.instructions+=6;NFSU2_TR(0x6a5342);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5345:{NFSU2_TR(0x6a5345);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5348:{NFSU2_TR(0x6a5348);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a534b:{NFSU2_TR(0x6a534b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a534e:{NFSU2_TR(0x6a534e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a5350:{NFSU2_TR(0x6a5350);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a52bfu);}goto L6a52bf;}}
}
B6a5356:L6a5356:{c.instructions+=4;NFSU2_TR(0x6a5356);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5359:{NFSU2_TR(0x6a5359);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a535c:{NFSU2_TR(0x6a535c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a535f:{NFSU2_TR(0x6a535f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a52a3u);}goto L6a52a3;}}
}
B6a5365:L6a5365:{c.instructions+=4;NFSU2_TR(0x6a5365);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5368:{NFSU2_TR(0x6a5368);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a536b:{NFSU2_TR(0x6a536b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a536e:{NFSU2_TR(0x6a536e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a50beu);}goto L6a50be;}}
}
B6a5374:L6a5374:{c.instructions+=1;NFSU2_TR(0x6a5374);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6a5376:L6a5376:{c.instructions+=6;NFSU2_TR(0x6a5376);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5379:{NFSU2_TR(0x6a5379);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a537c:{NFSU2_TR(0x6a537c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a537f:{NFSU2_TR(0x6a537f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5382:{NFSU2_TR(0x6a5382);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5385:{NFSU2_TR(0x6a5385);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a540b;}}
}
B6a538b:L6a538b:{c.instructions+=7;NFSU2_TR(0x6a538b);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6a538f:{NFSU2_TR(0x6a538f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5392:{NFSU2_TR(0x6a5392);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a5395:{NFSU2_TR(0x6a5395);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a5398:{NFSU2_TR(0x6a5398);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5399:{NFSU2_TR(0x6a5399);
__builtin_memmove((R+4),(R+12),4);
}
B6a539b:{NFSU2_TR(0x6a539b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a53a0ull));
TAIL_STATIC(0x69d655u,69d);
}
B6a53a0:L6a53a0:{c.instructions+=4;NFSU2_TR(0x6a53a0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a53a2:{NFSU2_TR(0x6a53a2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a53a3:{NFSU2_TR(0x6a53a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a53a5:{NFSU2_TR(0x6a53a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a53aa;}}
}
B6a53a7:L6a53a7:{c.instructions+=1;NFSU2_TR(0x6a53a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a53aa:L6a53aa:{c.instructions+=6;NFSU2_TR(0x6a53aa);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+20)+u32(4294967108u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a53b1:{NFSU2_TR(0x6a53b1);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a53b7:{NFSU2_TR(0x6a53b7);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a53b9:{NFSU2_TR(0x6a53b9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a53bb:{NFSU2_TR(0x6a53bb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a53be:{NFSU2_TR(0x6a53be);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6a53c3;}}
}
B6a53c0:L6a53c0:{c.instructions+=1;NFSU2_TR(0x6a53c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a53c3:L6a53c3:{c.instructions+=6;NFSU2_TR(0x6a53c3);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+20)+u32(4294967140u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a53ca:{NFSU2_TR(0x6a53ca);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a53d0:{NFSU2_TR(0x6a53d0);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a53d2:{NFSU2_TR(0x6a53d2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a53d4:{NFSU2_TR(0x6a53d4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a53d7:{NFSU2_TR(0x6a53d7);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6a53dc;}}
}
B6a53d9:L6a53d9:{c.instructions+=1;NFSU2_TR(0x6a53d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a53dc:L6a53dc:{c.instructions+=5;NFSU2_TR(0x6a53dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a53df:{NFSU2_TR(0x6a53df);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a53e2:{NFSU2_TR(0x6a53e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a53e5:{NFSU2_TR(0x6a53e5);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a53e9:{NFSU2_TR(0x6a53e9);
if(r1(R+518)){{goto L6a53f4;}}
}
B6a53eb:L6a53eb:{c.instructions+=2;NFSU2_TR(0x6a53eb);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a53ef:{NFSU2_TR(0x6a53ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a53f4;}}
}
B6a53f1:L6a53f1:{c.instructions+=1;NFSU2_TR(0x6a53f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a53f4:L6a53f4:{c.instructions+=3;NFSU2_TR(0x6a53f4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6a53f5:{NFSU2_TR(0x6a53f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6a53f8:{NFSU2_TR(0x6a53f8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a538bu);}goto L6a538b;}}
}
B6a53fa:L6a53fa:{c.instructions+=3;NFSU2_TR(0x6a53fa);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a53fc:{NFSU2_TR(0x6a53fc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a53ff:{NFSU2_TR(0x6a53ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a542e;}}
}
B6a5401:L6a5401:{c.instructions+=2;NFSU2_TR(0x6a5401);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5404:{NFSU2_TR(0x6a5404);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a542e;}}
}
B6a5406:L6a5406:{c.instructions+=2;NFSU2_TR(0x6a5406);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5409:{NFSU2_TR(0x6a5409);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a542c;}}
}
B6a540b:L6a540b:{c.instructions+=5;NFSU2_TR(0x6a540b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a540e:{NFSU2_TR(0x6a540e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a5411:{NFSU2_TR(0x6a5411);
__builtin_memmove((R+0),(R+4),4);
}
B6a5413:{NFSU2_TR(0x6a5413);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6a5416:{NFSU2_TR(0x6a5416);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a5419:L6a5419:{c.instructions+=1;NFSU2_TR(0x6a5419);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6a541b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a5419u);}goto L6a5419;}
}
B6a541b:L6a541b:{c.instructions+=2;NFSU2_TR(0x6a541b);
__builtin_memmove((R+4),(R+0),4);
}
B6a541d:{NFSU2_TR(0x6a541d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6a5420:L6a5420:{c.instructions+=1;NFSU2_TR(0x6a5420);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6a5422;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a5420u);}goto L6a5420;}
}
B6a5422:L6a5422:{c.instructions+=2;NFSU2_TR(0x6a5422);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a5424:{NFSU2_TR(0x6a5424);
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
B6a5425:L6a5425:{c.instructions+=5;NFSU2_TR(0x6a5425);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a5426:{NFSU2_TR(0x6a5426);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a5427:{NFSU2_TR(0x6a5427);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6a5428:{NFSU2_TR(0x6a5428);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6a5429:{NFSU2_TR(0x6a5429);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6a542c:L6a542c:{c.instructions+=1;NFSU2_TR(0x6a542c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a542e:L6a542e:{c.instructions+=2;NFSU2_TR(0x6a542e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5431:{NFSU2_TR(0x6a5431);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a504bu);}goto L6a504b;}}
}
B6a5437:L6a5437:{c.instructions+=7;NFSU2_TR(0x6a5437);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a543a:{NFSU2_TR(0x6a543a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1dull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a543d:{NFSU2_TR(0x6a543d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6a5440:{NFSU2_TR(0x6a5440);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5443:{NFSU2_TR(0x6a5443);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5446:{NFSU2_TR(0x6a5446);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5449:{NFSU2_TR(0x6a5449);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a544c:L6a544c:{c.instructions+=7;NFSU2_TR(0x6a544c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a544f:{NFSU2_TR(0x6a544f);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6a5453:{NFSU2_TR(0x6a5453);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5456:{NFSU2_TR(0x6a5456);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a5459:{NFSU2_TR(0x6a5459);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a545b:{NFSU2_TR(0x6a545b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a545e:{NFSU2_TR(0x6a545e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5520;}}
}
B6a5464:L6a5464:{c.instructions+=2;NFSU2_TR(0x6a5464);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a5468:{NFSU2_TR(0x6a5468);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5520;}}
}
B6a546e:L6a546e:{c.instructions+=5;NFSU2_TR(0x6a546e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a5471:{NFSU2_TR(0x6a5471);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5474:{NFSU2_TR(0x6a5474);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a5477:{NFSU2_TR(0x6a5477);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a547b:{NFSU2_TR(0x6a547b);
if(r1(R+518)){{goto L6a54b8;}}
}
B6a547d:L6a547d:{c.instructions+=2;NFSU2_TR(0x6a547d);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5481:{NFSU2_TR(0x6a5481);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a54b8;}}
}
B6a5483:L6a5483:{c.instructions+=2;NFSU2_TR(0x6a5483);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5486:{NFSU2_TR(0x6a5486);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a5522;}}
}
B6a548c:L6a548c:{c.instructions+=5;NFSU2_TR(0x6a548c);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6a5490:{NFSU2_TR(0x6a5490);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5493:{NFSU2_TR(0x6a5493);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a5496:{NFSU2_TR(0x6a5496);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5499:{NFSU2_TR(0x6a5499);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a54b0;}}
}
B6a549b:L6a549b:{c.instructions+=2;NFSU2_TR(0x6a549b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a549f:{NFSU2_TR(0x6a549f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a54b0;}}
}
B6a54a1:L6a54a1:{c.instructions+=6;NFSU2_TR(0x6a54a1);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a54a4:{NFSU2_TR(0x6a54a4);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a54a7:{NFSU2_TR(0x6a54a7);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a54a9:{NFSU2_TR(0x6a54a9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a54ab:{NFSU2_TR(0x6a54ab);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a54ae:{NFSU2_TR(0x6a54ae);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6a5522;}}
}
B6a54b0:L6a54b0:{c.instructions+=3;NFSU2_TR(0x6a54b0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a54b1:{NFSU2_TR(0x6a54b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a54b4:{NFSU2_TR(0x6a54b4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a548cu);}goto L6a548c;}}
}
B6a54b6:L6a54b6:{c.instructions+=1;NFSU2_TR(0x6a54b6);
{goto L6a5522;}
}
B6a54b8:L6a54b8:{c.instructions+=2;NFSU2_TR(0x6a54b8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a54bb:{NFSU2_TR(0x6a54bb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a5522;}}
}
B6a54bd:L6a54bd:{c.instructions+=10;NFSU2_TR(0x6a54bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a54c0:{NFSU2_TR(0x6a54c0);
{u32 ea_=u32((r4(R+4)*8u)+r4(R+20)+u32(4294967108u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a54c7:{NFSU2_TR(0x6a54c7);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6a54cb:{NFSU2_TR(0x6a54cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a54ce:{NFSU2_TR(0x6a54ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a54d1:{NFSU2_TR(0x6a54d1);
{u32 ea_=u32(r4(R+0)+r4(R+20)+u32(4294967108u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a54d8:{NFSU2_TR(0x6a54d8);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a54da:{NFSU2_TR(0x6a54da);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a54dc:{NFSU2_TR(0x6a54dc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a54df:{NFSU2_TR(0x6a54df);
if(r1(R+514)){{goto L6a5518;}}
}
B6a54e1:L6a54e1:{c.instructions+=7;NFSU2_TR(0x6a54e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a54e4:{NFSU2_TR(0x6a54e4);
{u32 ea_=u32((r4(R+4)*8u)+r4(R+20)+u32(4294967140u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a54eb:{NFSU2_TR(0x6a54eb);
{u32 ea_=u32(r4(R+0)+r4(R+20)+u32(4294967140u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a54f2:{NFSU2_TR(0x6a54f2);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a54f4:{NFSU2_TR(0x6a54f4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a54f6:{NFSU2_TR(0x6a54f6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a54f9:{NFSU2_TR(0x6a54f9);
if(r1(R+514)){{goto L6a5518;}}
}
B6a54fb:L6a54fb:{c.instructions+=2;NFSU2_TR(0x6a54fb);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a54fe:{NFSU2_TR(0x6a54fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5518;}}
}
B6a5500:L6a5500:{c.instructions+=3;NFSU2_TR(0x6a5500);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5503:{NFSU2_TR(0x6a5503);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5506:{NFSU2_TR(0x6a5506);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5518;}}
}
B6a5508:L6a5508:{c.instructions+=3;NFSU2_TR(0x6a5508);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a550b:{NFSU2_TR(0x6a550b);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a550e:{NFSU2_TR(0x6a550e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5518;}}
}
B6a5510:L6a5510:{c.instructions+=3;NFSU2_TR(0x6a5510);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5513:{NFSU2_TR(0x6a5513);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5516:{NFSU2_TR(0x6a5516);
if(r1(R+518)){{goto L6a5522;}}
}
B6a5518:L6a5518:{c.instructions+=3;NFSU2_TR(0x6a5518);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a5519:{NFSU2_TR(0x6a5519);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a551c:{NFSU2_TR(0x6a551c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a54bdu);}goto L6a54bd;}}
}
B6a551e:L6a551e:{c.instructions+=1;NFSU2_TR(0x6a551e);
{goto L6a5522;}
}
B6a5520:L6a5520:{c.instructions+=1;NFSU2_TR(0x6a5520);
__builtin_memmove((R+4),(R+24),4);
}
B6a5522:L6a5522:{c.instructions+=4;NFSU2_TR(0x6a5522);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5525:{NFSU2_TR(0x6a5525);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a5527:{NFSU2_TR(0x6a5527);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff34ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6a552e:{NFSU2_TR(0x6a552e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5533;}}
}
B6a5530:L6a5530:{c.instructions+=1;NFSU2_TR(0x6a5530);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5533:L6a5533:{c.instructions+=5;NFSU2_TR(0x6a5533);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5537:{NFSU2_TR(0x6a5537);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a5538:{NFSU2_TR(0x6a5538);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a553b:{NFSU2_TR(0x6a553b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a553e:{NFSU2_TR(0x6a553e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a544cu);}goto L6a544c;}}
}
B6a5544:L6a5544:{c.instructions+=5;NFSU2_TR(0x6a5544);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5548:{NFSU2_TR(0x6a5548);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6a554a:{NFSU2_TR(0x6a554a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5551:{NFSU2_TR(0x6a5551);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5554:{NFSU2_TR(0x6a5554);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5557:L6a5557:{c.instructions+=2;NFSU2_TR(0x6a5557);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff34ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+24))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6a555e:{NFSU2_TR(0x6a555e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a55ff;}}
}
B6a5564:L6a5564:{c.instructions+=6;NFSU2_TR(0x6a5564);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6a5568:{NFSU2_TR(0x6a5568);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a556b:{NFSU2_TR(0x6a556b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a556e:{NFSU2_TR(0x6a556e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a5574:{NFSU2_TR(0x6a5574);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5577:{NFSU2_TR(0x6a5577);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a55ff;}}
}
B6a557d:L6a557d:{c.instructions+=3;NFSU2_TR(0x6a557d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5580:{NFSU2_TR(0x6a5580);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5583:{NFSU2_TR(0x6a5583);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a5585:L6a5585:{c.instructions+=2;NFSU2_TR(0x6a5585);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff34ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+28))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6a558c:{NFSU2_TR(0x6a558c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a55d7;}}
}
B6a558e:L6a558e:{c.instructions+=5;NFSU2_TR(0x6a558e);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B6a5592:{NFSU2_TR(0x6a5592);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5595:{NFSU2_TR(0x6a5595);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a5598:{NFSU2_TR(0x6a5598);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a559b:{NFSU2_TR(0x6a559b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a55d4;}}
}
B6a559d:L6a559d:{c.instructions+=3;NFSU2_TR(0x6a559d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a55a0:{NFSU2_TR(0x6a55a0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a55a3:{NFSU2_TR(0x6a55a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a55d4;}}
}
B6a55a5:L6a55a5:{c.instructions+=6;NFSU2_TR(0x6a55a5);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+20)+u32(4294967108u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a55ac:{NFSU2_TR(0x6a55ac);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a55b2:{NFSU2_TR(0x6a55b2);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a55b4:{NFSU2_TR(0x6a55b4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a55b6:{NFSU2_TR(0x6a55b6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a55b9:{NFSU2_TR(0x6a55b9);
if(r1(R+514)){{goto L6a55d4;}}
}
B6a55bb:L6a55bb:{c.instructions+=6;NFSU2_TR(0x6a55bb);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+20)+u32(4294967140u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a55c2:{NFSU2_TR(0x6a55c2);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a55c8:{NFSU2_TR(0x6a55c8);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a55ca:{NFSU2_TR(0x6a55ca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a55cc:{NFSU2_TR(0x6a55cc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a55cf:{NFSU2_TR(0x6a55cf);
if(r1(R+514)){{goto L6a55d4;}}
}
B6a55d1:L6a55d1:{c.instructions+=1;NFSU2_TR(0x6a55d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a55d4:L6a55d4:{c.instructions+=1;NFSU2_TR(0x6a55d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a55d7:L6a55d7:{c.instructions+=3;NFSU2_TR(0x6a55d7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6a55d8:{NFSU2_TR(0x6a55d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6a55db:{NFSU2_TR(0x6a55db);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a5585u);}goto L6a5585;}}
}
B6a55dd:L6a55dd:{c.instructions+=7;NFSU2_TR(0x6a55dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a55e0:{NFSU2_TR(0x6a55e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a55e3:{NFSU2_TR(0x6a55e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a55e6:{NFSU2_TR(0x6a55e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a55e9:{NFSU2_TR(0x6a55e9);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6a55eb:{NFSU2_TR(0x6a55eb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a55ee:{NFSU2_TR(0x6a55ee);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6a55ff;}}
}
B6a55f0:L6a55f0:{c.instructions+=2;NFSU2_TR(0x6a55f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a55f3:{NFSU2_TR(0x6a55f3);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a55ff;}}
}
B6a55f5:L6a55f5:{c.instructions+=3;NFSU2_TR(0x6a55f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a55f9:{NFSU2_TR(0x6a55f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a55fc:{NFSU2_TR(0x6a55fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a55ff:L6a55ff:{c.instructions+=4;NFSU2_TR(0x6a55ff);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6a5600:{NFSU2_TR(0x6a5600);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6a5603:{NFSU2_TR(0x6a5603);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5606:{NFSU2_TR(0x6a5606);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a5557u);}goto L6a5557;}}
}
B6a560c:L6a560c:{c.instructions+=2;NFSU2_TR(0x6a560c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5610:{NFSU2_TR(0x6a5610);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a561c;}}
}
B6a5612:L6a5612:{c.instructions+=2;NFSU2_TR(0x6a5612);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a5616:{NFSU2_TR(0x6a5616);
if(r1(R+518)){{goto L6a56d2;}}
}
B6a561c:L6a561c:{c.instructions+=5;NFSU2_TR(0x6a561c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a561f:{NFSU2_TR(0x6a561f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a5621:{NFSU2_TR(0x6a5621);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0000000ull))));
}
B6a5626:{NFSU2_TR(0x6a5626);
w1(R+512,u8((r4(R+0))<(u32(0x10000000ull))));
}
B6a562b:{NFSU2_TR(0x6a562b);
if(r1(R+512)){{goto L6a56d2;}}
}
B6a5631:L6a5631:{c.instructions+=2;NFSU2_TR(0x6a5631);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x40000000ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x40000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a5636:{NFSU2_TR(0x6a5636);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6a56d2;}}
}
B6a563c:L6a563c:{c.instructions+=1;NFSU2_TR(0x6a563c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5640:L6a5640:{c.instructions+=2;NFSU2_TR(0x6a5640);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5644:{NFSU2_TR(0x6a5644);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a56d2;}}
}
B6a564a:L6a564a:{c.instructions+=10;NFSU2_TR(0x6a564a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a564d:{NFSU2_TR(0x6a564d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a5650:{NFSU2_TR(0x6a5650);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a5653:{NFSU2_TR(0x6a5653);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6a5656:{NFSU2_TR(0x6a5656);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6a565a:{NFSU2_TR(0x6a565a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a565d:{NFSU2_TR(0x6a565d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5660:{NFSU2_TR(0x6a5660);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a5663:{NFSU2_TR(0x6a5663);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a5667:{NFSU2_TR(0x6a5667);
if(r1(R+518)){{goto L6a566f;}}
}
B6a5669:L6a5669:{c.instructions+=2;NFSU2_TR(0x6a5669);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a566d:{NFSU2_TR(0x6a566d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a56c3;}}
}
B6a566f:L6a566f:{c.instructions+=7;NFSU2_TR(0x6a566f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a5672:{NFSU2_TR(0x6a5672);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a5675:{NFSU2_TR(0x6a5675);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a5678:{NFSU2_TR(0x6a5678);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a567b:{NFSU2_TR(0x6a567b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a567e:{NFSU2_TR(0x6a567e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5681:{NFSU2_TR(0x6a5681);
if(r1(R+518)){{goto L6a56c3;}}
}
B6a5683:L6a5683:{c.instructions+=2;NFSU2_TR(0x6a5683);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5687:{NFSU2_TR(0x6a5687);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a568b:L6a568b:{c.instructions+=5;NFSU2_TR(0x6a568b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a568e:{NFSU2_TR(0x6a568e);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B6a5692:{NFSU2_TR(0x6a5692);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a5695:{NFSU2_TR(0x6a5695);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5698:{NFSU2_TR(0x6a5698);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a56ad;}}
}
B6a569a:L6a569a:{c.instructions+=3;NFSU2_TR(0x6a569a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a569d:{NFSU2_TR(0x6a569d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a56a0:{NFSU2_TR(0x6a56a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a56ad;}}
}
B6a56a2:L6a56a2:{c.instructions+=3;NFSU2_TR(0x6a56a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a56a5:{NFSU2_TR(0x6a56a5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a56a8:{NFSU2_TR(0x6a56a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a56ad;}}
}
B6a56aa:L6a56aa:{c.instructions+=1;NFSU2_TR(0x6a56aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a56ad:L6a56ad:{c.instructions+=4;NFSU2_TR(0x6a56ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a56b0:{NFSU2_TR(0x6a56b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a56b3:{NFSU2_TR(0x6a56b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6a56b6:{NFSU2_TR(0x6a56b6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a568bu);}goto L6a568b;}}
}
B6a56b8:L6a56b8:{c.instructions+=4;NFSU2_TR(0x6a56b8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a56ba:{NFSU2_TR(0x6a56ba);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a56bb:{NFSU2_TR(0x6a56bb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a56be:{NFSU2_TR(0x6a56be);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a56c3;}}
}
B6a56c0:L6a56c0:{c.instructions+=1;NFSU2_TR(0x6a56c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a56c3:L6a56c3:{c.instructions+=4;NFSU2_TR(0x6a56c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a56c6:{NFSU2_TR(0x6a56c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a56c9:{NFSU2_TR(0x6a56c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a56cc:{NFSU2_TR(0x6a56cc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a5640u);}goto L6a5640;}}
}
B6a56d2:L6a56d2:{c.instructions+=6;NFSU2_TR(0x6a56d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a56d5:{NFSU2_TR(0x6a56d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a56d7:{NFSU2_TR(0x6a56d7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6a56dc:{NFSU2_TR(0x6a56dc);
w4(R+8,u32(0x10000000ull));
}
B6a56e1:{NFSU2_TR(0x6a56e1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a56e3:{NFSU2_TR(0x6a56e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5705;}}
}
B6a56e5:L6a56e5:{c.instructions+=2;NFSU2_TR(0x6a56e5);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a56e9:{NFSU2_TR(0x6a56e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5705;}}
}
B6a56eb:L6a56eb:{c.instructions+=9;NFSU2_TR(0x6a56eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a56ee:{NFSU2_TR(0x6a56ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6a56f0:{NFSU2_TR(0x6a56f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a56f3:{NFSU2_TR(0x6a56f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a56f6:{NFSU2_TR(0x6a56f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a56f9:{NFSU2_TR(0x6a56f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a56fc:{NFSU2_TR(0x6a56fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a56ff:{NFSU2_TR(0x6a56ff);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a5703:{NFSU2_TR(0x6a5703);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a573d;}}
}
B6a5705:L6a5705:{c.instructions+=2;NFSU2_TR(0x6a5705);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a570a:{NFSU2_TR(0x6a570a);
if(r1(R+518)){{goto L6a573d;}}
}
B6a570c:L6a570c:{c.instructions+=2;NFSU2_TR(0x6a570c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a570e:{NFSU2_TR(0x6a570e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a573d;}}
}
B6a5710:L6a5710:{c.instructions+=3;NFSU2_TR(0x6a5710);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a5712:{NFSU2_TR(0x6a5712);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5715:{NFSU2_TR(0x6a5715);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a573d;}}
}
B6a5717:L6a5717:{c.instructions+=2;NFSU2_TR(0x6a5717);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a571a:{NFSU2_TR(0x6a571a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a573d;}}
}
B6a571c:L6a571c:{c.instructions+=2;NFSU2_TR(0x6a571c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a571f:{NFSU2_TR(0x6a571f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a573d;}}
}
B6a5721:L6a5721:{c.instructions+=5;NFSU2_TR(0x6a5721);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5724:{NFSU2_TR(0x6a5724);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a5727:{NFSU2_TR(0x6a5727);
__builtin_memmove((R+0),(R+4),4);
}
B6a5729:{NFSU2_TR(0x6a5729);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6a572c:{NFSU2_TR(0x6a572c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a572f:L6a572f:{c.instructions+=1;NFSU2_TR(0x6a572f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6a5731;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a572fu);}goto L6a572f;}
}
B6a5731:L6a5731:{c.instructions+=2;NFSU2_TR(0x6a5731);
__builtin_memmove((R+4),(R+0),4);
}
B6a5733:{NFSU2_TR(0x6a5733);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6a5736:L6a5736:{c.instructions+=1;NFSU2_TR(0x6a5736);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6a5738;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a5736u);}goto L6a5736;}
}
B6a5738:L6a5738:{c.instructions+=1;NFSU2_TR(0x6a5738);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a504bu);}goto L6a504b;}
}
B6a573d:L6a573d:{c.instructions+=4;NFSU2_TR(0x6a573d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5741:{NFSU2_TR(0x6a5741);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5745:{NFSU2_TR(0x6a5745);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5748:{NFSU2_TR(0x6a5748);
if(r1(R+518)){{goto L6a5753;}}
}
B6a574a:L6a574a:{c.instructions+=4;NFSU2_TR(0x6a574a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a574c:{NFSU2_TR(0x6a574c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a574f:{NFSU2_TR(0x6a574f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a5751:{NFSU2_TR(0x6a5751);
{goto L6a5763;}
}
B6a5753:L6a5753:{c.instructions+=5;NFSU2_TR(0x6a5753);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5756:{NFSU2_TR(0x6a5756);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6a575a:{NFSU2_TR(0x6a575a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a575d:{NFSU2_TR(0x6a575d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a5760:{NFSU2_TR(0x6a5760);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a5763:L6a5763:{c.instructions+=13;NFSU2_TR(0x6a5763);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5766:{NFSU2_TR(0x6a5766);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a5768:{NFSU2_TR(0x6a5768);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a576b:{NFSU2_TR(0x6a576b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a576e:{NFSU2_TR(0x6a576e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5771:{NFSU2_TR(0x6a5771);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5774:{NFSU2_TR(0x6a5774);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5777:{NFSU2_TR(0x6a5777);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a577a:{NFSU2_TR(0x6a577a);
__builtin_memmove((R+24),(R+4),4);
}
B6a577c:{NFSU2_TR(0x6a577c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6a577f:{NFSU2_TR(0x6a577f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5782:{NFSU2_TR(0x6a5782);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a5784:{NFSU2_TR(0x6a5784);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a5787:L6a5787:{c.instructions+=1;NFSU2_TR(0x6a5787);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6a5789;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a5787u);}goto L6a5787;}
}
B6a5789:L6a5789:{c.instructions+=2;NFSU2_TR(0x6a5789);
__builtin_memmove((R+4),(R+24),4);
}
B6a578b:{NFSU2_TR(0x6a578b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6a578e:L6a578e:{c.instructions+=1;NFSU2_TR(0x6a578e);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6a5790;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a578eu);}goto L6a578e;}
}
B6a5790:L6a5790:{c.instructions+=2;NFSU2_TR(0x6a5790);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5793:{NFSU2_TR(0x6a5793);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a5795:L6a5795:{c.instructions+=2;NFSU2_TR(0x6a5795);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff34ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+4))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6a579c:{NFSU2_TR(0x6a579c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a57e4;}}
}
B6a579e:L6a579e:{c.instructions+=6;NFSU2_TR(0x6a579e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a57a1:{NFSU2_TR(0x6a57a1);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6a57a5:{NFSU2_TR(0x6a57a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a57a8:{NFSU2_TR(0x6a57a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a57ae:{NFSU2_TR(0x6a57ae);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a57b1:{NFSU2_TR(0x6a57b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a57ec;}}
}
B6a57b3:L6a57b3:{c.instructions+=2;NFSU2_TR(0x6a57b3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a57b6:{NFSU2_TR(0x6a57b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a57ec;}}
}
B6a57b8:L6a57b8:{c.instructions+=6;NFSU2_TR(0x6a57b8);
{u32 ea_=u32((r4(R+4)*8u)+r4(R+20)+u32(4294967108u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a57bf:{NFSU2_TR(0x6a57bf);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a57c5:{NFSU2_TR(0x6a57c5);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a57c7:{NFSU2_TR(0x6a57c7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a57c9:{NFSU2_TR(0x6a57c9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a57cc:{NFSU2_TR(0x6a57cc);
if(r1(R+514)){{goto L6a57ec;}}
}
B6a57ce:L6a57ce:{c.instructions+=6;NFSU2_TR(0x6a57ce);
{u32 ea_=u32((r4(R+4)*8u)+r4(R+20)+u32(4294967140u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a57d5:{NFSU2_TR(0x6a57d5);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a57db:{NFSU2_TR(0x6a57db);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a57dd:{NFSU2_TR(0x6a57dd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a57df:{NFSU2_TR(0x6a57df);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a57e2:{NFSU2_TR(0x6a57e2);
if(r1(R+514)){{goto L6a57ec;}}
}
B6a57e4:L6a57e4:{c.instructions+=1;NFSU2_TR(0x6a57e4);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x1ull));
s4(u32(r4(U+8)),r4(U+12));
}
B6a57ec:L6a57ec:{c.instructions+=3;NFSU2_TR(0x6a57ec);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a57ed:{NFSU2_TR(0x6a57ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a57f0:{NFSU2_TR(0x6a57f0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a5795u);}goto L6a5795;}}
}
B6a57f2:L6a57f2:{c.instructions+=2;NFSU2_TR(0x6a57f2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a57f6:{NFSU2_TR(0x6a57f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5940;}}
}
B6a57fc:L6a57fc:{c.instructions+=2;NFSU2_TR(0x6a57fc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a57fe:{NFSU2_TR(0x6a57fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5801:L6a5801:{c.instructions+=3;NFSU2_TR(0x6a5801);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a5804:{NFSU2_TR(0x6a5804);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6a5809:{NFSU2_TR(0x6a5809);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5930;}}
}
B6a580f:L6a580f:{c.instructions+=6;NFSU2_TR(0x6a580f);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B6a5813:{NFSU2_TR(0x6a5813);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5816:{NFSU2_TR(0x6a5816);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a5819:{NFSU2_TR(0x6a5819);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a581f:{NFSU2_TR(0x6a581f);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5822:{NFSU2_TR(0x6a5822);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5930;}}
}
B6a5828:L6a5828:{c.instructions+=4;NFSU2_TR(0x6a5828);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a582a:{NFSU2_TR(0x6a582a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a582d:{NFSU2_TR(0x6a582d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5830:{NFSU2_TR(0x6a5830);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5833:L6a5833:{c.instructions+=4;NFSU2_TR(0x6a5833);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5836:{NFSU2_TR(0x6a5836);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a5839:{NFSU2_TR(0x6a5839);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6a583e:{NFSU2_TR(0x6a583e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5888;}}
}
B6a5840:L6a5840:{c.instructions+=5;NFSU2_TR(0x6a5840);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B6a5844:{NFSU2_TR(0x6a5844);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5847:{NFSU2_TR(0x6a5847);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5848:{NFSU2_TR(0x6a5848);
__builtin_memmove((R+4),(R+12),4);
}
B6a584a:{NFSU2_TR(0x6a584a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a584full));
TAIL_STATIC(0x69d655u,69d);
}
B6a584f:L6a584f:{c.instructions+=2;NFSU2_TR(0x6a584f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a5851:{NFSU2_TR(0x6a5851);
if(r1(R+518)){{goto L6a5888;}}
}
B6a5853:L6a5853:{c.instructions+=9;NFSU2_TR(0x6a5853);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5856:{NFSU2_TR(0x6a5856);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5859:{NFSU2_TR(0x6a5859);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a585c:{NFSU2_TR(0x6a585c);
{u32 ea_=u32(r4(R+4)+r4(R+20)+u32(4294967108u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a5863:{NFSU2_TR(0x6a5863);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a5869:{NFSU2_TR(0x6a5869);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a586b:{NFSU2_TR(0x6a586b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a586d:{NFSU2_TR(0x6a586d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a5870:{NFSU2_TR(0x6a5870);
if(r1(R+514)){{goto L6a5893;}}
}
B6a5872:L6a5872:{c.instructions+=6;NFSU2_TR(0x6a5872);
{u32 ea_=u32(r4(R+4)+r4(R+20)+u32(4294967140u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a5879:{NFSU2_TR(0x6a5879);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a587f:{NFSU2_TR(0x6a587f);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a5881:{NFSU2_TR(0x6a5881);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a5883:{NFSU2_TR(0x6a5883);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a5886:{NFSU2_TR(0x6a5886);
if(r1(R+514)){{goto L6a5893;}}
}
B6a5888:L6a5888:{c.instructions+=4;NFSU2_TR(0x6a5888);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a588b:{NFSU2_TR(0x6a588b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a588e:{NFSU2_TR(0x6a588e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a5891:{NFSU2_TR(0x6a5891);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a5833u);}goto L6a5833;}}
}
B6a5893:L6a5893:{c.instructions+=3;NFSU2_TR(0x6a5893);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5896:{NFSU2_TR(0x6a5896);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6a5899:{NFSU2_TR(0x6a5899);
if(r1(R+512)){{goto L6a5930;}}
}
B6a589f:L6a589f:{c.instructions+=11;NFSU2_TR(0x6a589f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a58a2:{NFSU2_TR(0x6a58a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a58a5:{NFSU2_TR(0x6a58a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a58a8:{NFSU2_TR(0x6a58a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6a58ab:{NFSU2_TR(0x6a58ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a58ae:{NFSU2_TR(0x6a58ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6a58b1:{NFSU2_TR(0x6a58b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a58b4:{NFSU2_TR(0x6a58b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B6a58b6:{NFSU2_TR(0x6a58b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6a58b9:{NFSU2_TR(0x6a58b9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a58bc:{NFSU2_TR(0x6a58bc);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6a5930;}}
}
B6a58be:L6a58be:{c.instructions+=1;NFSU2_TR(0x6a58be);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a58c0:L6a58c0:{c.instructions+=3;NFSU2_TR(0x6a58c0);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6a58c4:{NFSU2_TR(0x6a58c4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a58c7:{NFSU2_TR(0x6a58c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a58e9;}}
}
B6a58c9:L6a58c9:{c.instructions+=6;NFSU2_TR(0x6a58c9);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6a58cd:{NFSU2_TR(0x6a58cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a58d0:{NFSU2_TR(0x6a58d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a58d3:{NFSU2_TR(0x6a58d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a58d9:{NFSU2_TR(0x6a58d9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a58dc:{NFSU2_TR(0x6a58dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a58e9;}}
}
B6a58de:L6a58de:{c.instructions+=2;NFSU2_TR(0x6a58de);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a58e1:{NFSU2_TR(0x6a58e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a58e9;}}
}
B6a58e3:L6a58e3:{c.instructions+=1;NFSU2_TR(0x6a58e3);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6a58e9:L6a58e9:{c.instructions+=3;NFSU2_TR(0x6a58e9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6a58ea:{NFSU2_TR(0x6a58ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6a58ed:{NFSU2_TR(0x6a58ed);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a58c0u);}goto L6a58c0;}}
}
B6a58ef:L6a58ef:{c.instructions+=3;NFSU2_TR(0x6a58ef);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a58f1:{NFSU2_TR(0x6a58f1);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a58f4:{NFSU2_TR(0x6a58f4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a5920;}}
}
B6a58f6:L6a58f6:{c.instructions+=5;NFSU2_TR(0x6a58f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a58f9:{NFSU2_TR(0x6a58f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a58fc:{NFSU2_TR(0x6a58fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a5902:{NFSU2_TR(0x6a5902);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5905:{NFSU2_TR(0x6a5905);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a591a;}}
}
B6a5907:L6a5907:{c.instructions+=2;NFSU2_TR(0x6a5907);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a590a:{NFSU2_TR(0x6a590a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a591a;}}
}
B6a590c:L6a590c:{c.instructions+=5;NFSU2_TR(0x6a590c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a590f:{NFSU2_TR(0x6a590f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5912:{NFSU2_TR(0x6a5912);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a5915:{NFSU2_TR(0x6a5915);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6a5917:{NFSU2_TR(0x6a5917);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a591a:L6a591a:{c.instructions+=3;NFSU2_TR(0x6a591a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6a591b:{NFSU2_TR(0x6a591b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6a591e:{NFSU2_TR(0x6a591e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a58f6u);}goto L6a58f6;}}
}
B6a5920:L6a5920:{c.instructions+=6;NFSU2_TR(0x6a5920);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5923:{NFSU2_TR(0x6a5923);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a5926:{NFSU2_TR(0x6a5926);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a5928:{NFSU2_TR(0x6a5928);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a592b:{NFSU2_TR(0x6a592b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+8))));
s4(u32(r4(R+4)),r4(U+0));
}
B6a592d:{NFSU2_TR(0x6a592d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6a5930:L6a5930:{c.instructions+=5;NFSU2_TR(0x6a5930);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5933:{NFSU2_TR(0x6a5933);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a5934:{NFSU2_TR(0x6a5934);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a5937:{NFSU2_TR(0x6a5937);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a593a:{NFSU2_TR(0x6a593a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a5801u);}goto L6a5801;}}
}
B6a5940:L6a5940:{c.instructions+=2;NFSU2_TR(0x6a5940);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x6ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a5944:{NFSU2_TR(0x6a5944);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5a30;}}
}
B6a594a:L6a594a:{c.instructions+=2;NFSU2_TR(0x6a594a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a594c:{NFSU2_TR(0x6a594c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a594f:L6a594f:{c.instructions+=3;NFSU2_TR(0x6a594f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a5952:{NFSU2_TR(0x6a5952);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6a5957:{NFSU2_TR(0x6a5957);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5a20;}}
}
B6a595d:L6a595d:{c.instructions+=9;NFSU2_TR(0x6a595d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5960:{NFSU2_TR(0x6a5960);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6a5964:{NFSU2_TR(0x6a5964);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6a5966:{NFSU2_TR(0x6a5966);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5969:{NFSU2_TR(0x6a5969);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a596c:{NFSU2_TR(0x6a596c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a596f:{NFSU2_TR(0x6a596f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a5972:{NFSU2_TR(0x6a5972);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a5976:{NFSU2_TR(0x6a5976);
if(r1(R+518)){{goto L6a5982;}}
}
B6a5978:L6a5978:{c.instructions+=2;NFSU2_TR(0x6a5978);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a597c:{NFSU2_TR(0x6a597c);
if(r1(R+518)){{goto L6a5a20;}}
}
B6a5982:L6a5982:{c.instructions+=2;NFSU2_TR(0x6a5982);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5986:{NFSU2_TR(0x6a5986);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a598a:L6a598a:{c.instructions+=4;NFSU2_TR(0x6a598a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a598d:{NFSU2_TR(0x6a598d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a5990:{NFSU2_TR(0x6a5990);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6a5995:{NFSU2_TR(0x6a5995);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a59aa;}}
}
B6a5997:L6a5997:{c.instructions+=4;NFSU2_TR(0x6a5997);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B6a599b:{NFSU2_TR(0x6a599b);
__builtin_memmove((R+4),(R+12),4);
}
B6a599d:{NFSU2_TR(0x6a599d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a599e:{NFSU2_TR(0x6a599e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a59a3ull));
TAIL_STATIC(0x69d655u,69d);
}
B6a59a3:L6a59a3:{c.instructions+=2;NFSU2_TR(0x6a59a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a59a5:{NFSU2_TR(0x6a59a5);
if(r1(R+518)){{goto L6a59aa;}}
}
B6a59a7:L6a59a7:{c.instructions+=1;NFSU2_TR(0x6a59a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a59aa:L6a59aa:{c.instructions+=4;NFSU2_TR(0x6a59aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a59ad:{NFSU2_TR(0x6a59ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a59b0:{NFSU2_TR(0x6a59b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a59b3:{NFSU2_TR(0x6a59b3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a598au);}goto L6a598a;}}
}
B6a59b5:L6a59b5:{c.instructions+=1;NFSU2_TR(0x6a59b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a59b9:L6a59b9:{c.instructions+=2;NFSU2_TR(0x6a59b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
}
B6a59bd:{NFSU2_TR(0x6a59bd);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a5a20;}}
}
B6a59bf:L6a59bf:{c.instructions+=4;NFSU2_TR(0x6a59bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a59c2:{NFSU2_TR(0x6a59c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a59c5:{NFSU2_TR(0x6a59c5);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6a59ca:{NFSU2_TR(0x6a59ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5a15;}}
}
B6a59cc:L6a59cc:{c.instructions+=9;NFSU2_TR(0x6a59cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a59cf:{NFSU2_TR(0x6a59cf);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6a59d3:{NFSU2_TR(0x6a59d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a59d5:{NFSU2_TR(0x6a59d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a59d8:{NFSU2_TR(0x6a59d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a59db:{NFSU2_TR(0x6a59db);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a59de:{NFSU2_TR(0x6a59de);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a59e1:{NFSU2_TR(0x6a59e1);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a59e5:{NFSU2_TR(0x6a59e5);
if(r1(R+518)){{goto L6a5a15;}}
}
B6a59e7:L6a59e7:{c.instructions+=2;NFSU2_TR(0x6a59e7);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a59eb:{NFSU2_TR(0x6a59eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5a15;}}
}
B6a59ed:L6a59ed:{c.instructions+=13;NFSU2_TR(0x6a59ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a59ef:{NFSU2_TR(0x6a59ef);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a59f2:{NFSU2_TR(0x6a59f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a59f4:{NFSU2_TR(0x6a59f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a59f7:{NFSU2_TR(0x6a59f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a59fa:{NFSU2_TR(0x6a59fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a59fd:{NFSU2_TR(0x6a59fd);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff44ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6a5a04:{NFSU2_TR(0x6a5a04);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B6a5a06:{NFSU2_TR(0x6a5a06);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff64ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6a5a0d:{NFSU2_TR(0x6a5a0d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B6a5a0f:{NFSU2_TR(0x6a5a0f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a5a11:{NFSU2_TR(0x6a5a11);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a5a13:{NFSU2_TR(0x6a5a13);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a5a15:L6a5a15:{c.instructions+=4;NFSU2_TR(0x6a5a15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5a18:{NFSU2_TR(0x6a5a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5a1b:{NFSU2_TR(0x6a5a1b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a5a1e:{NFSU2_TR(0x6a5a1e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a59b9u);}goto L6a59b9;}}
}
B6a5a20:L6a5a20:{c.instructions+=5;NFSU2_TR(0x6a5a20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5a23:{NFSU2_TR(0x6a5a23);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a5a24:{NFSU2_TR(0x6a5a24);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a5a27:{NFSU2_TR(0x6a5a27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5a2a:{NFSU2_TR(0x6a5a2a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a594fu);}goto L6a594f;}}
}
B6a5a30:L6a5a30:{c.instructions+=1;NFSU2_TR(0x6a5a30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5a34:L6a5a34:{c.instructions+=5;NFSU2_TR(0x6a5a34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5a37:{NFSU2_TR(0x6a5a37);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a5a3a:{NFSU2_TR(0x6a5a3a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6a5a3c:{NFSU2_TR(0x6a5a3c);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+24))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6a5a40:{NFSU2_TR(0x6a5a40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5eb3;}}
}
B6a5a46:L6a5a46:{c.instructions+=9;NFSU2_TR(0x6a5a46);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6a5a4a:{NFSU2_TR(0x6a5a4a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a5a4c:{NFSU2_TR(0x6a5a4c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a5a4d:{NFSU2_TR(0x6a5a4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5a50:{NFSU2_TR(0x6a5a50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5a53:{NFSU2_TR(0x6a5a53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5a56:{NFSU2_TR(0x6a5a56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5a59:{NFSU2_TR(0x6a5a59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5a5c:{NFSU2_TR(0x6a5a5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5a5f:L6a5a5f:{c.instructions+=2;NFSU2_TR(0x6a5a5f);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6a5a64:{NFSU2_TR(0x6a5a64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5adf;}}
}
B6a5a66:L6a5a66:{c.instructions+=4;NFSU2_TR(0x6a5a66);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B6a5a6a:{NFSU2_TR(0x6a5a6a);
__builtin_memmove((R+4),(R+12),4);
}
B6a5a6c:{NFSU2_TR(0x6a5a6c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5a6d:{NFSU2_TR(0x6a5a6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a5a72ull));
TAIL_STATIC(0x69d655u,69d);
}
B6a5a72:L6a5a72:{c.instructions+=2;NFSU2_TR(0x6a5a72);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a5a74:{NFSU2_TR(0x6a5a74);
if(r1(R+518)){{goto L6a5adf;}}
}
B6a5a76:L6a5a76:{c.instructions+=8;NFSU2_TR(0x6a5a76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5a79:{NFSU2_TR(0x6a5a79);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff44ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6a5a80:{NFSU2_TR(0x6a5a80);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a5a82:{NFSU2_TR(0x6a5a82);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a5a88:{NFSU2_TR(0x6a5a88);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a5a8a:{NFSU2_TR(0x6a5a8a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a5a8c:{NFSU2_TR(0x6a5a8c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a5a8f:{NFSU2_TR(0x6a5a8f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6a5a98;}}
}
B6a5a91:L6a5a91:{c.instructions+=1;NFSU2_TR(0x6a5a91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5a98:L6a5a98:{c.instructions+=6;NFSU2_TR(0x6a5a98);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a5a9a:{NFSU2_TR(0x6a5a9a);
{u32 ea_=u32(u32(8077672u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a5aa0:{NFSU2_TR(0x6a5aa0);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a5aa2:{NFSU2_TR(0x6a5aa2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a5aa4:{NFSU2_TR(0x6a5aa4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a5aa7:{NFSU2_TR(0x6a5aa7);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6a5aad;}}
}
B6a5aa9:L6a5aa9:{c.instructions+=1;NFSU2_TR(0x6a5aa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5aad:L6a5aad:{c.instructions+=6;NFSU2_TR(0x6a5aad);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+20)+u32(4294967140u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a5ab4:{NFSU2_TR(0x6a5ab4);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a5aba:{NFSU2_TR(0x6a5aba);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a5abc:{NFSU2_TR(0x6a5abc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a5abe:{NFSU2_TR(0x6a5abe);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a5ac1:{NFSU2_TR(0x6a5ac1);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6a5aca;}}
}
B6a5ac3:L6a5ac3:{c.instructions+=1;NFSU2_TR(0x6a5ac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5aca:L6a5aca:{c.instructions+=6;NFSU2_TR(0x6a5aca);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a5acc:{NFSU2_TR(0x6a5acc);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a5ad2:{NFSU2_TR(0x6a5ad2);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a5ad4:{NFSU2_TR(0x6a5ad4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a5ad6:{NFSU2_TR(0x6a5ad6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a5ad9:{NFSU2_TR(0x6a5ad9);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6a5adf;}}
}
B6a5adb:L6a5adb:{c.instructions+=1;NFSU2_TR(0x6a5adb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5adf:L6a5adf:{c.instructions+=3;NFSU2_TR(0x6a5adf);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6a5ae0:{NFSU2_TR(0x6a5ae0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6a5ae3:{NFSU2_TR(0x6a5ae3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a5a5fu);}goto L6a5a5f;}}
}
B6a5ae9:L6a5ae9:{c.instructions+=3;NFSU2_TR(0x6a5ae9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a5aeb:{NFSU2_TR(0x6a5aeb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5aee:{NFSU2_TR(0x6a5aee);
if(r1(R+518)){{goto L6a5af6;}}
}
B6a5af0:L6a5af0:{c.instructions+=2;NFSU2_TR(0x6a5af0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5af3:{NFSU2_TR(0x6a5af3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5af6:L6a5af6:{c.instructions+=2;NFSU2_TR(0x6a5af6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5af9:{NFSU2_TR(0x6a5af9);
if(r1(R+518)){{goto L6a5b54;}}
}
B6a5afb:L6a5afb:{c.instructions+=6;NFSU2_TR(0x6a5afb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5afe:{NFSU2_TR(0x6a5afe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5b01:{NFSU2_TR(0x6a5b01);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5b03:{NFSU2_TR(0x6a5b03);
__builtin_memmove((R+4),(R+12),4);
}
B6a5b05:{NFSU2_TR(0x6a5b05);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5b07:{NFSU2_TR(0x6a5b07);
if(r1(R+518)){{goto L6a5b15;}}
}
B6a5b09:L6a5b09:{c.instructions+=3;NFSU2_TR(0x6a5b09);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6a5b0e:{NFSU2_TR(0x6a5b0e);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B6a5b13:{NFSU2_TR(0x6a5b13);
{goto L6a5b1f;}
}
B6a5b15:L6a5b15:{c.instructions+=2;NFSU2_TR(0x6a5b15);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6a5b1a:{NFSU2_TR(0x6a5b1a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20500000ull))));
}
B6a5b1f:L6a5b1f:{c.instructions+=2;NFSU2_TR(0x6a5b1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5b20:{NFSU2_TR(0x6a5b20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a5b25ull));
TAIL_STATIC(0x699c99u,699);
}
B6a5b25:L6a5b25:{c.instructions+=4;NFSU2_TR(0x6a5b25);
__builtin_memmove((R+24),(R+0),4);
}
B6a5b27:{NFSU2_TR(0x6a5b27);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a5b2a:{NFSU2_TR(0x6a5b2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5b2d:{NFSU2_TR(0x6a5b2d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a504bu);}goto L6a504b;}}
}
B6a5b33:L6a5b33:{c.instructions+=6;NFSU2_TR(0x6a5b33);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5b36:{NFSU2_TR(0x6a5b36);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a5b39:{NFSU2_TR(0x6a5b39);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a5b3c:{NFSU2_TR(0x6a5b3c);
__builtin_memmove((R+4),(R+28),4);
}
B6a5b3e:{NFSU2_TR(0x6a5b3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5b41:{NFSU2_TR(0x6a5b41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a5b46ull));
TAIL_STATIC(0x698eb3u,698);
}
B6a5b46:L6a5b46:{c.instructions+=2;NFSU2_TR(0x6a5b46);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5b4a:{NFSU2_TR(0x6a5b4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5b59;}}
}
B6a5b4c:L6a5b4c:{c.instructions+=3;NFSU2_TR(0x6a5b4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5b4f:{NFSU2_TR(0x6a5b4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5b52:{NFSU2_TR(0x6a5b52);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a5b54:L6a5b54:{c.instructions+=2;NFSU2_TR(0x6a5b54);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5b57:{NFSU2_TR(0x6a5b57);
if(r1(R+518)){{goto L6a5b9f;}}
}
B6a5b59:L6a5b59:{c.instructions+=8;NFSU2_TR(0x6a5b59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5b5c:{NFSU2_TR(0x6a5b5c);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5b5e:{NFSU2_TR(0x6a5b5e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6a5b63:{NFSU2_TR(0x6a5b63);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5b65:{NFSU2_TR(0x6a5b65);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20400000ull))));
}
B6a5b6a:{NFSU2_TR(0x6a5b6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5b6b:{NFSU2_TR(0x6a5b6b);
__builtin_memmove((R+4),(R+12),4);
}
B6a5b6d:{NFSU2_TR(0x6a5b6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a5b72ull));
TAIL_STATIC(0x699c99u,699);
}
B6a5b72:L6a5b72:{c.instructions+=4;NFSU2_TR(0x6a5b72);
__builtin_memmove((R+24),(R+0),4);
}
B6a5b74:{NFSU2_TR(0x6a5b74);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a5b77:{NFSU2_TR(0x6a5b77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5b7a:{NFSU2_TR(0x6a5b7a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a504bu);}goto L6a504b;}}
}
B6a5b80:L6a5b80:{c.instructions+=6;NFSU2_TR(0x6a5b80);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5b83:{NFSU2_TR(0x6a5b83);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a5b86:{NFSU2_TR(0x6a5b86);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a5b89:{NFSU2_TR(0x6a5b89);
__builtin_memmove((R+4),(R+28),4);
}
B6a5b8b:{NFSU2_TR(0x6a5b8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5b8e:{NFSU2_TR(0x6a5b8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a5b93ull));
TAIL_STATIC(0x698eb3u,698);
}
B6a5b93:L6a5b93:{c.instructions+=2;NFSU2_TR(0x6a5b93);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5b97:{NFSU2_TR(0x6a5b97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5be9;}}
}
B6a5b99:L6a5b99:{c.instructions+=2;NFSU2_TR(0x6a5b99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5b9c:{NFSU2_TR(0x6a5b9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5b9f:L6a5b9f:{c.instructions+=2;NFSU2_TR(0x6a5b9f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5ba3:{NFSU2_TR(0x6a5ba3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5be9;}}
}
B6a5ba5:L6a5ba5:{c.instructions+=2;NFSU2_TR(0x6a5ba5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5ba9:{NFSU2_TR(0x6a5ba9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5be9;}}
}
B6a5bab:L6a5bab:{c.instructions+=8;NFSU2_TR(0x6a5bab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5bae:{NFSU2_TR(0x6a5bae);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5bb0:{NFSU2_TR(0x6a5bb0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6a5bb5:{NFSU2_TR(0x6a5bb5);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5bb7:{NFSU2_TR(0x6a5bb7);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B6a5bbc:{NFSU2_TR(0x6a5bbc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5bbd:{NFSU2_TR(0x6a5bbd);
__builtin_memmove((R+4),(R+12),4);
}
B6a5bbf:{NFSU2_TR(0x6a5bbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a5bc4ull));
TAIL_STATIC(0x699c99u,699);
}
B6a5bc4:L6a5bc4:{c.instructions+=4;NFSU2_TR(0x6a5bc4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a5bc7:{NFSU2_TR(0x6a5bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5bca:{NFSU2_TR(0x6a5bca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5bcd:{NFSU2_TR(0x6a5bcd);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a504bu);}goto L6a504b;}}
}
B6a5bd3:L6a5bd3:{c.instructions+=7;NFSU2_TR(0x6a5bd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5bd6:{NFSU2_TR(0x6a5bd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a5bd9:{NFSU2_TR(0x6a5bd9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a5bdc:{NFSU2_TR(0x6a5bdc);
__builtin_memmove((R+4),(R+0),4);
}
B6a5bde:{NFSU2_TR(0x6a5bde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5be1:{NFSU2_TR(0x6a5be1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5be4:{NFSU2_TR(0x6a5be4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a5be9ull));
TAIL_STATIC(0x698eb3u,698);
}
B6a5be9:L6a5be9:{c.instructions+=9;NFSU2_TR(0x6a5be9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5bec:{NFSU2_TR(0x6a5bec);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a5bef:{NFSU2_TR(0x6a5bef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5bf2:{NFSU2_TR(0x6a5bf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5bf5:{NFSU2_TR(0x6a5bf5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6a5bf7:{NFSU2_TR(0x6a5bf7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a5bfa:{NFSU2_TR(0x6a5bfa);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B6a5bfc:{NFSU2_TR(0x6a5bfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5bff:{NFSU2_TR(0x6a5bff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5c02:L6a5c02:{c.instructions+=6;NFSU2_TR(0x6a5c02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5c05:{NFSU2_TR(0x6a5c05);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a5c08:{NFSU2_TR(0x6a5c08);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6a5c0c:{NFSU2_TR(0x6a5c0c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a5c0f:{NFSU2_TR(0x6a5c0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5c12:{NFSU2_TR(0x6a5c12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5ea4;}}
}
B6a5c18:L6a5c18:{c.instructions+=7;NFSU2_TR(0x6a5c18);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6a5c1c:{NFSU2_TR(0x6a5c1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6a5c1e:{NFSU2_TR(0x6a5c1e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5c1f:{NFSU2_TR(0x6a5c1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a5c22:{NFSU2_TR(0x6a5c22);
__builtin_memmove((R+4),(R+12),4);
}
B6a5c24:{NFSU2_TR(0x6a5c24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5c27:{NFSU2_TR(0x6a5c27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a5c2cull));
TAIL_STATIC(0x69d655u,69d);
}
B6a5c2c:L6a5c2c:{c.instructions+=2;NFSU2_TR(0x6a5c2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a5c2e:{NFSU2_TR(0x6a5c2e);
if(r1(R+518)){{goto L6a5ea4;}}
}
B6a5c34:L6a5c34:{c.instructions+=3;NFSU2_TR(0x6a5c34);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a5c36:{NFSU2_TR(0x6a5c36);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5c39:{NFSU2_TR(0x6a5c39);
if(r1(R+518)){{goto L6a5c58;}}
}
B6a5c3b:L6a5c3b:{c.instructions+=10;NFSU2_TR(0x6a5c3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5c3e:{NFSU2_TR(0x6a5c3e);
{u32 ea_=u32((r4(R+4)*8u)+r4(R+20)+u32(4294967140u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a5c45:{NFSU2_TR(0x6a5c45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5c46:{NFSU2_TR(0x6a5c46);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5c47:{NFSU2_TR(0x6a5c47);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a5c4a:{NFSU2_TR(0x6a5c4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5c4b:{NFSU2_TR(0x6a5c4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5c4c:{NFSU2_TR(0x6a5c4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a5c4f:{NFSU2_TR(0x6a5c4f);
__builtin_memmove((R+4),(R+12),4);
}
B6a5c51:{NFSU2_TR(0x6a5c51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a5c56ull));
TAIL_STATIC(0x699c39u,699);
}
B6a5c56:L6a5c56:{c.instructions+=1;NFSU2_TR(0x6a5c56);
{goto L6a5c5a;}
}
B6a5c58:L6a5c58:{c.instructions+=1;NFSU2_TR(0x6a5c58);
__builtin_memmove((R+0),(R+28),4);
}
B6a5c5a:L6a5c5a:{c.instructions+=2;NFSU2_TR(0x6a5c5a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a5c5d:{NFSU2_TR(0x6a5c5d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a504bu);}goto L6a504b;}}
}
B6a5c63:L6a5c63:{c.instructions+=9;NFSU2_TR(0x6a5c63);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5c66:{NFSU2_TR(0x6a5c66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a5c69:{NFSU2_TR(0x6a5c69);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a5c6c:{NFSU2_TR(0x6a5c6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a5c6f:{NFSU2_TR(0x6a5c6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a5c72:{NFSU2_TR(0x6a5c72);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a5c74:{NFSU2_TR(0x6a5c74);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5c77:{NFSU2_TR(0x6a5c77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5c7a:{NFSU2_TR(0x6a5c7a);
if(r1(R+518)){{goto L6a5c7f;}}
}
B6a5c7c:L6a5c7c:{c.instructions+=1;NFSU2_TR(0x6a5c7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5c7f:L6a5c7f:{c.instructions+=2;NFSU2_TR(0x6a5c7f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5c82:{NFSU2_TR(0x6a5c82);
if(r1(R+518)){{goto L6a5d61;}}
}
B6a5c88:L6a5c88:{c.instructions+=2;NFSU2_TR(0x6a5c88);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5c8b:{NFSU2_TR(0x6a5c8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5cc0;}}
}
B6a5c8d:L6a5c8d:{c.instructions+=10;NFSU2_TR(0x6a5c8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5c90:{NFSU2_TR(0x6a5c90);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+20)+u32(4294967108u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a5c97:{NFSU2_TR(0x6a5c97);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5c98:{NFSU2_TR(0x6a5c98);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5c99:{NFSU2_TR(0x6a5c99);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a5c9c:{NFSU2_TR(0x6a5c9c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5c9e:{NFSU2_TR(0x6a5c9e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5ca0:{NFSU2_TR(0x6a5ca0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a5ca3:{NFSU2_TR(0x6a5ca3);
__builtin_memmove((R+4),(R+12),4);
}
B6a5ca5:{NFSU2_TR(0x6a5ca5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a5caaull));
TAIL_STATIC(0x699c39u,699);
}
B6a5caa:L6a5caa:{c.instructions+=6;NFSU2_TR(0x6a5caa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5cad:{NFSU2_TR(0x6a5cad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a5cb0:{NFSU2_TR(0x6a5cb0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a5cb3:{NFSU2_TR(0x6a5cb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5cb6:{NFSU2_TR(0x6a5cb6);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6a5cba:{NFSU2_TR(0x6a5cba);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a504bu);}goto L6a504b;}}
}
B6a5cc0:L6a5cc0:{c.instructions+=2;NFSU2_TR(0x6a5cc0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5cc4:{NFSU2_TR(0x6a5cc4);
if(r1(R+518)){{goto L6a5de1;}}
}
B6a5cca:L6a5cca:{c.instructions+=3;NFSU2_TR(0x6a5cca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a5ccd:{NFSU2_TR(0x6a5ccd);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a5cd0:{NFSU2_TR(0x6a5cd0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5cdf;}}
}
B6a5cd2:L6a5cd2:{c.instructions+=5;NFSU2_TR(0x6a5cd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5cd5:{NFSU2_TR(0x6a5cd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a5cd7:{NFSU2_TR(0x6a5cd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a5cda:{NFSU2_TR(0x6a5cda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5cdd:{NFSU2_TR(0x6a5cdd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a5cdf:L6a5cdf:{c.instructions+=15;NFSU2_TR(0x6a5cdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5ce2:{NFSU2_TR(0x6a5ce2);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a5ce4:{NFSU2_TR(0x6a5ce4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6a5ce7:{NFSU2_TR(0x6a5ce7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a5ce9:{NFSU2_TR(0x6a5ce9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5cea:{NFSU2_TR(0x6a5cea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5ceb:{NFSU2_TR(0x6a5ceb);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a5cee:{NFSU2_TR(0x6a5cee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5cef:{NFSU2_TR(0x6a5cef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a5cf2:{NFSU2_TR(0x6a5cf2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6a5cf4:{NFSU2_TR(0x6a5cf4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5cf5:{NFSU2_TR(0x6a5cf5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a5cfb:{NFSU2_TR(0x6a5cfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5cfe:{NFSU2_TR(0x6a5cfe);
__builtin_memmove((R+4),(R+12),4);
}
B6a5d00:{NFSU2_TR(0x6a5d00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a5d05ull));
TAIL_STATIC(0x699c39u,699);
}
B6a5d05:L6a5d05:{c.instructions+=3;NFSU2_TR(0x6a5d05);
__builtin_memmove((R+28),(R+0),4);
}
B6a5d07:{NFSU2_TR(0x6a5d07);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a5d0a:{NFSU2_TR(0x6a5d0a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a504bu);}goto L6a504b;}}
}
B6a5d10:L6a5d10:{c.instructions+=3;NFSU2_TR(0x6a5d10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5d13:{NFSU2_TR(0x6a5d13);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a5d16:{NFSU2_TR(0x6a5d16);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a5d2a;}}
}
B6a5d18:L6a5d18:{c.instructions+=5;NFSU2_TR(0x6a5d18);
u8 U[4];
w4(U+0,u32(0x7bae40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5d1d:{NFSU2_TR(0x6a5d1d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5d1f:{NFSU2_TR(0x6a5d1f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5d21:{NFSU2_TR(0x6a5d21);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5d22:{NFSU2_TR(0x6a5d22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a5d27ull));
TAIL_STATIC(0x69e936u,69e);
}
B6a5d27:L6a5d27:{c.instructions+=1;NFSU2_TR(0x6a5d27);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6a5d2a:L6a5d2a:{c.instructions+=18;NFSU2_TR(0x6a5d2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5d2d:{NFSU2_TR(0x6a5d2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a5d30:{NFSU2_TR(0x6a5d30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5d33:{NFSU2_TR(0x6a5d33);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5d36:{NFSU2_TR(0x6a5d36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5d39:{NFSU2_TR(0x6a5d39);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5d3c:{NFSU2_TR(0x6a5d3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5d3f:{NFSU2_TR(0x6a5d3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a5d41:{NFSU2_TR(0x6a5d41);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xe000000ull))));
}
B6a5d47:{NFSU2_TR(0x6a5d47);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a5d49:{NFSU2_TR(0x6a5d49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5d4c:{NFSU2_TR(0x6a5d4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5d4f:{NFSU2_TR(0x6a5d4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5d52:{NFSU2_TR(0x6a5d52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5d55:{NFSU2_TR(0x6a5d55);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a5d58:{NFSU2_TR(0x6a5d58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5d5b:{NFSU2_TR(0x6a5d5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5d5e:{NFSU2_TR(0x6a5d5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a5d61:L6a5d61:{c.instructions+=3;NFSU2_TR(0x6a5d61);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a5d63:{NFSU2_TR(0x6a5d63);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5d66:{NFSU2_TR(0x6a5d66);
if(r1(R+518)){{goto L6a5de1;}}
}
B6a5d68:L6a5d68:{c.instructions+=2;NFSU2_TR(0x6a5d68);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5d6b:{NFSU2_TR(0x6a5d6b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a5da2;}}
}
B6a5d6d:L6a5d6d:{c.instructions+=1;NFSU2_TR(0x6a5d6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a5d70:L6a5d70:{c.instructions+=4;NFSU2_TR(0x6a5d70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a5d72:{NFSU2_TR(0x6a5d72);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a5d75:{NFSU2_TR(0x6a5d75);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5d78:{NFSU2_TR(0x6a5d78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5d96;}}
}
B6a5d7a:L6a5d7a:{c.instructions+=2;NFSU2_TR(0x6a5d7a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5d7e:{NFSU2_TR(0x6a5d7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5d96;}}
}
B6a5d80:L6a5d80:{c.instructions+=7;NFSU2_TR(0x6a5d80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a5d83:{NFSU2_TR(0x6a5d83);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+20)+u32(4294967140u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a5d8a:{NFSU2_TR(0x6a5d8a);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a5d8d:{NFSU2_TR(0x6a5d8d);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a5d8f:{NFSU2_TR(0x6a5d8f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a5d91:{NFSU2_TR(0x6a5d91);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a5d94:{NFSU2_TR(0x6a5d94);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6a5d9f;}}
}
B6a5d96:L6a5d96:{c.instructions+=4;NFSU2_TR(0x6a5d96);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a5d97:{NFSU2_TR(0x6a5d97);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6a5d9a:{NFSU2_TR(0x6a5d9a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a5d9d:{NFSU2_TR(0x6a5d9d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a5d70u);}goto L6a5d70;}}
}
B6a5d9f:L6a5d9f:{c.instructions+=1;NFSU2_TR(0x6a5d9f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5da2:L6a5da2:{c.instructions+=1;NFSU2_TR(0x6a5da2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a5dd5;}}
}
B6a5da4:L6a5da4:{c.instructions+=10;NFSU2_TR(0x6a5da4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5da7:{NFSU2_TR(0x6a5da7);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+20)+u32(4294967140u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a5dae:{NFSU2_TR(0x6a5dae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5daf:{NFSU2_TR(0x6a5daf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5db0:{NFSU2_TR(0x6a5db0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a5db3:{NFSU2_TR(0x6a5db3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5db5:{NFSU2_TR(0x6a5db5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5db7:{NFSU2_TR(0x6a5db7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a5dba:{NFSU2_TR(0x6a5dba);
__builtin_memmove((R+4),(R+12),4);
}
B6a5dbc:{NFSU2_TR(0x6a5dbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a5dc1ull));
TAIL_STATIC(0x699c39u,699);
}
B6a5dc1:L6a5dc1:{c.instructions+=3;NFSU2_TR(0x6a5dc1);
__builtin_memmove((R+4),(R+0),4);
}
B6a5dc3:{NFSU2_TR(0x6a5dc3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a5dc6:{NFSU2_TR(0x6a5dc6);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a504bu);}goto L6a504b;}}
}
B6a5dcc:L6a5dcc:{c.instructions+=3;NFSU2_TR(0x6a5dcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5dcf:{NFSU2_TR(0x6a5dcf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a5dd2:{NFSU2_TR(0x6a5dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5dd5:L6a5dd5:{c.instructions+=4;NFSU2_TR(0x6a5dd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5dd8:{NFSU2_TR(0x6a5dd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5ddb:{NFSU2_TR(0x6a5ddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a5dde:{NFSU2_TR(0x6a5dde);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a5de1:L6a5de1:{c.instructions+=16;NFSU2_TR(0x6a5de1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a5de4:{NFSU2_TR(0x6a5de4);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a5de6:{NFSU2_TR(0x6a5de6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5de9:{NFSU2_TR(0x6a5de9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6a5dec:{NFSU2_TR(0x6a5dec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a5dee:{NFSU2_TR(0x6a5dee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5def:{NFSU2_TR(0x6a5def);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5df0:{NFSU2_TR(0x6a5df0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a5df3:{NFSU2_TR(0x6a5df3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5df4:{NFSU2_TR(0x6a5df4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a5df7:{NFSU2_TR(0x6a5df7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6a5df9:{NFSU2_TR(0x6a5df9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5dfa:{NFSU2_TR(0x6a5dfa);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a5e00:{NFSU2_TR(0x6a5e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5e03:{NFSU2_TR(0x6a5e03);
__builtin_memmove((R+4),(R+12),4);
}
B6a5e05:{NFSU2_TR(0x6a5e05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a5e0aull));
TAIL_STATIC(0x699c39u,699);
}
B6a5e0a:L6a5e0a:{c.instructions+=3;NFSU2_TR(0x6a5e0a);
__builtin_memmove((R+28),(R+0),4);
}
B6a5e0c:{NFSU2_TR(0x6a5e0c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a5e0f:{NFSU2_TR(0x6a5e0f);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a504bu);}goto L6a504b;}}
}
B6a5e15:L6a5e15:{c.instructions+=3;NFSU2_TR(0x6a5e15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5e18:{NFSU2_TR(0x6a5e18);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a5e1b:{NFSU2_TR(0x6a5e1b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a5e2f;}}
}
B6a5e1d:L6a5e1d:{c.instructions+=5;NFSU2_TR(0x6a5e1d);
u8 U[4];
w4(U+0,u32(0x7bae40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5e22:{NFSU2_TR(0x6a5e22);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5e24:{NFSU2_TR(0x6a5e24);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5e26:{NFSU2_TR(0x6a5e26);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5e27:{NFSU2_TR(0x6a5e27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a5e2cull));
TAIL_STATIC(0x69e936u,69e);
}
B6a5e2c:L6a5e2c:{c.instructions+=1;NFSU2_TR(0x6a5e2c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6a5e2f:L6a5e2f:{c.instructions+=40;NFSU2_TR(0x6a5e2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5e32:{NFSU2_TR(0x6a5e32);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a5e35:{NFSU2_TR(0x6a5e35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5e38:{NFSU2_TR(0x6a5e38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a5e3b:{NFSU2_TR(0x6a5e3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5e3e:{NFSU2_TR(0x6a5e3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5e41:{NFSU2_TR(0x6a5e41);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5e44:{NFSU2_TR(0x6a5e44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5e47:{NFSU2_TR(0x6a5e47);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6a5e49:{NFSU2_TR(0x6a5e49);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a5e4c:{NFSU2_TR(0x6a5e4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5e4f:{NFSU2_TR(0x6a5e4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a5e51:{NFSU2_TR(0x6a5e51);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a5e54:{NFSU2_TR(0x6a5e54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a5e56:{NFSU2_TR(0x6a5e56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a5e58:{NFSU2_TR(0x6a5e58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5e5b:{NFSU2_TR(0x6a5e5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5e5e:{NFSU2_TR(0x6a5e5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5e61:{NFSU2_TR(0x6a5e61);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5e64:{NFSU2_TR(0x6a5e64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5e67:{NFSU2_TR(0x6a5e67);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a5e6a:{NFSU2_TR(0x6a5e6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a5e6c:{NFSU2_TR(0x6a5e6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5e6f:{NFSU2_TR(0x6a5e6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a5e72:{NFSU2_TR(0x6a5e72);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a5e75:{NFSU2_TR(0x6a5e75);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a5e78:{NFSU2_TR(0x6a5e78);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5e7b:{NFSU2_TR(0x6a5e7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a5e7d:{NFSU2_TR(0x6a5e7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5e80:{NFSU2_TR(0x6a5e80);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a5e83:{NFSU2_TR(0x6a5e83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5e86:{NFSU2_TR(0x6a5e86);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5e89:{NFSU2_TR(0x6a5e89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5e8c:{NFSU2_TR(0x6a5e8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5e8f:{NFSU2_TR(0x6a5e8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a5e92:{NFSU2_TR(0x6a5e92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6a5e94:{NFSU2_TR(0x6a5e94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5e97:{NFSU2_TR(0x6a5e97);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6a5e9a:{NFSU2_TR(0x6a5e9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5e9e:{NFSU2_TR(0x6a5e9e);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6a5ea4:L6a5ea4:{c.instructions+=4;NFSU2_TR(0x6a5ea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5ea7:{NFSU2_TR(0x6a5ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5eaa:{NFSU2_TR(0x6a5eaa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a5ead:{NFSU2_TR(0x6a5ead);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a5c02u);}goto L6a5c02;}}
}
B6a5eb3:L6a5eb3:{c.instructions+=4;NFSU2_TR(0x6a5eb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5eb6:{NFSU2_TR(0x6a5eb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a5eb9:{NFSU2_TR(0x6a5eb9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B6a5ebc:{NFSU2_TR(0x6a5ebc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a5a34u);}goto L6a5a34;}}
}
B6a5ec2:L6a5ec2:{c.instructions+=4;NFSU2_TR(0x6a5ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5ec5:{NFSU2_TR(0x6a5ec5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff34ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a5ecb:{NFSU2_TR(0x6a5ecb);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6a5ecd:{NFSU2_TR(0x6a5ecd);
__builtin_memmove((R+8),(R+24),4);
}
B6a5ecf:L6a5ecf:{c.instructions+=6;NFSU2_TR(0x6a5ecf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a5ed2:{NFSU2_TR(0x6a5ed2);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6a5ed6:{NFSU2_TR(0x6a5ed6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a5ed8:{NFSU2_TR(0x6a5ed8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6a5edb:{NFSU2_TR(0x6a5edb);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6a5edc:{NFSU2_TR(0x6a5edc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a5ecfu);}goto L6a5ecf;}}
}
B6a5ede:L6a5ede:{c.instructions+=1;NFSU2_TR(0x6a5ede);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a5ee0:L6a5ee0:{c.instructions+=2;NFSU2_TR(0x6a5ee0);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6a5ee5:{NFSU2_TR(0x6a5ee5);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a504bu);}goto L6a504b;}}
}
B6a5eeb:L6a5eeb:{c.instructions+=3;NFSU2_TR(0x6a5eeb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a5eec:{NFSU2_TR(0x6a5eec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6a5eee:{NFSU2_TR(0x6a5eee);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a5ee0u);}goto L6a5ee0;}}
}
B6a5ef0:L6a5ef0:{c.instructions+=1;NFSU2_TR(0x6a5ef0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a5422u);}goto L6a5422;}
}
B6a5ef5:L6a5ef5:{c.instructions+=11;NFSU2_TR(0x6a5ef5);
__builtin_memmove((R+28),(R+28),4);
}
B6a5ef7:{NFSU2_TR(0x6a5ef7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5ef8:{NFSU2_TR(0x6a5ef8);
__builtin_memmove((R+20),(R+16),4);
}
B6a5efa:{NFSU2_TR(0x6a5efa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3cull))));
}
B6a5efd:{NFSU2_TR(0x6a5efd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5f00:{NFSU2_TR(0x6a5f00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a5f03:{NFSU2_TR(0x6a5f03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5f06:{NFSU2_TR(0x6a5f06);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a5f09:{NFSU2_TR(0x6a5f09);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5f0c:{NFSU2_TR(0x6a5f0c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a5f0f:{NFSU2_TR(0x6a5f0f);
if(r1(R+518)){{goto L6a5f16;}}
}
B6a5f11:L6a5f11:{c.instructions+=2;NFSU2_TR(0x6a5f11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5f14:{NFSU2_TR(0x6a5f14);
__builtin_memmove((R+8),(R+4),4);
}
B6a5f16:L6a5f16:{c.instructions+=9;NFSU2_TR(0x6a5f16);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5f17:{NFSU2_TR(0x6a5f17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a5f1a:{NFSU2_TR(0x6a5f1a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5f1b:{NFSU2_TR(0x6a5f1b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a5f1e:{NFSU2_TR(0x6a5f1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a5f20:{NFSU2_TR(0x6a5f20);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5f23:{NFSU2_TR(0x6a5f23);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a5f24:{NFSU2_TR(0x6a5f24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5f27:{NFSU2_TR(0x6a5f27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a6198u,6a6);}
}
B6a5f2d:L6a5f2d:{c.instructions+=5;NFSU2_TR(0x6a5f2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5f30:{NFSU2_TR(0x6a5f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5f33:{NFSU2_TR(0x6a5f33);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a5f36:{NFSU2_TR(0x6a5f36);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6a5f3a:{NFSU2_TR(0x6a5f3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a6198u,6a6);}
}
B6a5f40:L6a5f40:{c.instructions+=4;NFSU2_TR(0x6a5f40);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5f43:{NFSU2_TR(0x6a5f43);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a5f46:{NFSU2_TR(0x6a5f46);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+512,u8((r4(U+12))<(r4(R+4))));
}
B6a5f49:{NFSU2_TR(0x6a5f49);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a5f57;}}
}
B6a5f4b:L6a5f4b:{c.instructions+=3;NFSU2_TR(0x6a5f4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a5f4e:{NFSU2_TR(0x6a5f4e);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+512,u8((r4(U+12))<(r4(R+4))));
}
B6a5f51:{NFSU2_TR(0x6a5f51);
if(r1(R+512)){TAIL_STATIC(0x6a6198u,6a6);}
}
B6a5f57:L6a5f57:{c.instructions+=6;NFSU2_TR(0x6a5f57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5f5a:{NFSU2_TR(0x6a5f5a);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B6a5f5d:{NFSU2_TR(0x6a5f5d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a5f5f:{NFSU2_TR(0x6a5f5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5f62:{NFSU2_TR(0x6a5f62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5f65:{NFSU2_TR(0x6a5f65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a6064u,6a6);}
}
B6a5f6b:L6a5f6b:{c.instructions+=3;NFSU2_TR(0x6a5f6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5f6f:{NFSU2_TR(0x6a5f6f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a5f73:{NFSU2_TR(0x6a5f73);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a608eu,6a6);}
}
B6a5f79:L6a5f79:{c.instructions+=17;NFSU2_TR(0x6a5f79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5f7c:{NFSU2_TR(0x6a5f7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5f7f:{NFSU2_TR(0x6a5f7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a5f82:{NFSU2_TR(0x6a5f82);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a5f85:{NFSU2_TR(0x6a5f85);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a5f88:{NFSU2_TR(0x6a5f88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5f8c:{NFSU2_TR(0x6a5f8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5f8f:{NFSU2_TR(0x6a5f8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5f92:{NFSU2_TR(0x6a5f92);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a5f95:{NFSU2_TR(0x6a5f95);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a5f98:{NFSU2_TR(0x6a5f98);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a5f9b:{NFSU2_TR(0x6a5f9b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a5f9d:{NFSU2_TR(0x6a5f9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a5fa0:{NFSU2_TR(0x6a5fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a5fa3:{NFSU2_TR(0x6a5fa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5fa6:{NFSU2_TR(0x6a5fa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a5fa9:{NFSU2_TR(0x6a5fa9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a5fd7;}}
}
B6a5fab:L6a5fab:{c.instructions+=1;NFSU2_TR(0x6a5fab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5fae:L6a5fae:{c.instructions+=6;NFSU2_TR(0x6a5fae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a5fb1:{NFSU2_TR(0x6a5fb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a5fb4:{NFSU2_TR(0x6a5fb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a5fb7:{NFSU2_TR(0x6a5fb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a5fba:{NFSU2_TR(0x6a5fba);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+24))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6a5fbd:{NFSU2_TR(0x6a5fbd);
if(r1(R+518)){{goto L6a5fcd;}}
}
B6a5fbf:L6a5fbf:{c.instructions+=4;NFSU2_TR(0x6a5fbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5fc2:{NFSU2_TR(0x6a5fc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a5fc5:{NFSU2_TR(0x6a5fc5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6a5fc8:{NFSU2_TR(0x6a5fc8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a5faeu);}goto L6a5fae;}}
}
B6a5fca:L6a5fca:{c.instructions+=1;NFSU2_TR(0x6a5fca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a5fcd:L6a5fcd:{c.instructions+=3;NFSU2_TR(0x6a5fcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5fd0:{NFSU2_TR(0x6a5fd0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6a5fd3:{NFSU2_TR(0x6a5fd3);
if(r1(R+512)){TAIL_STATIC(0x6a6050u,6a6);}
}
B6a5fd5:L6a5fd5:{c.instructions+=1;NFSU2_TR(0x6a5fd5);
{goto L6a5fda;}
}
B6a5fd7:L6a5fd7:{c.instructions+=1;NFSU2_TR(0x6a5fd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a5fda:L6a5fda:{c.instructions+=3;NFSU2_TR(0x6a5fda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5fdd:{NFSU2_TR(0x6a5fdd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a5fe0:{NFSU2_TR(0x6a5fe0);
if(r1(R+518)){TAIL_STATIC(0x6a6020u,6a6);}
}
B6a5fe2:L6a5fe2:{c.instructions+=10;NFSU2_TR(0x6a5fe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a5fe5:{NFSU2_TR(0x6a5fe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a5fe8:{NFSU2_TR(0x6a5fe8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a5feb:{NFSU2_TR(0x6a5feb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a5fee:{NFSU2_TR(0x6a5fee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a5ff2:{NFSU2_TR(0x6a5ff2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a5ff5:{NFSU2_TR(0x6a5ff5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a5ff8:{NFSU2_TR(0x6a5ff8);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a5ffa:{NFSU2_TR(0x6a5ffa);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a5ffd:{NFSU2_TR(0x6a5ffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
TAIL_STATIC(0x6a6000u,6a6);
}
XIT:NFSU2_TR_EXIT(0x6a5,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
