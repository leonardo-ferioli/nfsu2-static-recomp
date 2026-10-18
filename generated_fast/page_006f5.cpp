#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_6f4(u8* __restrict R,Cpu& c);
u32 body_6f6(u8* __restrict R,Cpu& c);
u32 body_6fa(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_75f(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6f5,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6f5,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 page_6f5(Cpu& c){return body_6f5(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6f5(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6f5001:goto L6f5001;
case 0x6f5004:c.instructions+=23;goto B6f5004;
case 0x6f5007:c.instructions+=22;goto B6f5007;
case 0x6f500a:c.instructions+=21;goto B6f500a;
case 0x6f500d:c.instructions+=20;goto B6f500d;
case 0x6f5010:c.instructions+=19;goto B6f5010;
case 0x6f5013:c.instructions+=18;goto B6f5013;
case 0x6f5015:c.instructions+=17;goto B6f5015;
case 0x6f501b:c.instructions+=16;goto B6f501b;
case 0x6f501e:c.instructions+=15;goto B6f501e;
case 0x6f5020:c.instructions+=14;goto B6f5020;
case 0x6f5022:c.instructions+=13;goto B6f5022;
case 0x6f5025:c.instructions+=12;goto B6f5025;
case 0x6f5027:c.instructions+=11;goto B6f5027;
case 0x6f502c:c.instructions+=10;goto B6f502c;
case 0x6f502f:c.instructions+=9;goto B6f502f;
case 0x6f5032:c.instructions+=8;goto B6f5032;
case 0x6f5033:c.instructions+=7;goto B6f5033;
case 0x6f5039:c.instructions+=6;goto B6f5039;
case 0x6f503c:c.instructions+=5;goto B6f503c;
case 0x6f503e:c.instructions+=4;goto B6f503e;
case 0x6f5040:c.instructions+=3;goto B6f5040;
case 0x6f5043:c.instructions+=2;goto B6f5043;
case 0x6f5044:c.instructions+=1;goto B6f5044;
case 0x6f5049:goto L6f5049;
case 0x6f504c:c.instructions+=3;goto B6f504c;
case 0x6f5052:c.instructions+=2;goto B6f5052;
case 0x6f5054:c.instructions+=1;goto B6f5054;
case 0x6f5056:goto L6f5056;
case 0x6f5059:c.instructions+=9;goto B6f5059;
case 0x6f505b:c.instructions+=8;goto B6f505b;
case 0x6f505e:c.instructions+=7;goto B6f505e;
case 0x6f5061:c.instructions+=6;goto B6f5061;
case 0x6f5062:c.instructions+=5;goto B6f5062;
case 0x6f5068:c.instructions+=4;goto B6f5068;
case 0x6f506b:c.instructions+=3;goto B6f506b;
case 0x6f506d:c.instructions+=2;goto B6f506d;
case 0x6f506f:c.instructions+=1;goto B6f506f;
case 0x6f5071:goto L6f5071;
case 0x6f5073:goto L6f5073;
case 0x6f5076:c.instructions+=78;goto B6f5076;
case 0x6f5078:c.instructions+=77;goto B6f5078;
case 0x6f507a:c.instructions+=76;goto B6f507a;
case 0x6f5080:c.instructions+=75;goto B6f5080;
case 0x6f5083:c.instructions+=74;goto B6f5083;
case 0x6f5086:c.instructions+=73;goto B6f5086;
case 0x6f5087:c.instructions+=72;goto B6f5087;
case 0x6f5088:c.instructions+=71;goto B6f5088;
case 0x6f508e:c.instructions+=70;goto B6f508e;
case 0x6f5091:c.instructions+=69;goto B6f5091;
case 0x6f5093:c.instructions+=68;goto B6f5093;
case 0x6f5095:c.instructions+=67;goto B6f5095;
case 0x6f5097:c.instructions+=66;goto B6f5097;
case 0x6f5099:c.instructions+=65;goto B6f5099;
case 0x6f509c:c.instructions+=64;goto B6f509c;
case 0x6f50a1:c.instructions+=63;goto B6f50a1;
case 0x6f50a4:c.instructions+=62;goto B6f50a4;
case 0x6f50a7:c.instructions+=61;goto B6f50a7;
case 0x6f50a8:c.instructions+=60;goto B6f50a8;
case 0x6f50ae:c.instructions+=59;goto B6f50ae;
case 0x6f50b1:c.instructions+=58;goto B6f50b1;
case 0x6f50b3:c.instructions+=57;goto B6f50b3;
case 0x6f50b5:c.instructions+=56;goto B6f50b5;
case 0x6f50b7:c.instructions+=55;goto B6f50b7;
case 0x6f50b9:c.instructions+=54;goto B6f50b9;
case 0x6f50bc:c.instructions+=53;goto B6f50bc;
case 0x6f50c2:c.instructions+=52;goto B6f50c2;
case 0x6f50c5:c.instructions+=51;goto B6f50c5;
case 0x6f50c8:c.instructions+=50;goto B6f50c8;
case 0x6f50c9:c.instructions+=49;goto B6f50c9;
case 0x6f50cf:c.instructions+=48;goto B6f50cf;
case 0x6f50d2:c.instructions+=47;goto B6f50d2;
case 0x6f50d4:c.instructions+=46;goto B6f50d4;
case 0x6f50d6:c.instructions+=45;goto B6f50d6;
case 0x6f50d8:c.instructions+=44;goto B6f50d8;
case 0x6f50da:c.instructions+=43;goto B6f50da;
case 0x6f50dd:c.instructions+=42;goto B6f50dd;
case 0x6f50e2:c.instructions+=41;goto B6f50e2;
case 0x6f50e5:c.instructions+=40;goto B6f50e5;
case 0x6f50e8:c.instructions+=39;goto B6f50e8;
case 0x6f50e9:c.instructions+=38;goto B6f50e9;
case 0x6f50ef:c.instructions+=37;goto B6f50ef;
case 0x6f50f2:c.instructions+=36;goto B6f50f2;
case 0x6f50f4:c.instructions+=35;goto B6f50f4;
case 0x6f50f6:c.instructions+=34;goto B6f50f6;
case 0x6f50f8:c.instructions+=33;goto B6f50f8;
case 0x6f50fa:c.instructions+=32;goto B6f50fa;
case 0x6f50fd:c.instructions+=31;goto B6f50fd;
case 0x6f5103:c.instructions+=30;goto B6f5103;
case 0x6f5106:c.instructions+=29;goto B6f5106;
case 0x6f5109:c.instructions+=28;goto B6f5109;
case 0x6f510a:c.instructions+=27;goto B6f510a;
case 0x6f5110:c.instructions+=26;goto B6f5110;
case 0x6f5113:c.instructions+=25;goto B6f5113;
case 0x6f5115:c.instructions+=24;goto B6f5115;
case 0x6f5117:c.instructions+=23;goto B6f5117;
case 0x6f5119:c.instructions+=22;goto B6f5119;
case 0x6f511b:c.instructions+=21;goto B6f511b;
case 0x6f511e:c.instructions+=20;goto B6f511e;
case 0x6f5123:c.instructions+=19;goto B6f5123;
case 0x6f5126:c.instructions+=18;goto B6f5126;
case 0x6f5129:c.instructions+=17;goto B6f5129;
case 0x6f512a:c.instructions+=16;goto B6f512a;
case 0x6f5130:c.instructions+=15;goto B6f5130;
case 0x6f5133:c.instructions+=14;goto B6f5133;
case 0x6f5135:c.instructions+=13;goto B6f5135;
case 0x6f5137:c.instructions+=12;goto B6f5137;
case 0x6f5139:c.instructions+=11;goto B6f5139;
case 0x6f513b:c.instructions+=10;goto B6f513b;
case 0x6f513e:c.instructions+=9;goto B6f513e;
case 0x6f5144:c.instructions+=8;goto B6f5144;
case 0x6f5147:c.instructions+=7;goto B6f5147;
case 0x6f514a:c.instructions+=6;goto B6f514a;
case 0x6f514b:c.instructions+=5;goto B6f514b;
case 0x6f5151:c.instructions+=4;goto B6f5151;
case 0x6f5154:c.instructions+=3;goto B6f5154;
case 0x6f5156:c.instructions+=2;goto B6f5156;
case 0x6f5158:c.instructions+=1;goto B6f5158;
case 0x6f515d:goto L6f515d;
case 0x6f5160:c.instructions+=5;goto B6f5160;
case 0x6f5163:c.instructions+=4;goto B6f5163;
case 0x6f5166:c.instructions+=3;goto B6f5166;
case 0x6f5168:c.instructions+=2;goto B6f5168;
case 0x6f516a:c.instructions+=1;goto B6f516a;
case 0x6f516c:goto L6f516c;
case 0x6f516d:c.instructions+=6;goto B6f516d;
case 0x6f5170:c.instructions+=5;goto B6f5170;
case 0x6f5173:c.instructions+=4;goto B6f5173;
case 0x6f5174:c.instructions+=3;goto B6f5174;
case 0x6f5175:c.instructions+=2;goto B6f5175;
case 0x6f5176:c.instructions+=1;goto B6f5176;
case 0x6f5179:goto L6f5179;
case 0x6f517b:c.instructions+=7;goto B6f517b;
case 0x6f517c:c.instructions+=6;goto B6f517c;
case 0x6f517f:c.instructions+=5;goto B6f517f;
case 0x6f5182:c.instructions+=4;goto B6f5182;
case 0x6f5183:c.instructions+=3;goto B6f5183;
case 0x6f5184:c.instructions+=2;goto B6f5184;
case 0x6f5185:c.instructions+=1;goto B6f5185;
case 0x6f5190:goto L6f5190;
case 0x6f5191:c.instructions+=10;goto B6f5191;
case 0x6f5193:c.instructions+=9;goto B6f5193;
case 0x6f5194:c.instructions+=8;goto B6f5194;
case 0x6f5197:c.instructions+=7;goto B6f5197;
case 0x6f519a:c.instructions+=6;goto B6f519a;
case 0x6f519b:c.instructions+=5;goto B6f519b;
case 0x6f519e:c.instructions+=4;goto B6f519e;
case 0x6f519f:c.instructions+=3;goto B6f519f;
case 0x6f51a1:c.instructions+=2;goto B6f51a1;
case 0x6f51a3:c.instructions+=1;goto B6f51a3;
case 0x6f51a5:goto L6f51a5;
case 0x6f51a8:c.instructions+=2;goto B6f51a8;
case 0x6f51aa:c.instructions+=1;goto B6f51aa;
case 0x6f51ac:goto L6f51ac;
case 0x6f51b2:c.instructions+=2;goto B6f51b2;
case 0x6f51b5:c.instructions+=1;goto B6f51b5;
case 0x6f51b8:goto L6f51b8;
case 0x6f51b9:c.instructions+=2;goto B6f51b9;
case 0x6f51bb:c.instructions+=1;goto B6f51bb;
case 0x6f51c0:goto L6f51c0;
case 0x6f51c1:c.instructions+=2;goto B6f51c1;
case 0x6f51c3:c.instructions+=1;goto B6f51c3;
case 0x6f51c8:goto L6f51c8;
case 0x6f51cb:c.instructions+=1;goto B6f51cb;
case 0x6f51cd:goto L6f51cd;
case 0x6f51d1:c.instructions+=1;goto B6f51d1;
case 0x6f51d3:goto L6f51d3;
case 0x6f51d6:c.instructions+=2;goto B6f51d6;
case 0x6f51d8:c.instructions+=1;goto B6f51d8;
case 0x6f51da:goto L6f51da;
case 0x6f51dd:c.instructions+=4;goto B6f51dd;
case 0x6f51e0:c.instructions+=3;goto B6f51e0;
case 0x6f51e3:c.instructions+=2;goto B6f51e3;
case 0x6f51e5:c.instructions+=1;goto B6f51e5;
case 0x6f51e7:goto L6f51e7;
case 0x6f51e9:c.instructions+=1;goto B6f51e9;
case 0x6f51eb:goto L6f51eb;
case 0x6f51ee:c.instructions+=1;goto B6f51ee;
case 0x6f51f0:goto L6f51f0;
case 0x6f51f2:c.instructions+=2;goto B6f51f2;
case 0x6f51f4:c.instructions+=1;goto B6f51f4;
case 0x6f51f7:goto L6f51f7;
case 0x6f51f8:c.instructions+=2;goto B6f51f8;
case 0x6f51fa:c.instructions+=1;goto B6f51fa;
case 0x6f51ff:goto L6f51ff;
case 0x6f5200:c.instructions+=2;goto B6f5200;
case 0x6f5202:c.instructions+=1;goto B6f5202;
case 0x6f5207:goto L6f5207;
case 0x6f520a:c.instructions+=1;goto B6f520a;
case 0x6f520c:goto L6f520c;
case 0x6f520f:c.instructions+=2;goto B6f520f;
case 0x6f5212:c.instructions+=1;goto B6f5212;
case 0x6f5214:goto L6f5214;
case 0x6f5217:c.instructions+=4;goto B6f5217;
case 0x6f521a:c.instructions+=3;goto B6f521a;
case 0x6f521d:c.instructions+=2;goto B6f521d;
case 0x6f521f:c.instructions+=1;goto B6f521f;
case 0x6f5221:goto L6f5221;
case 0x6f5223:c.instructions+=1;goto B6f5223;
case 0x6f5225:goto L6f5225;
case 0x6f5228:c.instructions+=1;goto B6f5228;
case 0x6f522a:goto L6f522a;
case 0x6f522c:c.instructions+=2;goto B6f522c;
case 0x6f522e:c.instructions+=1;goto B6f522e;
case 0x6f5231:goto L6f5231;
case 0x6f5232:c.instructions+=2;goto B6f5232;
case 0x6f5234:c.instructions+=1;goto B6f5234;
case 0x6f5239:goto L6f5239;
case 0x6f523b:c.instructions+=1;goto B6f523b;
case 0x6f523e:goto L6f523e;
case 0x6f5242:c.instructions+=1;goto B6f5242;
case 0x6f5244:goto L6f5244;
case 0x6f5247:c.instructions+=4;goto B6f5247;
case 0x6f524a:c.instructions+=3;goto B6f524a;
case 0x6f524d:c.instructions+=2;goto B6f524d;
case 0x6f524f:c.instructions+=1;goto B6f524f;
case 0x6f5251:goto L6f5251;
case 0x6f5253:c.instructions+=1;goto B6f5253;
case 0x6f5255:goto L6f5255;
case 0x6f5258:c.instructions+=1;goto B6f5258;
case 0x6f525a:goto L6f525a;
case 0x6f525c:c.instructions+=2;goto B6f525c;
case 0x6f525e:c.instructions+=1;goto B6f525e;
case 0x6f5261:goto L6f5261;
case 0x6f5262:c.instructions+=1;goto B6f5262;
case 0x6f5267:goto L6f5267;
case 0x6f526d:c.instructions+=3;goto B6f526d;
case 0x6f5271:c.instructions+=2;goto B6f5271;
case 0x6f5273:c.instructions+=1;goto B6f5273;
case 0x6f5277:goto L6f5277;
case 0x6f527a:c.instructions+=2;goto B6f527a;
case 0x6f527c:c.instructions+=1;goto B6f527c;
case 0x6f527e:goto L6f527e;
case 0x6f5281:c.instructions+=4;goto B6f5281;
case 0x6f5284:c.instructions+=3;goto B6f5284;
case 0x6f5287:c.instructions+=2;goto B6f5287;
case 0x6f5289:c.instructions+=1;goto B6f5289;
case 0x6f528b:goto L6f528b;
case 0x6f528d:c.instructions+=1;goto B6f528d;
case 0x6f528f:goto L6f528f;
case 0x6f5292:c.instructions+=1;goto B6f5292;
case 0x6f5294:goto L6f5294;
case 0x6f5296:c.instructions+=2;goto B6f5296;
case 0x6f5298:c.instructions+=1;goto B6f5298;
case 0x6f529b:goto L6f529b;
case 0x6f529c:c.instructions+=2;goto B6f529c;
case 0x6f529e:c.instructions+=1;goto B6f529e;
case 0x6f52a3:goto L6f52a3;
case 0x6f52a9:c.instructions+=2;goto B6f52a9;
case 0x6f52ab:c.instructions+=1;goto B6f52ab;
case 0x6f52af:goto L6f52af;
case 0x6f52b3:c.instructions+=1;goto B6f52b3;
case 0x6f52b5:goto L6f52b5;
case 0x6f52b8:c.instructions+=4;goto B6f52b8;
case 0x6f52bb:c.instructions+=3;goto B6f52bb;
case 0x6f52be:c.instructions+=2;goto B6f52be;
case 0x6f52c0:c.instructions+=1;goto B6f52c0;
case 0x6f52c2:goto L6f52c2;
case 0x6f52c4:c.instructions+=1;goto B6f52c4;
case 0x6f52c6:goto L6f52c6;
case 0x6f52c9:c.instructions+=1;goto B6f52c9;
case 0x6f52cb:goto L6f52cb;
case 0x6f52cd:c.instructions+=2;goto B6f52cd;
case 0x6f52cf:c.instructions+=1;goto B6f52cf;
case 0x6f52d2:goto L6f52d2;
case 0x6f52d3:c.instructions+=1;goto B6f52d3;
case 0x6f52d8:goto L6f52d8;
case 0x6f52db:c.instructions+=6;goto B6f52db;
case 0x6f52e1:c.instructions+=5;goto B6f52e1;
case 0x6f52e4:c.instructions+=4;goto B6f52e4;
case 0x6f52e6:c.instructions+=3;goto B6f52e6;
case 0x6f52e9:c.instructions+=2;goto B6f52e9;
case 0x6f52eb:c.instructions+=1;goto B6f52eb;
case 0x6f52ed:goto L6f52ed;
case 0x6f52f0:c.instructions+=2;goto B6f52f0;
case 0x6f52f3:c.instructions+=1;goto B6f52f3;
case 0x6f52f5:goto L6f52f5;
case 0x6f52f7:c.instructions+=3;goto B6f52f7;
case 0x6f52fa:c.instructions+=2;goto B6f52fa;
case 0x6f52fd:c.instructions+=1;goto B6f52fd;
case 0x6f5300:goto L6f5300;
case 0x6f5302:goto L6f5302;
case 0x6f5304:c.instructions+=1;goto B6f5304;
case 0x6f5306:goto L6f5306;
case 0x6f530d:goto L6f530d;
case 0x6f530e:c.instructions+=4;goto B6f530e;
case 0x6f530f:c.instructions+=3;goto B6f530f;
case 0x6f5310:c.instructions+=2;goto B6f5310;
case 0x6f5311:c.instructions+=1;goto B6f5311;
case 0x6f5320:goto L6f5320;
case 0x6f5321:c.instructions+=12;goto B6f5321;
case 0x6f5323:c.instructions+=11;goto B6f5323;
case 0x6f5326:c.instructions+=10;goto B6f5326;
case 0x6f5327:c.instructions+=9;goto B6f5327;
case 0x6f5328:c.instructions+=8;goto B6f5328;
case 0x6f532b:c.instructions+=7;goto B6f532b;
case 0x6f5330:c.instructions+=6;goto B6f5330;
case 0x6f5335:c.instructions+=5;goto B6f5335;
case 0x6f5336:c.instructions+=4;goto B6f5336;
case 0x6f5338:c.instructions+=3;goto B6f5338;
case 0x6f533d:c.instructions+=2;goto B6f533d;
case 0x6f533e:c.instructions+=1;goto B6f533e;
case 0x6f5343:goto L6f5343;
case 0x6f5346:c.instructions+=3;goto B6f5346;
case 0x6f5347:c.instructions+=2;goto B6f5347;
case 0x6f534c:c.instructions+=1;goto B6f534c;
case 0x6f5351:goto L6f5351;
case 0x6f5353:c.instructions+=3;goto B6f5353;
case 0x6f5354:c.instructions+=2;goto B6f5354;
case 0x6f5355:c.instructions+=1;goto B6f5355;
case 0x6f535a:goto L6f535a;
case 0x6f535c:c.instructions+=9;goto B6f535c;
case 0x6f535f:c.instructions+=8;goto B6f535f;
case 0x6f5364:c.instructions+=7;goto B6f5364;
case 0x6f5369:c.instructions+=6;goto B6f5369;
case 0x6f536b:c.instructions+=5;goto B6f536b;
case 0x6f536c:c.instructions+=4;goto B6f536c;
case 0x6f536e:c.instructions+=3;goto B6f536e;
case 0x6f536f:c.instructions+=2;goto B6f536f;
case 0x6f5370:c.instructions+=1;goto B6f5370;
case 0x6f5380:goto L6f5380;
case 0x6f5381:c.instructions+=5;goto B6f5381;
case 0x6f5383:c.instructions+=4;goto B6f5383;
case 0x6f5386:c.instructions+=3;goto B6f5386;
case 0x6f5389:c.instructions+=2;goto B6f5389;
case 0x6f538c:c.instructions+=1;goto B6f538c;
case 0x6f538e:goto L6f538e;
case 0x6f5395:c.instructions+=1;goto B6f5395;
case 0x6f539c:goto L6f539c;
case 0x6f53a1:c.instructions+=2;goto B6f53a1;
case 0x6f53a2:c.instructions+=1;goto B6f53a2;
case 0x6f53a3:goto L6f53a3;
case 0x6f53a8:c.instructions+=2;goto B6f53a8;
case 0x6f53a9:c.instructions+=1;goto B6f53a9;
case 0x6f53aa:goto L6f53aa;
case 0x6f53af:c.instructions+=2;goto B6f53af;
case 0x6f53b0:c.instructions+=1;goto B6f53b0;
case 0x6f53b1:goto L6f53b1;
case 0x6f53b6:c.instructions+=2;goto B6f53b6;
case 0x6f53b7:c.instructions+=1;goto B6f53b7;
case 0x6f53b8:goto L6f53b8;
case 0x6f53bd:c.instructions+=2;goto B6f53bd;
case 0x6f53be:c.instructions+=1;goto B6f53be;
case 0x6f53bf:goto L6f53bf;
case 0x6f53c4:c.instructions+=2;goto B6f53c4;
case 0x6f53c5:c.instructions+=1;goto B6f53c5;
case 0x6f53c6:goto L6f53c6;
case 0x6f53c7:c.instructions+=2;goto B6f53c7;
case 0x6f53cc:c.instructions+=1;goto B6f53cc;
case 0x6f53d1:goto L6f53d1;
case 0x6f53d4:c.instructions+=3;goto B6f53d4;
case 0x6f53d6:c.instructions+=2;goto B6f53d6;
case 0x6f53d7:c.instructions+=1;goto B6f53d7;
case 0x6f5420:goto L6f5420;
case 0x6f5421:c.instructions+=10;goto B6f5421;
case 0x6f5423:c.instructions+=9;goto B6f5423;
case 0x6f5426:c.instructions+=8;goto B6f5426;
case 0x6f5429:c.instructions+=7;goto B6f5429;
case 0x6f542e:c.instructions+=6;goto B6f542e;
case 0x6f5431:c.instructions+=5;goto B6f5431;
case 0x6f5434:c.instructions+=4;goto B6f5434;
case 0x6f5436:c.instructions+=3;goto B6f5436;
case 0x6f5439:c.instructions+=2;goto B6f5439;
case 0x6f5440:c.instructions+=1;goto B6f5440;
case 0x6f5446:goto L6f5446;
case 0x6f544d:goto L6f544d;
case 0x6f544f:c.instructions+=4;goto B6f544f;
case 0x6f5456:c.instructions+=3;goto B6f5456;
case 0x6f5459:c.instructions+=2;goto B6f5459;
case 0x6f545a:c.instructions+=1;goto B6f545a;
case 0x6f545b:goto L6f545b;
case 0x6f5460:c.instructions+=5;goto B6f5460;
case 0x6f5462:c.instructions+=4;goto B6f5462;
case 0x6f5465:c.instructions+=3;goto B6f5465;
case 0x6f5468:c.instructions+=2;goto B6f5468;
case 0x6f5469:c.instructions+=1;goto B6f5469;
case 0x6f546a:goto L6f546a;
case 0x6f5470:c.instructions+=4;goto B6f5470;
case 0x6f5477:c.instructions+=3;goto B6f5477;
case 0x6f547a:c.instructions+=2;goto B6f547a;
case 0x6f547b:c.instructions+=1;goto B6f547b;
case 0x6f547c:goto L6f547c;
case 0x6f5482:c.instructions+=4;goto B6f5482;
case 0x6f5489:c.instructions+=3;goto B6f5489;
case 0x6f548c:c.instructions+=2;goto B6f548c;
case 0x6f548d:c.instructions+=1;goto B6f548d;
case 0x6f548e:goto L6f548e;
case 0x6f5493:c.instructions+=5;goto B6f5493;
case 0x6f5495:c.instructions+=4;goto B6f5495;
case 0x6f5498:c.instructions+=3;goto B6f5498;
case 0x6f549b:c.instructions+=2;goto B6f549b;
case 0x6f549c:c.instructions+=1;goto B6f549c;
case 0x6f549d:goto L6f549d;
case 0x6f54a2:c.instructions+=5;goto B6f54a2;
case 0x6f54a4:c.instructions+=4;goto B6f54a4;
case 0x6f54a7:c.instructions+=3;goto B6f54a7;
case 0x6f54aa:c.instructions+=2;goto B6f54aa;
case 0x6f54ab:c.instructions+=1;goto B6f54ab;
case 0x6f54ac:goto L6f54ac;
case 0x6f54b1:c.instructions+=5;goto B6f54b1;
case 0x6f54b7:c.instructions+=4;goto B6f54b7;
case 0x6f54ba:c.instructions+=3;goto B6f54ba;
case 0x6f54bd:c.instructions+=2;goto B6f54bd;
case 0x6f54be:c.instructions+=1;goto B6f54be;
case 0x6f54bf:goto L6f54bf;
case 0x6f54c4:c.instructions+=3;goto B6f54c4;
case 0x6f54ca:c.instructions+=2;goto B6f54ca;
case 0x6f54cd:c.instructions+=1;goto B6f54cd;
case 0x6f54d0:goto L6f54d0;
case 0x6f54d1:c.instructions+=1;goto B6f54d1;
case 0x6f5500:goto L6f5500;
case 0x6f5501:c.instructions+=7;goto B6f5501;
case 0x6f5503:c.instructions+=6;goto B6f5503;
case 0x6f5506:c.instructions+=5;goto B6f5506;
case 0x6f5509:c.instructions+=4;goto B6f5509;
case 0x6f550c:c.instructions+=3;goto B6f550c;
case 0x6f550d:c.instructions+=2;goto B6f550d;
case 0x6f550e:c.instructions+=1;goto B6f550e;
case 0x6f5513:goto L6f5513;
case 0x6f5516:c.instructions+=9;goto B6f5516;
case 0x6f551a:c.instructions+=8;goto B6f551a;
case 0x6f551d:c.instructions+=7;goto B6f551d;
case 0x6f5521:c.instructions+=6;goto B6f5521;
case 0x6f5522:c.instructions+=5;goto B6f5522;
case 0x6f5525:c.instructions+=4;goto B6f5525;
case 0x6f5527:c.instructions+=3;goto B6f5527;
case 0x6f5529:c.instructions+=2;goto B6f5529;
case 0x6f552a:c.instructions+=1;goto B6f552a;
case 0x6f5530:goto L6f5530;
case 0x6f5531:c.instructions+=5;goto B6f5531;
case 0x6f5533:c.instructions+=4;goto B6f5533;
case 0x6f5539:c.instructions+=3;goto B6f5539;
case 0x6f553c:c.instructions+=2;goto B6f553c;
case 0x6f553e:c.instructions+=1;goto B6f553e;
case 0x6f5540:goto L6f5540;
case 0x6f5543:c.instructions+=5;goto B6f5543;
case 0x6f5544:c.instructions+=4;goto B6f5544;
case 0x6f5545:c.instructions+=3;goto B6f5545;
case 0x6f554b:c.instructions+=2;goto B6f554b;
case 0x6f554c:c.instructions+=1;goto B6f554c;
case 0x6f5551:goto L6f5551;
case 0x6f5554:c.instructions+=1;goto B6f5554;
case 0x6f5556:goto L6f5556;
case 0x6f555d:goto L6f555d;
case 0x6f5563:c.instructions+=3;goto B6f5563;
case 0x6f5564:c.instructions+=2;goto B6f5564;
case 0x6f5569:c.instructions+=1;goto B6f5569;
case 0x6f556e:goto L6f556e;
case 0x6f5573:c.instructions+=1;goto B6f5573;
case 0x6f5578:goto L6f5578;
case 0x6f557b:c.instructions+=1;goto B6f557b;
case 0x6f5580:goto L6f5580;
case 0x6f5581:c.instructions+=9;goto B6f5581;
case 0x6f5583:c.instructions+=8;goto B6f5583;
case 0x6f5589:c.instructions+=7;goto B6f5589;
case 0x6f558c:c.instructions+=6;goto B6f558c;
case 0x6f558f:c.instructions+=5;goto B6f558f;
case 0x6f5590:c.instructions+=4;goto B6f5590;
case 0x6f5591:c.instructions+=3;goto B6f5591;
case 0x6f5597:c.instructions+=2;goto B6f5597;
case 0x6f5598:c.instructions+=1;goto B6f5598;
case 0x6f559d:goto L6f559d;
case 0x6f55a3:c.instructions+=3;goto B6f55a3;
case 0x6f55a4:c.instructions+=2;goto B6f55a4;
case 0x6f55a9:c.instructions+=1;goto B6f55a9;
case 0x6f55af:goto L6f55af;
case 0x6f55b2:c.instructions+=3;goto B6f55b2;
case 0x6f55b4:c.instructions+=2;goto B6f55b4;
case 0x6f55b5:c.instructions+=1;goto B6f55b5;
case 0x6f55b6:goto L6f55b6;
case 0x6f55b7:c.instructions+=4;goto B6f55b7;
case 0x6f55b9:c.instructions+=3;goto B6f55b9;
case 0x6f55bb:c.instructions+=2;goto B6f55bb;
case 0x6f55bc:c.instructions+=1;goto B6f55bc;
case 0x6f55c1:goto L6f55c1;
case 0x6f55c2:c.instructions+=4;goto B6f55c2;
case 0x6f55c3:c.instructions+=3;goto B6f55c3;
case 0x6f55c5:c.instructions+=2;goto B6f55c5;
case 0x6f55c6:c.instructions+=1;goto B6f55c6;
case 0x6f55c7:goto L6f55c7;
case 0x6f55ca:c.instructions+=2;goto B6f55ca;
case 0x6f55cb:c.instructions+=1;goto B6f55cb;
case 0x6f55d1:goto L6f55d1;
case 0x6f55d2:goto L6f55d2;
case 0x6f55d5:c.instructions+=2;goto B6f55d5;
case 0x6f55d6:c.instructions+=1;goto B6f55d6;
case 0x6f55dc:goto L6f55dc;
case 0x6f55dd:goto L6f55dd;
case 0x6f55e0:c.instructions+=2;goto B6f55e0;
case 0x6f55e1:c.instructions+=1;goto B6f55e1;
case 0x6f55e7:goto L6f55e7;
case 0x6f55e8:goto L6f55e8;
case 0x6f55eb:c.instructions+=2;goto B6f55eb;
case 0x6f55ec:c.instructions+=1;goto B6f55ec;
case 0x6f55f2:goto L6f55f2;
case 0x6f55f3:goto L6f55f3;
case 0x6f55f4:c.instructions+=8;goto B6f55f4;
case 0x6f55f6:c.instructions+=7;goto B6f55f6;
case 0x6f55f7:c.instructions+=6;goto B6f55f7;
case 0x6f55f8:c.instructions+=5;goto B6f55f8;
case 0x6f55f9:c.instructions+=4;goto B6f55f9;
case 0x6f55fc:c.instructions+=3;goto B6f55fc;
case 0x6f55ff:c.instructions+=2;goto B6f55ff;
case 0x6f5601:c.instructions+=1;goto B6f5601;
case 0x6f5603:goto L6f5603;
case 0x6f5605:c.instructions+=1;goto B6f5605;
case 0x6f5607:goto L6f5607;
case 0x6f5609:c.instructions+=1;goto B6f5609;
case 0x6f560b:goto L6f560b;
case 0x6f560c:goto L6f560c;
case 0x6f5612:c.instructions+=5;goto B6f5612;
case 0x6f5618:c.instructions+=4;goto B6f5618;
case 0x6f561b:c.instructions+=3;goto B6f561b;
case 0x6f561e:c.instructions+=2;goto B6f561e;
case 0x6f5620:c.instructions+=1;goto B6f5620;
case 0x6f5625:goto L6f5625;
case 0x6f5627:c.instructions+=2;goto B6f5627;
case 0x6f5629:c.instructions+=1;goto B6f5629;
case 0x6f562b:goto L6f562b;
case 0x6f562d:c.instructions+=1;goto B6f562d;
case 0x6f562f:goto L6f562f;
case 0x6f5632:c.instructions+=1;goto B6f5632;
case 0x6f5634:goto L6f5634;
case 0x6f5637:c.instructions+=1;goto B6f5637;
case 0x6f5639:goto L6f5639;
case 0x6f563c:c.instructions+=1;goto B6f563c;
case 0x6f563e:goto L6f563e;
case 0x6f5640:goto L6f5640;
case 0x6f5643:c.instructions+=3;goto B6f5643;
case 0x6f5644:c.instructions+=2;goto B6f5644;
case 0x6f564a:c.instructions+=1;goto B6f564a;
case 0x6f564c:goto L6f564c;
case 0x6f564f:c.instructions+=15;goto B6f564f;
case 0x6f5652:c.instructions+=14;goto B6f5652;
case 0x6f5655:c.instructions+=13;goto B6f5655;
case 0x6f565c:c.instructions+=12;goto B6f565c;
case 0x6f5662:c.instructions+=11;goto B6f5662;
case 0x6f5668:c.instructions+=10;goto B6f5668;
case 0x6f566b:c.instructions+=9;goto B6f566b;
case 0x6f5671:c.instructions+=8;goto B6f5671;
case 0x6f5677:c.instructions+=7;goto B6f5677;
case 0x6f5678:c.instructions+=6;goto B6f5678;
case 0x6f5679:c.instructions+=5;goto B6f5679;
case 0x6f567f:c.instructions+=4;goto B6f567f;
case 0x6f5685:c.instructions+=3;goto B6f5685;
case 0x6f5686:c.instructions+=2;goto B6f5686;
case 0x6f5687:c.instructions+=1;goto B6f5687;
case 0x6f5688:goto L6f5688;
case 0x6f5689:c.instructions+=4;goto B6f5689;
case 0x6f568b:c.instructions+=3;goto B6f568b;
case 0x6f568e:c.instructions+=2;goto B6f568e;
case 0x6f5690:c.instructions+=1;goto B6f5690;
case 0x6f5695:goto L6f5695;
case 0x6f5697:c.instructions+=1;goto B6f5697;
case 0x6f5699:goto L6f5699;
case 0x6f569c:c.instructions+=3;goto B6f569c;
case 0x6f569d:c.instructions+=2;goto B6f569d;
case 0x6f56a3:c.instructions+=1;goto B6f56a3;
case 0x6f56a5:goto L6f56a5;
case 0x6f56a8:c.instructions+=1;goto B6f56a8;
case 0x6f56aa:goto L6f56aa;
case 0x6f56ad:c.instructions+=3;goto B6f56ad;
case 0x6f56b4:c.instructions+=2;goto B6f56b4;
case 0x6f56b6:c.instructions+=1;goto B6f56b6;
case 0x6f56b8:goto L6f56b8;
case 0x6f56bb:goto L6f56bb;
case 0x6f56bc:c.instructions+=1;goto B6f56bc;
case 0x6f56bd:goto L6f56bd;
case 0x6f56bf:c.instructions+=1;goto B6f56bf;
case 0x6f56c4:goto L6f56c4;
case 0x6f56c6:c.instructions+=2;goto B6f56c6;
case 0x6f56c7:c.instructions+=1;goto B6f56c7;
case 0x6f56c9:goto L6f56c9;
case 0x6f56ce:c.instructions+=3;goto B6f56ce;
case 0x6f56cf:c.instructions+=2;goto B6f56cf;
case 0x6f56d4:c.instructions+=1;goto B6f56d4;
case 0x6f56d9:goto L6f56d9;
case 0x6f56dc:c.instructions+=2;goto B6f56dc;
case 0x6f56de:c.instructions+=1;goto B6f56de;
case 0x6f56e0:goto L6f56e0;
case 0x6f56e2:c.instructions+=2;goto B6f56e2;
case 0x6f56e8:c.instructions+=1;goto B6f56e8;
case 0x6f56ea:goto L6f56ea;
case 0x6f56ee:c.instructions+=1;goto B6f56ee;
case 0x6f56f0:goto L6f56f0;
case 0x6f56f6:c.instructions+=5;goto B6f56f6;
case 0x6f56f8:c.instructions+=4;goto B6f56f8;
case 0x6f56f9:c.instructions+=3;goto B6f56f9;
case 0x6f56fc:c.instructions+=2;goto B6f56fc;
case 0x6f5703:c.instructions+=1;goto B6f5703;
case 0x6f5705:goto L6f5705;
case 0x6f570a:c.instructions+=5;goto B6f570a;
case 0x6f570d:c.instructions+=4;goto B6f570d;
case 0x6f5711:c.instructions+=3;goto B6f5711;
case 0x6f5712:c.instructions+=2;goto B6f5712;
case 0x6f5713:c.instructions+=1;goto B6f5713;
case 0x6f5715:goto L6f5715;
case 0x6f5718:c.instructions+=2;goto B6f5718;
case 0x6f571e:c.instructions+=1;goto B6f571e;
case 0x6f5720:goto L6f5720;
case 0x6f5721:goto L6f5721;
case 0x6f5722:goto L6f5722;
case 0x6f5727:c.instructions+=1;goto B6f5727;
case 0x6f5755:goto L6f5755;
case 0x6f5756:c.instructions+=6;goto B6f5756;
case 0x6f5758:c.instructions+=5;goto B6f5758;
case 0x6f575d:c.instructions+=4;goto B6f575d;
case 0x6f5760:c.instructions+=3;goto B6f5760;
case 0x6f5765:c.instructions+=2;goto B6f5765;
case 0x6f5766:c.instructions+=1;goto B6f5766;
case 0x6f5779:goto L6f5779;
case 0x6f577a:c.instructions+=5;goto B6f577a;
case 0x6f577c:c.instructions+=4;goto B6f577c;
case 0x6f577d:c.instructions+=3;goto B6f577d;
case 0x6f5783:c.instructions+=2;goto B6f5783;
case 0x6f5786:c.instructions+=1;goto B6f5786;
case 0x6f5788:goto L6f5788;
case 0x6f578d:goto L6f578d;
case 0x6f578f:c.instructions+=1;goto B6f578f;
case 0x6f5794:goto L6f5794;
case 0x6f5795:goto L6f5795;
case 0x6f579a:c.instructions+=2;goto B6f579a;
case 0x6f579c:c.instructions+=1;goto B6f579c;
case 0x6f579e:goto L6f579e;
case 0x6f579f:c.instructions+=2;goto B6f579f;
case 0x6f57a0:c.instructions+=1;goto B6f57a0;
case 0x6f57a1:goto L6f57a1;
case 0x6f57a6:c.instructions+=1;goto B6f57a6;
case 0x6f57c4:goto L6f57c4;
case 0x6f57c5:c.instructions+=13;goto B6f57c5;
case 0x6f57c7:c.instructions+=12;goto B6f57c7;
case 0x6f57ca:c.instructions+=11;goto B6f57ca;
case 0x6f57cd:c.instructions+=10;goto B6f57cd;
case 0x6f57ce:c.instructions+=9;goto B6f57ce;
case 0x6f57cf:c.instructions+=8;goto B6f57cf;
case 0x6f57d1:c.instructions+=7;goto B6f57d1;
case 0x6f57d4:c.instructions+=6;goto B6f57d4;
case 0x6f57d5:c.instructions+=5;goto B6f57d5;
case 0x6f57d6:c.instructions+=4;goto B6f57d6;
case 0x6f57d7:c.instructions+=3;goto B6f57d7;
case 0x6f57da:c.instructions+=2;goto B6f57da;
case 0x6f57e0:c.instructions+=1;goto B6f57e0;
case 0x6f57e3:goto L6f57e3;
case 0x6f57e4:c.instructions+=4;goto B6f57e4;
case 0x6f57e5:c.instructions+=3;goto B6f57e5;
case 0x6f57e6:c.instructions+=2;goto B6f57e6;
case 0x6f57e7:c.instructions+=1;goto B6f57e7;
case 0x6f57ea:goto L6f57ea;
case 0x6f57eb:c.instructions+=3;goto B6f57eb;
case 0x6f57ed:c.instructions+=2;goto B6f57ed;
case 0x6f57f3:c.instructions+=1;goto B6f57f3;
case 0x6f57f5:goto L6f57f5;
case 0x6f57fb:goto L6f57fb;
case 0x6f57fd:c.instructions+=6;goto B6f57fd;
case 0x6f57fe:c.instructions+=5;goto B6f57fe;
case 0x6f57ff:c.instructions+=4;goto B6f57ff;
case 0x6f5805:c.instructions+=3;goto B6f5805;
case 0x6f580a:c.instructions+=2;goto B6f580a;
case 0x6f580f:c.instructions+=1;goto B6f580f;
case 0x6f5811:goto L6f5811;
case 0x6f5812:c.instructions+=1;goto B6f5812;
case 0x6f5818:goto L6f5818;
case 0x6f5819:c.instructions+=1;goto B6f5819;
case 0x6f581b:goto L6f581b;
case 0x6f581c:c.instructions+=1;goto B6f581c;
case 0x6f5822:goto L6f5822;
case 0x6f582c:goto L6f582c;
case 0x6f582d:c.instructions+=1;goto B6f582d;
case 0x6f5859:goto L6f5859;
case 0x6f585a:c.instructions+=5;goto B6f585a;
case 0x6f585c:c.instructions+=4;goto B6f585c;
case 0x6f585f:c.instructions+=3;goto B6f585f;
case 0x6f5862:c.instructions+=2;goto B6f5862;
case 0x6f5863:c.instructions+=1;goto B6f5863;
case 0x6f5865:goto L6f5865;
case 0x6f586b:goto L6f586b;
case 0x6f586d:c.instructions+=1;goto B6f586d;
case 0x6f586f:goto L6f586f;
case 0x6f5872:goto L6f5872;
case 0x6f5874:c.instructions+=1;goto B6f5874;
case 0x6f5876:goto L6f5876;
case 0x6f5878:c.instructions+=2;goto B6f5878;
case 0x6f5879:c.instructions+=1;goto B6f5879;
case 0x6f587f:goto L6f587f;
case 0x6f5880:c.instructions+=1;goto B6f5880;
case 0x6f5886:goto L6f5886;
case 0x6f5887:c.instructions+=2;goto B6f5887;
case 0x6f5888:c.instructions+=1;goto B6f5888;
case 0x6f5889:goto L6f5889;
case 0x6f588a:c.instructions+=4;goto B6f588a;
case 0x6f588c:c.instructions+=3;goto B6f588c;
case 0x6f588e:c.instructions+=2;goto B6f588e;
case 0x6f5891:c.instructions+=1;goto B6f5891;
case 0x6f5897:goto L6f5897;
case 0x6f5898:c.instructions+=1;goto B6f5898;
case 0x6f5899:goto L6f5899;
case 0x6f589a:c.instructions+=2;goto B6f589a;
case 0x6f589c:c.instructions+=1;goto B6f589c;
case 0x6f58a1:goto L6f58a1;
case 0x6f58a3:c.instructions+=2;goto B6f58a3;
case 0x6f58a5:c.instructions+=1;goto B6f58a5;
case 0x6f58a7:goto L6f58a7;
case 0x6f58a9:c.instructions+=1;goto B6f58a9;
case 0x6f58aa:goto L6f58aa;
case 0x6f58ad:c.instructions+=6;goto B6f58ad;
case 0x6f58b3:c.instructions+=5;goto B6f58b3;
case 0x6f58b4:c.instructions+=4;goto B6f58b4;
case 0x6f58b6:c.instructions+=3;goto B6f58b6;
case 0x6f58b8:c.instructions+=2;goto B6f58b8;
case 0x6f58b9:c.instructions+=1;goto B6f58b9;
case 0x6f58bf:goto L6f58bf;
case 0x6f58c0:c.instructions+=1;goto B6f58c0;
case 0x6f58c1:goto L6f58c1;
case 0x6f58c2:c.instructions+=5;goto B6f58c2;
case 0x6f58c4:c.instructions+=4;goto B6f58c4;
case 0x6f58c5:c.instructions+=3;goto B6f58c5;
case 0x6f58c8:c.instructions+=2;goto B6f58c8;
case 0x6f58ca:c.instructions+=1;goto B6f58ca;
case 0x6f58cc:goto L6f58cc;
case 0x6f58d2:goto L6f58d2;
case 0x6f58d8:c.instructions+=4;goto B6f58d8;
case 0x6f58da:c.instructions+=3;goto B6f58da;
case 0x6f58dc:c.instructions+=2;goto B6f58dc;
case 0x6f58dd:c.instructions+=1;goto B6f58dd;
case 0x6f58df:goto L6f58df;
case 0x6f58e2:c.instructions+=1;goto B6f58e2;
case 0x6f58e4:goto L6f58e4;
case 0x6f58e6:c.instructions+=1;goto B6f58e6;
case 0x6f58e8:goto L6f58e8;
case 0x6f58ee:goto L6f58ee;
case 0x6f58f0:c.instructions+=3;goto B6f58f0;
case 0x6f58f3:c.instructions+=2;goto B6f58f3;
case 0x6f58f6:c.instructions+=1;goto B6f58f6;
case 0x6f58f8:goto L6f58f8;
case 0x6f58f9:c.instructions+=2;goto B6f58f9;
case 0x6f58fa:c.instructions+=1;goto B6f58fa;
case 0x6f58fb:goto L6f58fb;
case 0x6f58fc:c.instructions+=4;goto B6f58fc;
case 0x6f58fe:c.instructions+=3;goto B6f58fe;
case 0x6f5901:c.instructions+=2;goto B6f5901;
case 0x6f5903:c.instructions+=1;goto B6f5903;
case 0x6f5905:goto L6f5905;
case 0x6f590a:c.instructions+=1;goto B6f590a;
case 0x6f590c:goto L6f590c;
case 0x6f590f:c.instructions+=1;goto B6f590f;
case 0x6f5911:goto L6f5911;
case 0x6f5917:goto L6f5917;
case 0x6f5919:goto L6f5919;
case 0x6f591c:goto L6f591c;
case 0x6f591e:c.instructions+=1;goto B6f591e;
case 0x6f5920:goto L6f5920;
case 0x6f5921:c.instructions+=1;goto B6f5921;
case 0x6f5927:goto L6f5927;
case 0x6f592a:c.instructions+=1;goto B6f592a;
case 0x6f592c:goto L6f592c;
case 0x6f592f:c.instructions+=1;goto B6f592f;
case 0x6f5931:goto L6f5931;
case 0x6f5934:c.instructions+=1;goto B6f5934;
case 0x6f5936:goto L6f5936;
case 0x6f5938:c.instructions+=1;goto B6f5938;
case 0x6f593a:goto L6f593a;
case 0x6f593d:c.instructions+=1;goto B6f593d;
case 0x6f593f:goto L6f593f;
case 0x6f5942:c.instructions+=1;goto B6f5942;
case 0x6f5944:goto L6f5944;
case 0x6f5947:c.instructions+=1;goto B6f5947;
case 0x6f5949:goto L6f5949;
case 0x6f594b:c.instructions+=1;goto B6f594b;
case 0x6f594d:goto L6f594d;
case 0x6f594f:c.instructions+=1;goto B6f594f;
case 0x6f5951:goto L6f5951;
case 0x6f5953:c.instructions+=3;goto B6f5953;
case 0x6f5954:c.instructions+=2;goto B6f5954;
case 0x6f5955:c.instructions+=1;goto B6f5955;
case 0x6f5956:goto L6f5956;
case 0x6f5959:c.instructions+=2;goto B6f5959;
case 0x6f595a:c.instructions+=1;goto B6f595a;
case 0x6f595b:goto L6f595b;
case 0x6f595d:c.instructions+=1;goto B6f595d;
case 0x6f595f:goto L6f595f;
case 0x6f5961:goto L6f5961;
case 0x6f5962:c.instructions+=2;goto B6f5962;
case 0x6f5963:c.instructions+=1;goto B6f5963;
case 0x6f5964:goto L6f5964;
case 0x6f5966:c.instructions+=2;goto B6f5966;
case 0x6f5967:c.instructions+=1;goto B6f5967;
case 0x6f5968:goto L6f5968;
case 0x6f5969:c.instructions+=4;goto B6f5969;
case 0x6f596b:c.instructions+=3;goto B6f596b;
case 0x6f596e:c.instructions+=2;goto B6f596e;
case 0x6f5970:c.instructions+=1;goto B6f5970;
case 0x6f5972:goto L6f5972;
case 0x6f5977:c.instructions+=1;goto B6f5977;
case 0x6f5979:goto L6f5979;
case 0x6f597c:c.instructions+=1;goto B6f597c;
case 0x6f597e:goto L6f597e;
case 0x6f5984:goto L6f5984;
case 0x6f5986:goto L6f5986;
case 0x6f5989:goto L6f5989;
case 0x6f598b:c.instructions+=1;goto B6f598b;
case 0x6f598d:goto L6f598d;
case 0x6f5990:c.instructions+=2;goto B6f5990;
case 0x6f5993:c.instructions+=1;goto B6f5993;
case 0x6f5995:goto L6f5995;
case 0x6f5998:c.instructions+=1;goto B6f5998;
case 0x6f599a:goto L6f599a;
case 0x6f599d:c.instructions+=1;goto B6f599d;
case 0x6f599f:goto L6f599f;
case 0x6f59a1:c.instructions+=1;goto B6f59a1;
case 0x6f59a3:goto L6f59a3;
case 0x6f59a6:c.instructions+=1;goto B6f59a6;
case 0x6f59a8:goto L6f59a8;
case 0x6f59ab:c.instructions+=1;goto B6f59ab;
case 0x6f59ad:goto L6f59ad;
case 0x6f59b0:c.instructions+=1;goto B6f59b0;
case 0x6f59b2:goto L6f59b2;
case 0x6f59b4:c.instructions+=1;goto B6f59b4;
case 0x6f59b6:goto L6f59b6;
case 0x6f59b8:c.instructions+=1;goto B6f59b8;
case 0x6f59ba:goto L6f59ba;
case 0x6f59bc:c.instructions+=1;goto B6f59bc;
case 0x6f59be:goto L6f59be;
case 0x6f59c0:c.instructions+=2;goto B6f59c0;
case 0x6f59c1:c.instructions+=1;goto B6f59c1;
case 0x6f59c3:goto L6f59c3;
case 0x6f59c6:c.instructions+=1;goto B6f59c6;
case 0x6f59c8:goto L6f59c8;
case 0x6f59ca:c.instructions+=1;goto B6f59ca;
case 0x6f59cc:goto L6f59cc;
case 0x6f59ce:goto L6f59ce;
case 0x6f59cf:goto L6f59cf;
case 0x6f59d0:c.instructions+=2;goto B6f59d0;
case 0x6f59d1:c.instructions+=1;goto B6f59d1;
case 0x6f59d7:goto L6f59d7;
case 0x6f59d9:c.instructions+=2;goto B6f59d9;
case 0x6f59da:c.instructions+=1;goto B6f59da;
case 0x6f59db:goto L6f59db;
case 0x6f59dc:c.instructions+=6;goto B6f59dc;
case 0x6f59de:c.instructions+=5;goto B6f59de;
case 0x6f59e1:c.instructions+=4;goto B6f59e1;
case 0x6f59e2:c.instructions+=3;goto B6f59e2;
case 0x6f59e5:c.instructions+=2;goto B6f59e5;
case 0x6f59e8:c.instructions+=1;goto B6f59e8;
case 0x6f59ee:goto L6f59ee;
case 0x6f59f0:c.instructions+=1;goto B6f59f0;
case 0x6f59f2:goto L6f59f2;
case 0x6f59f4:c.instructions+=4;goto B6f59f4;
case 0x6f59fb:c.instructions+=3;goto B6f59fb;
case 0x6f59fe:c.instructions+=2;goto B6f59fe;
case 0x6f59ff:c.instructions+=1;goto B6f59ff;
case 0x6f5a00:goto L6f5a00;
case 0x6f5a02:c.instructions+=2;goto B6f5a02;
case 0x6f5a03:c.instructions+=1;goto B6f5a03;
case 0x6f5a04:goto L6f5a04;
case 0x6f5a05:c.instructions+=4;goto B6f5a05;
case 0x6f5a07:c.instructions+=3;goto B6f5a07;
case 0x6f5a08:c.instructions+=2;goto B6f5a08;
case 0x6f5a09:c.instructions+=1;goto B6f5a09;
case 0x6f5a0e:goto L6f5a0e;
case 0x6f5a10:c.instructions+=1;goto B6f5a10;
case 0x6f5a13:goto L6f5a13;
case 0x6f5a16:c.instructions+=1;goto B6f5a16;
case 0x6f5a1b:goto L6f5a1b;
case 0x6f5a1d:c.instructions+=3;goto B6f5a1d;
case 0x6f5a1f:c.instructions+=2;goto B6f5a1f;
case 0x6f5a20:c.instructions+=1;goto B6f5a20;
case 0x6f5a22:goto L6f5a22;
case 0x6f5a26:c.instructions+=1;goto B6f5a26;
case 0x6f5a28:goto L6f5a28;
case 0x6f5a2d:goto L6f5a2d;
case 0x6f5a2f:c.instructions+=1;goto B6f5a2f;
case 0x6f5a31:goto L6f5a31;
case 0x6f5a32:c.instructions+=4;goto B6f5a32;
case 0x6f5a34:c.instructions+=3;goto B6f5a34;
case 0x6f5a35:c.instructions+=2;goto B6f5a35;
case 0x6f5a36:c.instructions+=1;goto B6f5a36;
case 0x6f5a40:goto L6f5a40;
case 0x6f5a41:c.instructions+=8;goto B6f5a41;
case 0x6f5a43:c.instructions+=7;goto B6f5a43;
case 0x6f5a46:c.instructions+=6;goto B6f5a46;
case 0x6f5a47:c.instructions+=5;goto B6f5a47;
case 0x6f5a4a:c.instructions+=4;goto B6f5a4a;
case 0x6f5a4b:c.instructions+=3;goto B6f5a4b;
case 0x6f5a4d:c.instructions+=2;goto B6f5a4d;
case 0x6f5a50:c.instructions+=1;goto B6f5a50;
case 0x6f5a52:goto L6f5a52;
case 0x6f5a55:goto L6f5a55;
case 0x6f5a58:c.instructions+=13;goto B6f5a58;
case 0x6f5a5b:c.instructions+=12;goto B6f5a5b;
case 0x6f5a5e:c.instructions+=11;goto B6f5a5e;
case 0x6f5a61:c.instructions+=10;goto B6f5a61;
case 0x6f5a64:c.instructions+=9;goto B6f5a64;
case 0x6f5a65:c.instructions+=8;goto B6f5a65;
case 0x6f5a67:c.instructions+=7;goto B6f5a67;
case 0x6f5a6a:c.instructions+=6;goto B6f5a6a;
case 0x6f5a6b:c.instructions+=5;goto B6f5a6b;
case 0x6f5a70:c.instructions+=4;goto B6f5a70;
case 0x6f5a73:c.instructions+=3;goto B6f5a73;
case 0x6f5a76:c.instructions+=2;goto B6f5a76;
case 0x6f5a77:c.instructions+=1;goto B6f5a77;
case 0x6f5a7c:goto L6f5a7c;
case 0x6f5a7f:c.instructions+=3;goto B6f5a7f;
case 0x6f5a81:c.instructions+=2;goto B6f5a81;
case 0x6f5a84:c.instructions+=1;goto B6f5a84;
case 0x6f5a86:goto L6f5a86;
case 0x6f5a89:c.instructions+=2;goto B6f5a89;
case 0x6f5a8a:c.instructions+=1;goto B6f5a8a;
case 0x6f5a8f:goto L6f5a8f;
case 0x6f5a90:c.instructions+=3;goto B6f5a90;
case 0x6f5a91:c.instructions+=2;goto B6f5a91;
case 0x6f5a94:c.instructions+=1;goto B6f5a94;
case 0x6f5a9a:goto L6f5a9a;
case 0x6f5a9c:goto L6f5a9c;
case 0x6f5a9e:c.instructions+=2;goto B6f5a9e;
case 0x6f5aa0:c.instructions+=1;goto B6f5aa0;
case 0x6f5aa6:goto L6f5aa6;
case 0x6f5aa9:c.instructions+=1;goto B6f5aa9;
case 0x6f5aab:goto L6f5aab;
case 0x6f5aae:c.instructions+=1;goto B6f5aae;
case 0x6f5ab0:goto L6f5ab0;
case 0x6f5ab3:c.instructions+=1;goto B6f5ab3;
case 0x6f5ab9:goto L6f5ab9;
case 0x6f5abb:c.instructions+=1;goto B6f5abb;
case 0x6f5abd:goto L6f5abd;
case 0x6f5abf:goto L6f5abf;
case 0x6f5ac0:c.instructions+=3;goto B6f5ac0;
case 0x6f5ac1:c.instructions+=2;goto B6f5ac1;
case 0x6f5ac2:c.instructions+=1;goto B6f5ac2;
case 0x6f5ac3:goto L6f5ac3;
case 0x6f5ac4:c.instructions+=6;goto B6f5ac4;
case 0x6f5ac6:c.instructions+=5;goto B6f5ac6;
case 0x6f5ac9:c.instructions+=4;goto B6f5ac9;
case 0x6f5aca:c.instructions+=3;goto B6f5aca;
case 0x6f5acb:c.instructions+=2;goto B6f5acb;
case 0x6f5ace:c.instructions+=1;goto B6f5ace;
case 0x6f5ad3:goto L6f5ad3;
case 0x6f5ad4:c.instructions+=3;goto B6f5ad4;
case 0x6f5ad5:c.instructions+=2;goto B6f5ad5;
case 0x6f5ad6:c.instructions+=1;goto B6f5ad6;
case 0x6f5ad7:goto L6f5ad7;
case 0x6f5ad8:c.instructions+=3;goto B6f5ad8;
case 0x6f5add:c.instructions+=2;goto B6f5add;
case 0x6f5ade:c.instructions+=1;goto B6f5ade;
case 0x6f5ae3:goto L6f5ae3;
case 0x6f5ae4:c.instructions+=2;goto B6f5ae4;
case 0x6f5aee:c.instructions+=1;goto B6f5aee;
case 0x6f5af3:goto L6f5af3;
case 0x6f5afa:c.instructions+=3;goto B6f5afa;
case 0x6f5afb:c.instructions+=2;goto B6f5afb;
case 0x6f5afc:c.instructions+=1;goto B6f5afc;
case 0x6f5afe:goto L6f5afe;
case 0x6f5aff:goto L6f5aff;
case 0x6f5b06:c.instructions+=2;goto B6f5b06;
case 0x6f5b0d:c.instructions+=1;goto B6f5b0d;
case 0x6f5b0f:goto L6f5b0f;
case 0x6f5b15:c.instructions+=2;goto B6f5b15;
case 0x6f5b17:c.instructions+=1;goto B6f5b17;
case 0x6f5b19:goto L6f5b19;
case 0x6f5b1b:goto L6f5b1b;
case 0x6f5b1e:c.instructions+=2;goto B6f5b1e;
case 0x6f5b21:c.instructions+=1;goto B6f5b21;
case 0x6f5b23:goto L6f5b23;
case 0x6f5b24:c.instructions+=1;goto B6f5b24;
case 0x6f5b29:goto L6f5b29;
case 0x6f5b30:c.instructions+=2;goto B6f5b30;
case 0x6f5b31:c.instructions+=1;goto B6f5b31;
case 0x6f5b33:goto L6f5b33;
case 0x6f5b34:goto L6f5b34;
case 0x6f5b35:c.instructions+=1;goto B6f5b35;
case 0x6f5b3a:goto L6f5b3a;
case 0x6f5b41:c.instructions+=5;goto B6f5b41;
case 0x6f5b48:c.instructions+=4;goto B6f5b48;
case 0x6f5b49:c.instructions+=3;goto B6f5b49;
case 0x6f5b4b:c.instructions+=2;goto B6f5b4b;
case 0x6f5b4c:c.instructions+=1;goto B6f5b4c;
case 0x6f5b4d:goto L6f5b4d;
case 0x6f5b4e:c.instructions+=9;goto B6f5b4e;
case 0x6f5b50:c.instructions+=8;goto B6f5b50;
case 0x6f5b51:c.instructions+=7;goto B6f5b51;
case 0x6f5b57:c.instructions+=6;goto B6f5b57;
case 0x6f5b58:c.instructions+=5;goto B6f5b58;
case 0x6f5b5e:c.instructions+=4;goto B6f5b5e;
case 0x6f5b5f:c.instructions+=3;goto B6f5b5f;
case 0x6f5b62:c.instructions+=2;goto B6f5b62;
case 0x6f5b65:c.instructions+=1;goto B6f5b65;
case 0x6f5b6a:goto L6f5b6a;
case 0x6f5b6d:c.instructions+=4;goto B6f5b6d;
case 0x6f5b6f:c.instructions+=3;goto B6f5b6f;
case 0x6f5b70:c.instructions+=2;goto B6f5b70;
case 0x6f5b76:c.instructions+=1;goto B6f5b76;
case 0x6f5b7b:goto L6f5b7b;
case 0x6f5b81:c.instructions+=3;goto B6f5b81;
case 0x6f5b83:c.instructions+=2;goto B6f5b83;
case 0x6f5b89:c.instructions+=1;goto B6f5b89;
case 0x6f5b8b:goto L6f5b8b;
case 0x6f5b8c:c.instructions+=2;goto B6f5b8c;
case 0x6f5b92:c.instructions+=1;goto B6f5b92;
case 0x6f5b94:goto L6f5b94;
case 0x6f5b96:c.instructions+=5;goto B6f5b96;
case 0x6f5b9b:c.instructions+=4;goto B6f5b9b;
case 0x6f5b9d:c.instructions+=3;goto B6f5b9d;
case 0x6f5b9e:c.instructions+=2;goto B6f5b9e;
case 0x6f5ba1:c.instructions+=1;goto B6f5ba1;
case 0x6f5ba3:goto L6f5ba3;
case 0x6f5ba8:c.instructions+=1;goto B6f5ba8;
case 0x6f5baa:goto L6f5baa;
case 0x6f5bac:goto L6f5bac;
case 0x6f5bad:c.instructions+=2;goto B6f5bad;
case 0x6f5bb3:c.instructions+=1;goto B6f5bb3;
case 0x6f5bb8:goto L6f5bb8;
case 0x6f5bba:c.instructions+=1;goto B6f5bba;
case 0x6f5bbb:goto L6f5bbb;
case 0x6f5bbc:c.instructions+=5;goto B6f5bbc;
case 0x6f5bbd:c.instructions+=4;goto B6f5bbd;
case 0x6f5bc2:c.instructions+=3;goto B6f5bc2;
case 0x6f5bc8:c.instructions+=2;goto B6f5bc8;
case 0x6f5bc9:c.instructions+=1;goto B6f5bc9;
case 0x6f5bcf:goto L6f5bcf;
case 0x6f5bd1:c.instructions+=3;goto B6f5bd1;
case 0x6f5bd6:c.instructions+=2;goto B6f5bd6;
case 0x6f5bd7:c.instructions+=1;goto B6f5bd7;
case 0x6f5bd9:goto L6f5bd9;
case 0x6f5bdf:c.instructions+=3;goto B6f5bdf;
case 0x6f5be5:c.instructions+=2;goto B6f5be5;
case 0x6f5beb:c.instructions+=1;goto B6f5beb;
case 0x6f5bf1:goto L6f5bf1;
case 0x6f5bf7:c.instructions+=1;goto B6f5bf7;
case 0x6f5bf9:goto L6f5bf9;
case 0x6f5bff:c.instructions+=1;goto B6f5bff;
case 0x6f5c01:goto L6f5c01;
case 0x6f5c06:c.instructions+=1;goto B6f5c06;
case 0x6f5c0b:goto L6f5c0b;
case 0x6f5c0c:goto L6f5c0c;
case 0x6f5c11:goto L6f5c11;
case 0x6f5c12:c.instructions+=2;goto B6f5c12;
case 0x6f5c13:c.instructions+=1;goto B6f5c13;
case 0x6f5c16:goto L6f5c16;
case 0x6f5c17:c.instructions+=3;goto B6f5c17;
case 0x6f5c19:c.instructions+=2;goto B6f5c19;
case 0x6f5c1f:c.instructions+=1;goto B6f5c1f;
case 0x6f5c21:goto L6f5c21;
case 0x6f5c26:c.instructions+=4;goto B6f5c26;
case 0x6f5c28:c.instructions+=3;goto B6f5c28;
case 0x6f5c2e:c.instructions+=2;goto B6f5c2e;
case 0x6f5c34:c.instructions+=1;goto B6f5c34;
case 0x6f5c36:goto L6f5c36;
case 0x6f5c37:c.instructions+=1;goto B6f5c37;
case 0x6f5c3d:goto L6f5c3d;
case 0x6f5c43:c.instructions+=1;goto B6f5c43;
case 0x6f5c49:goto L6f5c49;
case 0x6f5c4f:c.instructions+=1;goto B6f5c4f;
case 0x6f5c51:goto L6f5c51;
case 0x6f5c56:c.instructions+=1;goto B6f5c56;
case 0x6f5c5b:goto L6f5c5b;
case 0x6f5c5d:goto L6f5c5d;
case 0x6f5c63:c.instructions+=1;goto B6f5c63;
case 0x6f5c65:goto L6f5c65;
case 0x6f5c67:c.instructions+=1;goto B6f5c67;
case 0x6f5c6c:goto L6f5c6c;
case 0x6f5c6d:goto L6f5c6d;
case 0x6f5c73:c.instructions+=1;goto B6f5c73;
case 0x6f5c75:goto L6f5c75;
case 0x6f5c77:c.instructions+=6;goto B6f5c77;
case 0x6f5c7d:c.instructions+=5;goto B6f5c7d;
case 0x6f5c83:c.instructions+=4;goto B6f5c83;
case 0x6f5c89:c.instructions+=3;goto B6f5c89;
case 0x6f5c8f:c.instructions+=2;goto B6f5c8f;
case 0x6f5c90:c.instructions+=1;goto B6f5c90;
case 0x6f5c91:goto L6f5c91;
case 0x6f5c92:c.instructions+=9;goto B6f5c92;
case 0x6f5c94:c.instructions+=8;goto B6f5c94;
case 0x6f5c97:c.instructions+=7;goto B6f5c97;
case 0x6f5c98:c.instructions+=6;goto B6f5c98;
case 0x6f5c9a:c.instructions+=5;goto B6f5c9a;
case 0x6f5ca0:c.instructions+=4;goto B6f5ca0;
case 0x6f5ca1:c.instructions+=3;goto B6f5ca1;
case 0x6f5ca2:c.instructions+=2;goto B6f5ca2;
case 0x6f5ca9:c.instructions+=1;goto B6f5ca9;
case 0x6f5cab:goto L6f5cab;
case 0x6f5cad:c.instructions+=4;goto B6f5cad;
case 0x6f5cae:c.instructions+=3;goto B6f5cae;
case 0x6f5cb0:c.instructions+=2;goto B6f5cb0;
case 0x6f5cb5:c.instructions+=1;goto B6f5cb5;
case 0x6f5cbf:goto L6f5cbf;
case 0x6f5cc1:goto L6f5cc1;
case 0x6f5cc7:goto L6f5cc7;
case 0x6f5ccc:goto L6f5ccc;
case 0x6f5ccf:c.instructions+=2;goto B6f5ccf;
case 0x6f5cd1:c.instructions+=1;goto B6f5cd1;
case 0x6f5cd3:goto L6f5cd3;
case 0x6f5cda:c.instructions+=1;goto B6f5cda;
case 0x6f5cdd:goto L6f5cdd;
case 0x6f5ce0:c.instructions+=1;goto B6f5ce0;
case 0x6f5ce2:goto L6f5ce2;
case 0x6f5ce8:c.instructions+=1;goto B6f5ce8;
case 0x6f5cea:goto L6f5cea;
case 0x6f5cf1:c.instructions+=1;goto B6f5cf1;
case 0x6f5cf4:goto L6f5cf4;
case 0x6f5cf7:c.instructions+=9;goto B6f5cf7;
case 0x6f5cf9:c.instructions+=8;goto B6f5cf9;
case 0x6f5cfc:c.instructions+=7;goto B6f5cfc;
case 0x6f5cfd:c.instructions+=6;goto B6f5cfd;
case 0x6f5d03:c.instructions+=5;goto B6f5d03;
case 0x6f5d09:c.instructions+=4;goto B6f5d09;
case 0x6f5d0f:c.instructions+=3;goto B6f5d0f;
case 0x6f5d11:c.instructions+=2;goto B6f5d11;
case 0x6f5d17:c.instructions+=1;goto B6f5d17;
case 0x6f5d1d:goto L6f5d1d;
case 0x6f5d1f:c.instructions+=1;goto B6f5d1f;
case 0x6f5d25:goto L6f5d25;
case 0x6f5d27:c.instructions+=8;goto B6f5d27;
case 0x6f5d28:c.instructions+=7;goto B6f5d28;
case 0x6f5d2e:c.instructions+=6;goto B6f5d2e;
case 0x6f5d31:c.instructions+=5;goto B6f5d31;
case 0x6f5d34:c.instructions+=4;goto B6f5d34;
case 0x6f5d39:c.instructions+=3;goto B6f5d39;
case 0x6f5d3b:c.instructions+=2;goto B6f5d3b;
case 0x6f5d3e:c.instructions+=1;goto B6f5d3e;
case 0x6f5d44:goto L6f5d44;
case 0x6f5d46:c.instructions+=6;goto B6f5d46;
case 0x6f5d47:c.instructions+=5;goto B6f5d47;
case 0x6f5d48:c.instructions+=4;goto B6f5d48;
case 0x6f5d49:c.instructions+=3;goto B6f5d49;
case 0x6f5d4e:c.instructions+=2;goto B6f5d4e;
case 0x6f5d4f:c.instructions+=1;goto B6f5d4f;
case 0x6f5d54:goto L6f5d54;
case 0x6f5d57:c.instructions+=2;goto B6f5d57;
case 0x6f5d59:c.instructions+=1;goto B6f5d59;
case 0x6f5d5f:goto L6f5d5f;
case 0x6f5d65:c.instructions+=1;goto B6f5d65;
case 0x6f5d6b:goto L6f5d6b;
case 0x6f5d6d:c.instructions+=1;goto B6f5d6d;
case 0x6f5d73:goto L6f5d73;
case 0x6f5d78:c.instructions+=1;goto B6f5d78;
case 0x6f5d7d:goto L6f5d7d;
case 0x6f5d7f:c.instructions+=4;goto B6f5d7f;
case 0x6f5d80:c.instructions+=3;goto B6f5d80;
case 0x6f5d86:c.instructions+=2;goto B6f5d86;
case 0x6f5d8c:c.instructions+=1;goto B6f5d8c;
case 0x6f5d8e:goto L6f5d8e;
case 0x6f5d94:c.instructions+=1;goto B6f5d94;
case 0x6f5d96:goto L6f5d96;
case 0x6f5d9c:c.instructions+=2;goto B6f5d9c;
case 0x6f5da6:c.instructions+=1;goto B6f5da6;
case 0x6f5da8:goto L6f5da8;
case 0x6f5da9:c.instructions+=6;goto B6f5da9;
case 0x6f5daa:c.instructions+=5;goto B6f5daa;
case 0x6f5dab:c.instructions+=4;goto B6f5dab;
case 0x6f5dac:c.instructions+=3;goto B6f5dac;
case 0x6f5dad:c.instructions+=2;goto B6f5dad;
case 0x6f5db2:c.instructions+=1;goto B6f5db2;
case 0x6f5db7:goto L6f5db7;
case 0x6f5dbd:goto L6f5dbd;
case 0x6f5dc2:goto L6f5dc2;
case 0x6f5dc5:c.instructions+=1;goto B6f5dc5;
case 0x6f5dc7:goto L6f5dc7;
case 0x6f5dc9:c.instructions+=4;goto B6f5dc9;
case 0x6f5dce:c.instructions+=3;goto B6f5dce;
case 0x6f5dd1:c.instructions+=2;goto B6f5dd1;
case 0x6f5dd3:c.instructions+=1;goto B6f5dd3;
case 0x6f5dd5:goto L6f5dd5;
case 0x6f5dda:goto L6f5dda;
case 0x6f5ddd:c.instructions+=1;goto B6f5ddd;
case 0x6f5ddf:goto L6f5ddf;
case 0x6f5de1:c.instructions+=1;goto B6f5de1;
case 0x6f5de6:goto L6f5de6;
case 0x6f5de7:goto L6f5de7;
case 0x6f5de9:goto L6f5de9;
case 0x6f5deb:c.instructions+=1;goto B6f5deb;
case 0x6f5ded:goto L6f5ded;
case 0x6f5df2:goto L6f5df2;
case 0x6f5df5:c.instructions+=1;goto B6f5df5;
case 0x6f5df7:goto L6f5df7;
case 0x6f5dfc:goto L6f5dfc;
case 0x6f5e01:c.instructions+=2;goto B6f5e01;
case 0x6f5e03:c.instructions+=1;goto B6f5e03;
case 0x6f5e05:goto L6f5e05;
case 0x6f5e08:c.instructions+=1;goto B6f5e08;
case 0x6f5e0e:goto L6f5e0e;
case 0x6f5e10:goto L6f5e10;
case 0x6f5e16:c.instructions+=3;goto B6f5e16;
case 0x6f5e1c:c.instructions+=2;goto B6f5e1c;
case 0x6f5e1e:c.instructions+=1;goto B6f5e1e;
case 0x6f5e20:goto L6f5e20;
case 0x6f5e25:c.instructions+=3;goto B6f5e25;
case 0x6f5e2b:c.instructions+=2;goto B6f5e2b;
case 0x6f5e31:c.instructions+=1;goto B6f5e31;
case 0x6f5e36:goto L6f5e36;
case 0x6f5e3b:c.instructions+=1;goto B6f5e3b;
case 0x6f5e3c:goto L6f5e3c;
case 0x6f5e3d:c.instructions+=4;goto B6f5e3d;
case 0x6f5e3e:c.instructions+=3;goto B6f5e3e;
case 0x6f5e3f:c.instructions+=2;goto B6f5e3f;
case 0x6f5e40:c.instructions+=1;goto B6f5e40;
case 0x6f5e41:goto L6f5e41;
case 0x6f5e42:c.instructions+=12;goto B6f5e42;
case 0x6f5e44:c.instructions+=11;goto B6f5e44;
case 0x6f5e47:c.instructions+=10;goto B6f5e47;
case 0x6f5e4b:c.instructions+=9;goto B6f5e4b;
case 0x6f5e4c:c.instructions+=8;goto B6f5e4c;
case 0x6f5e4e:c.instructions+=7;goto B6f5e4e;
case 0x6f5e4f:c.instructions+=6;goto B6f5e4f;
case 0x6f5e52:c.instructions+=5;goto B6f5e52;
case 0x6f5e53:c.instructions+=4;goto B6f5e53;
case 0x6f5e58:c.instructions+=3;goto B6f5e58;
case 0x6f5e5d:c.instructions+=2;goto B6f5e5d;
case 0x6f5e60:c.instructions+=1;goto B6f5e60;
case 0x6f5e66:goto L6f5e66;
case 0x6f5e68:c.instructions+=1;goto B6f5e68;
case 0x6f5e6a:goto L6f5e6a;
case 0x6f5e6d:c.instructions+=10;goto B6f5e6d;
case 0x6f5e6e:c.instructions+=9;goto B6f5e6e;
case 0x6f5e71:c.instructions+=8;goto B6f5e71;
case 0x6f5e72:c.instructions+=7;goto B6f5e72;
case 0x6f5e75:c.instructions+=6;goto B6f5e75;
case 0x6f5e76:c.instructions+=5;goto B6f5e76;
case 0x6f5e78:c.instructions+=4;goto B6f5e78;
case 0x6f5e7d:c.instructions+=3;goto B6f5e7d;
case 0x6f5e80:c.instructions+=2;goto B6f5e80;
case 0x6f5e83:c.instructions+=1;goto B6f5e83;
case 0x6f5e89:goto L6f5e89;
case 0x6f5e8c:c.instructions+=1;goto B6f5e8c;
case 0x6f5e92:goto L6f5e92;
case 0x6f5e95:c.instructions+=3;goto B6f5e95;
case 0x6f5e96:c.instructions+=2;goto B6f5e96;
case 0x6f5e97:c.instructions+=1;goto B6f5e97;
case 0x6f5e98:goto L6f5e98;
case 0x6f5e99:c.instructions+=7;goto B6f5e99;
case 0x6f5e9b:c.instructions+=6;goto B6f5e9b;
case 0x6f5e9c:c.instructions+=5;goto B6f5e9c;
case 0x6f5e9d:c.instructions+=4;goto B6f5e9d;
case 0x6f5ea1:c.instructions+=3;goto B6f5ea1;
case 0x6f5ea4:c.instructions+=2;goto B6f5ea4;
case 0x6f5ea5:c.instructions+=1;goto B6f5ea5;
case 0x6f5eab:goto L6f5eab;
case 0x6f5eae:c.instructions+=3;goto B6f5eae;
case 0x6f5eb1:c.instructions+=2;goto B6f5eb1;
case 0x6f5eb2:c.instructions+=1;goto B6f5eb2;
case 0x6f5eb3:goto L6f5eb3;
case 0x6f5eb4:c.instructions+=9;goto B6f5eb4;
case 0x6f5eb6:c.instructions+=8;goto B6f5eb6;
case 0x6f5eb7:c.instructions+=7;goto B6f5eb7;
case 0x6f5eb8:c.instructions+=6;goto B6f5eb8;
case 0x6f5ebc:c.instructions+=5;goto B6f5ebc;
case 0x6f5ebd:c.instructions+=4;goto B6f5ebd;
case 0x6f5ebe:c.instructions+=3;goto B6f5ebe;
case 0x6f5ebf:c.instructions+=2;goto B6f5ebf;
case 0x6f5ec4:c.instructions+=1;goto B6f5ec4;
case 0x6f5ec9:goto L6f5ec9;
case 0x6f5ecb:c.instructions+=1;goto B6f5ecb;
case 0x6f5ecd:goto L6f5ecd;
case 0x6f5ed2:goto L6f5ed2;
case 0x6f5ed4:c.instructions+=1;goto B6f5ed4;
case 0x6f5ed6:goto L6f5ed6;
case 0x6f5ed8:c.instructions+=1;goto B6f5ed8;
case 0x6f5eda:goto L6f5eda;
case 0x6f5edd:c.instructions+=4;goto B6f5edd;
case 0x6f5ee1:c.instructions+=3;goto B6f5ee1;
case 0x6f5ee3:c.instructions+=2;goto B6f5ee3;
case 0x6f5ee6:c.instructions+=1;goto B6f5ee6;
case 0x6f5ee8:goto L6f5ee8;
case 0x6f5eea:c.instructions+=3;goto B6f5eea;
case 0x6f5eec:c.instructions+=2;goto B6f5eec;
case 0x6f5eef:c.instructions+=1;goto B6f5eef;
case 0x6f5ef1:goto L6f5ef1;
case 0x6f5ef3:goto L6f5ef3;
case 0x6f5ef6:c.instructions+=1;goto B6f5ef6;
case 0x6f5ef8:goto L6f5ef8;
case 0x6f5ef9:c.instructions+=4;goto B6f5ef9;
case 0x6f5efa:c.instructions+=3;goto B6f5efa;
case 0x6f5efb:c.instructions+=2;goto B6f5efb;
case 0x6f5efc:c.instructions+=1;goto B6f5efc;
case 0x6f5efd:goto L6f5efd;
case 0x6f5efe:c.instructions+=6;goto B6f5efe;
case 0x6f5f00:c.instructions+=5;goto B6f5f00;
case 0x6f5f01:c.instructions+=4;goto B6f5f01;
case 0x6f5f02:c.instructions+=3;goto B6f5f02;
case 0x6f5f05:c.instructions+=2;goto B6f5f05;
case 0x6f5f06:c.instructions+=1;goto B6f5f06;
case 0x6f5f0c:goto L6f5f0c;
case 0x6f5f0f:c.instructions+=3;goto B6f5f0f;
case 0x6f5f12:c.instructions+=2;goto B6f5f12;
case 0x6f5f13:c.instructions+=1;goto B6f5f13;
case 0x6f5f14:goto L6f5f14;
case 0x6f5f15:c.instructions+=9;goto B6f5f15;
case 0x6f5f17:c.instructions+=8;goto B6f5f17;
case 0x6f5f1a:c.instructions+=7;goto B6f5f1a;
case 0x6f5f1b:c.instructions+=6;goto B6f5f1b;
case 0x6f5f1c:c.instructions+=5;goto B6f5f1c;
case 0x6f5f1d:c.instructions+=4;goto B6f5f1d;
case 0x6f5f1f:c.instructions+=3;goto B6f5f1f;
case 0x6f5f22:c.instructions+=2;goto B6f5f22;
case 0x6f5f24:c.instructions+=1;goto B6f5f24;
case 0x6f5f29:goto L6f5f29;
case 0x6f5f2a:c.instructions+=4;goto B6f5f2a;
case 0x6f5f2c:c.instructions+=3;goto B6f5f2c;
case 0x6f5f2d:c.instructions+=2;goto B6f5f2d;
case 0x6f5f2e:c.instructions+=1;goto B6f5f2e;
case 0x6f5f33:goto L6f5f33;
case 0x6f5f36:c.instructions+=1;goto B6f5f36;
case 0x6f5f39:goto L6f5f39;
case 0x6f5f3b:c.instructions+=2;goto B6f5f3b;
case 0x6f5f3d:c.instructions+=1;goto B6f5f3d;
case 0x6f5f42:goto L6f5f42;
case 0x6f5f43:c.instructions+=6;goto B6f5f43;
case 0x6f5f44:c.instructions+=5;goto B6f5f44;
case 0x6f5f46:c.instructions+=4;goto B6f5f46;
case 0x6f5f49:c.instructions+=3;goto B6f5f49;
case 0x6f5f4b:c.instructions+=2;goto B6f5f4b;
case 0x6f5f4e:c.instructions+=1;goto B6f5f4e;
case 0x6f5f53:goto L6f5f53;
case 0x6f5f54:c.instructions+=5;goto B6f5f54;
case 0x6f5f55:c.instructions+=4;goto B6f5f55;
case 0x6f5f57:c.instructions+=3;goto B6f5f57;
case 0x6f5f59:c.instructions+=2;goto B6f5f59;
case 0x6f5f5b:c.instructions+=1;goto B6f5f5b;
case 0x6f5f5d:goto L6f5f5d;
case 0x6f5f60:c.instructions+=1;goto B6f5f60;
case 0x6f5f62:goto L6f5f62;
case 0x6f5f66:c.instructions+=1;goto B6f5f66;
case 0x6f5f68:goto L6f5f68;
case 0x6f5f6a:c.instructions+=1;goto B6f5f6a;
case 0x6f5f6c:goto L6f5f6c;
case 0x6f5f6e:c.instructions+=1;goto B6f5f6e;
case 0x6f5f70:goto L6f5f70;
case 0x6f5f72:c.instructions+=1;goto B6f5f72;
case 0x6f5f74:goto L6f5f74;
case 0x6f5f77:c.instructions+=1;goto B6f5f77;
case 0x6f5f7a:goto L6f5f7a;
case 0x6f5f7b:c.instructions+=2;goto B6f5f7b;
case 0x6f5f7e:c.instructions+=1;goto B6f5f7e;
case 0x6f5f80:goto L6f5f80;
case 0x6f5f82:c.instructions+=1;goto B6f5f82;
case 0x6f5f84:goto L6f5f84;
case 0x6f5f87:goto L6f5f87;
case 0x6f5f89:c.instructions+=5;goto B6f5f89;
case 0x6f5f8a:c.instructions+=4;goto B6f5f8a;
case 0x6f5f8b:c.instructions+=3;goto B6f5f8b;
case 0x6f5f8c:c.instructions+=2;goto B6f5f8c;
case 0x6f5f8d:c.instructions+=1;goto B6f5f8d;
case 0x6f5f8e:goto L6f5f8e;
case 0x6f5f8f:c.instructions+=16;goto B6f5f8f;
case 0x6f5f90:c.instructions+=15;goto B6f5f90;
case 0x6f5f92:c.instructions+=14;goto B6f5f92;
case 0x6f5f95:c.instructions+=13;goto B6f5f95;
case 0x6f5f96:c.instructions+=12;goto B6f5f96;
case 0x6f5f97:c.instructions+=11;goto B6f5f97;
case 0x6f5f99:c.instructions+=10;goto B6f5f99;
case 0x6f5f9e:c.instructions+=9;goto B6f5f9e;
case 0x6f5f9f:c.instructions+=8;goto B6f5f9f;
case 0x6f5fa0:c.instructions+=7;goto B6f5fa0;
case 0x6f5fa1:c.instructions+=6;goto B6f5fa1;
case 0x6f5fa2:c.instructions+=5;goto B6f5fa2;
case 0x6f5fa4:c.instructions+=4;goto B6f5fa4;
case 0x6f5fa6:c.instructions+=3;goto B6f5fa6;
case 0x6f5fa7:c.instructions+=2;goto B6f5fa7;
case 0x6f5fa8:c.instructions+=1;goto B6f5fa8;
case 0x6f5fa9:goto L6f5fa9;
case 0x6f5faa:c.instructions+=14;goto B6f5faa;
case 0x6f5fac:c.instructions+=13;goto B6f5fac;
case 0x6f5fad:c.instructions+=12;goto B6f5fad;
case 0x6f5fae:c.instructions+=11;goto B6f5fae;
case 0x6f5fb1:c.instructions+=10;goto B6f5fb1;
case 0x6f5fb3:c.instructions+=9;goto B6f5fb3;
case 0x6f5fb6:c.instructions+=8;goto B6f5fb6;
case 0x6f5fb8:c.instructions+=7;goto B6f5fb8;
case 0x6f5fbb:c.instructions+=6;goto B6f5fbb;
case 0x6f5fbe:c.instructions+=5;goto B6f5fbe;
case 0x6f5fc1:c.instructions+=4;goto B6f5fc1;
case 0x6f5fc2:c.instructions+=3;goto B6f5fc2;
case 0x6f5fc3:c.instructions+=2;goto B6f5fc3;
case 0x6f5fc4:c.instructions+=1;goto B6f5fc4;
case 0x6f5fc5:goto L6f5fc5;
case 0x6f5fc6:c.instructions+=9;goto B6f5fc6;
case 0x6f5fc8:c.instructions+=8;goto B6f5fc8;
case 0x6f5fc9:c.instructions+=7;goto B6f5fc9;
case 0x6f5fce:c.instructions+=6;goto B6f5fce;
case 0x6f5fd3:c.instructions+=5;goto B6f5fd3;
case 0x6f5fd5:c.instructions+=4;goto B6f5fd5;
case 0x6f5fd6:c.instructions+=3;goto B6f5fd6;
case 0x6f5fd9:c.instructions+=2;goto B6f5fd9;
case 0x6f5fde:c.instructions+=1;goto B6f5fde;
case 0x6f5fe0:goto L6f5fe0;
case 0x6f5fe5:goto L6f5fe5;
case 0x6f5fe6:c.instructions+=1;goto B6f5fe6;
case 0x6f5fe7:goto L6f5fe7;
case 0x6f5fe8:c.instructions+=8;goto B6f5fe8;
case 0x6f5fea:c.instructions+=7;goto B6f5fea;
case 0x6f5fed:c.instructions+=6;goto B6f5fed;
case 0x6f5fee:c.instructions+=5;goto B6f5fee;
case 0x6f5fef:c.instructions+=4;goto B6f5fef;
case 0x6f5ff0:c.instructions+=3;goto B6f5ff0;
case 0x6f5ff2:c.instructions+=2;goto B6f5ff2;
case 0x6f5ff7:c.instructions+=1;goto B6f5ff7;
case 0x6f5ffc:goto L6f5ffc;
case 0x6f5ffd:c.instructions+=2;goto B6f5ffd;
case 0x6f5ffe:c.instructions+=1;goto B6f5ffe;
default:missing_instruction(c.pc);}
B6f5001:L6f5001:{c.instructions+=24;NFSU2_TR(0x6f5001);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5004:{NFSU2_TR(0x6f5004);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f5007:{NFSU2_TR(0x6f5007);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f500a:{NFSU2_TR(0x6f500a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f500d:{NFSU2_TR(0x6f500d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5010:{NFSU2_TR(0x6f5010);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f5013:{NFSU2_TR(0x6f5013);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6f5015:{NFSU2_TR(0x6f5015);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffull))));
}
B6f501b:{NFSU2_TR(0x6f501b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6f501e:{NFSU2_TR(0x6f501e);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B6f5020:{NFSU2_TR(0x6f5020);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6f5022:{NFSU2_TR(0x6f5022);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f5025:{NFSU2_TR(0x6f5025);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6f5027:{NFSU2_TR(0x6f5027);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfeffffffull))));
}
B6f502c:{NFSU2_TR(0x6f502c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f502f:{NFSU2_TR(0x6f502f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B6f5032:{NFSU2_TR(0x6f5032);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B6f5033:{NFSU2_TR(0x6f5033);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x10000ull))));
}
B6f5039:{NFSU2_TR(0x6f5039);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6f503c:{NFSU2_TR(0x6f503c);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B6f503e:{NFSU2_TR(0x6f503e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6f5040:{NFSU2_TR(0x6f5040);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f5043:{NFSU2_TR(0x6f5043);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5044:{NFSU2_TR(0x6f5044);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5049ull));
TAIL_STATIC(0x6f4f70u,6f4);
}
B6f5049:L6f5049:{c.instructions+=4;NFSU2_TR(0x6f5049);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f504c:{NFSU2_TR(0x6f504c);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffbfffffull))));
}
B6f5052:{NFSU2_TR(0x6f5052);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f5054:{NFSU2_TR(0x6f5054);
if(r1(R+518)){{goto L6f5071;}}
}
B6f5056:L6f5056:{c.instructions+=10;NFSU2_TR(0x6f5056);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f5059:{NFSU2_TR(0x6f5059);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6f505b:{NFSU2_TR(0x6f505b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f505e:{NFSU2_TR(0x6f505e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B6f5061:{NFSU2_TR(0x6f5061);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6f5062:{NFSU2_TR(0x6f5062);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x4000ull))));
}
B6f5068:{NFSU2_TR(0x6f5068);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6f506b:{NFSU2_TR(0x6f506b);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+12))));
}
B6f506d:{NFSU2_TR(0x6f506d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6f506f:{NFSU2_TR(0x6f506f);
{goto L6f5073;}
}
B6f5071:L6f5071:{c.instructions+=1;NFSU2_TR(0x6f5071);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6f5073:L6f5073:{c.instructions+=79;NFSU2_TR(0x6f5073);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f5076:{NFSU2_TR(0x6f5076);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6f5078:{NFSU2_TR(0x6f5078);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6f507a:{NFSU2_TR(0x6f507a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffeffffull))));
}
B6f5080:{NFSU2_TR(0x6f5080);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f5083:{NFSU2_TR(0x6f5083);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B6f5086:{NFSU2_TR(0x6f5086);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5087:{NFSU2_TR(0x6f5087);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6f5088:{NFSU2_TR(0x6f5088);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x100ull))));
}
B6f508e:{NFSU2_TR(0x6f508e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6f5091:{NFSU2_TR(0x6f5091);
__builtin_memmove((R+0),(R+8),4);
}
B6f5093:{NFSU2_TR(0x6f5093);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B6f5095:{NFSU2_TR(0x6f5095);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6f5097:{NFSU2_TR(0x6f5097);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6f5099:{NFSU2_TR(0x6f5099);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f509c:{NFSU2_TR(0x6f509c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffdffffull))));
}
B6f50a1:{NFSU2_TR(0x6f50a1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f50a4:{NFSU2_TR(0x6f50a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B6f50a7:{NFSU2_TR(0x6f50a7);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6f50a8:{NFSU2_TR(0x6f50a8);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x200ull))));
}
B6f50ae:{NFSU2_TR(0x6f50ae);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6f50b1:{NFSU2_TR(0x6f50b1);
__builtin_memmove((R+4),(R+8),4);
}
B6f50b3:{NFSU2_TR(0x6f50b3);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B6f50b5:{NFSU2_TR(0x6f50b5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6f50b7:{NFSU2_TR(0x6f50b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6f50b9:{NFSU2_TR(0x6f50b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f50bc:{NFSU2_TR(0x6f50bc);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffbffffull))));
}
B6f50c2:{NFSU2_TR(0x6f50c2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f50c5:{NFSU2_TR(0x6f50c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B6f50c8:{NFSU2_TR(0x6f50c8);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6f50c9:{NFSU2_TR(0x6f50c9);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x400ull))));
}
B6f50cf:{NFSU2_TR(0x6f50cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6f50d2:{NFSU2_TR(0x6f50d2);
__builtin_memmove((R+0),(R+8),4);
}
B6f50d4:{NFSU2_TR(0x6f50d4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B6f50d6:{NFSU2_TR(0x6f50d6);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6f50d8:{NFSU2_TR(0x6f50d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6f50da:{NFSU2_TR(0x6f50da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f50dd:{NFSU2_TR(0x6f50dd);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff7ffffull))));
}
B6f50e2:{NFSU2_TR(0x6f50e2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f50e5:{NFSU2_TR(0x6f50e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B6f50e8:{NFSU2_TR(0x6f50e8);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6f50e9:{NFSU2_TR(0x6f50e9);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x800ull))));
}
B6f50ef:{NFSU2_TR(0x6f50ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6f50f2:{NFSU2_TR(0x6f50f2);
__builtin_memmove((R+4),(R+8),4);
}
B6f50f4:{NFSU2_TR(0x6f50f4);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B6f50f6:{NFSU2_TR(0x6f50f6);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6f50f8:{NFSU2_TR(0x6f50f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6f50fa:{NFSU2_TR(0x6f50fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f50fd:{NFSU2_TR(0x6f50fd);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffefffffull))));
}
B6f5103:{NFSU2_TR(0x6f5103);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f5106:{NFSU2_TR(0x6f5106);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B6f5109:{NFSU2_TR(0x6f5109);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6f510a:{NFSU2_TR(0x6f510a);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1000ull))));
}
B6f5110:{NFSU2_TR(0x6f5110);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6f5113:{NFSU2_TR(0x6f5113);
__builtin_memmove((R+0),(R+8),4);
}
B6f5115:{NFSU2_TR(0x6f5115);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B6f5117:{NFSU2_TR(0x6f5117);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6f5119:{NFSU2_TR(0x6f5119);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6f511b:{NFSU2_TR(0x6f511b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f511e:{NFSU2_TR(0x6f511e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffdfffffull))));
}
B6f5123:{NFSU2_TR(0x6f5123);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f5126:{NFSU2_TR(0x6f5126);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B6f5129:{NFSU2_TR(0x6f5129);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6f512a:{NFSU2_TR(0x6f512a);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x2000ull))));
}
B6f5130:{NFSU2_TR(0x6f5130);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6f5133:{NFSU2_TR(0x6f5133);
__builtin_memmove((R+4),(R+8),4);
}
B6f5135:{NFSU2_TR(0x6f5135);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B6f5137:{NFSU2_TR(0x6f5137);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6f5139:{NFSU2_TR(0x6f5139);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6f513b:{NFSU2_TR(0x6f513b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f513e:{NFSU2_TR(0x6f513e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xff7fffffull))));
}
B6f5144:{NFSU2_TR(0x6f5144);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f5147:{NFSU2_TR(0x6f5147);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B6f514a:{NFSU2_TR(0x6f514a);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6f514b:{NFSU2_TR(0x6f514b);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x8000ull))));
}
B6f5151:{NFSU2_TR(0x6f5151);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6f5154:{NFSU2_TR(0x6f5154);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B6f5156:{NFSU2_TR(0x6f5156);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6f5158:{NFSU2_TR(0x6f5158);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f515dull));
TAIL_STATIC(0x6f4ab0u,6f4);
}
B6f515d:L6f515d:{c.instructions+=6;NFSU2_TR(0x6f515d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f5160:{NFSU2_TR(0x6f5160);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x20ull))));
}
B6f5163:{NFSU2_TR(0x6f5163);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f5166:{NFSU2_TR(0x6f5166);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6f5168:{NFSU2_TR(0x6f5168);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B6f516a:{NFSU2_TR(0x6f516a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f5179;}}
}
B6f516c:L6f516c:{c.instructions+=7;NFSU2_TR(0x6f516c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f516d:{NFSU2_TR(0x6f516d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5170:{NFSU2_TR(0x6f5170);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5173:{NFSU2_TR(0x6f5173);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f5174:{NFSU2_TR(0x6f5174);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f5175:{NFSU2_TR(0x6f5175);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f5176:{NFSU2_TR(0x6f5176);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5179:L6f5179:{c.instructions+=8;NFSU2_TR(0x6f5179);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+24)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f517b:{NFSU2_TR(0x6f517b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f517c:{NFSU2_TR(0x6f517c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f517f:{NFSU2_TR(0x6f517f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5182:{NFSU2_TR(0x6f5182);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f5183:{NFSU2_TR(0x6f5183);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f5184:{NFSU2_TR(0x6f5184);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f5185:{NFSU2_TR(0x6f5185);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5190:L6f5190:{c.instructions+=11;NFSU2_TR(0x6f5190);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5191:{NFSU2_TR(0x6f5191);
__builtin_memmove((R+20),(R+16),4);
}
B6f5193:{NFSU2_TR(0x6f5193);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5194:{NFSU2_TR(0x6f5194);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f5197:{NFSU2_TR(0x6f5197);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6f519a:{NFSU2_TR(0x6f519a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f519b:{NFSU2_TR(0x6f519b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f519e:{NFSU2_TR(0x6f519e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f519f:{NFSU2_TR(0x6f519f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6f51a1:{NFSU2_TR(0x6f51a1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f51a3:{NFSU2_TR(0x6f51a3);
if(r1(R+518)){{goto L6f51cd;}}
}
B6f51a5:L6f51a5:{c.instructions+=3;NFSU2_TR(0x6f51a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f51a8:{NFSU2_TR(0x6f51a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f51aa:{NFSU2_TR(0x6f51aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f51b8;}}
}
B6f51ac:L6f51ac:{c.instructions+=3;NFSU2_TR(0x6f51ac);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x9full))));
}
B6f51b2:{NFSU2_TR(0x6f51b2);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffffff80ull))));
}
B6f51b5:{NFSU2_TR(0x6f51b5);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x20ull))));
}
B6f51b8:L6f51b8:{c.instructions+=3;NFSU2_TR(0x6f51b8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f51b9:{NFSU2_TR(0x6f51b9);
__builtin_memmove((R+4),(R+24),4);
}
B6f51bb:{NFSU2_TR(0x6f51bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f51c0ull));
TAIL_STATIC(0x6f4fe0u,6f4);
}
B6f51c0:L6f51c0:{c.instructions+=3;NFSU2_TR(0x6f51c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f51c1:{NFSU2_TR(0x6f51c1);
__builtin_memmove((R+28),(R+24),4);
}
B6f51c3:{NFSU2_TR(0x6f51c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f51c8ull));
TAIL_STATIC(0x6f4ab0u,6f4);
}
B6f51c8:L6f51c8:{c.instructions+=2;NFSU2_TR(0x6f51c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f51cb:{NFSU2_TR(0x6f51cb);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B6f51cd:L6f51cd:{c.instructions+=2;NFSU2_TR(0x6f51cd);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6f51d1:{NFSU2_TR(0x6f51d1);
if(r1(R+518)){{goto L6f520c;}}
}
B6f51d3:L6f51d3:{c.instructions+=3;NFSU2_TR(0x6f51d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f51d6:{NFSU2_TR(0x6f51d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f51d8:{NFSU2_TR(0x6f51d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f51f7;}}
}
B6f51da:L6f51da:{c.instructions+=5;NFSU2_TR(0x6f51da);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2full))));
}
B6f51dd:{NFSU2_TR(0x6f51dd);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffff0ull))));
}
B6f51e0:{NFSU2_TR(0x6f51e0);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x20ull))));
}
B6f51e3:{NFSU2_TR(0x6f51e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f51e5:{NFSU2_TR(0x6f51e5);
if(r1(R+518)){{goto L6f51f7;}}
}
B6f51e7:L6f51e7:{c.instructions+=2;NFSU2_TR(0x6f51e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f51e9:{NFSU2_TR(0x6f51e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f51f0;}}
}
B6f51eb:L6f51eb:{c.instructions+=2;NFSU2_TR(0x6f51eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f51ee:{NFSU2_TR(0x6f51ee);
{goto L6f51f7;}
}
B6f51f0:L6f51f0:{c.instructions+=3;NFSU2_TR(0x6f51f0);
__builtin_memmove((R+0),(R+24),4);
}
B6f51f2:{NFSU2_TR(0x6f51f2);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B6f51f4:{NFSU2_TR(0x6f51f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f51f7:L6f51f7:{c.instructions+=3;NFSU2_TR(0x6f51f7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f51f8:{NFSU2_TR(0x6f51f8);
__builtin_memmove((R+4),(R+24),4);
}
B6f51fa:{NFSU2_TR(0x6f51fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f51ffull));
TAIL_STATIC(0x6f4dc0u,6f4);
}
B6f51ff:L6f51ff:{c.instructions+=3;NFSU2_TR(0x6f51ff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5200:{NFSU2_TR(0x6f5200);
__builtin_memmove((R+28),(R+24),4);
}
B6f5202:{NFSU2_TR(0x6f5202);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5207ull));
TAIL_STATIC(0x6f4c10u,6f4);
}
B6f5207:L6f5207:{c.instructions+=2;NFSU2_TR(0x6f5207);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f520a:{NFSU2_TR(0x6f520a);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B6f520c:L6f520c:{c.instructions+=3;NFSU2_TR(0x6f520c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f520f:{NFSU2_TR(0x6f520f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f5212:{NFSU2_TR(0x6f5212);
if(r1(R+518)){{goto L6f523e;}}
}
B6f5214:L6f5214:{c.instructions+=5;NFSU2_TR(0x6f5214);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2full))));
}
B6f5217:{NFSU2_TR(0x6f5217);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffff0ull))));
}
B6f521a:{NFSU2_TR(0x6f521a);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x20ull))));
}
B6f521d:{NFSU2_TR(0x6f521d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f521f:{NFSU2_TR(0x6f521f);
if(r1(R+518)){{goto L6f5231;}}
}
B6f5221:L6f5221:{c.instructions+=2;NFSU2_TR(0x6f5221);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f5223:{NFSU2_TR(0x6f5223);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f522a;}}
}
B6f5225:L6f5225:{c.instructions+=2;NFSU2_TR(0x6f5225);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5228:{NFSU2_TR(0x6f5228);
{goto L6f5231;}
}
B6f522a:L6f522a:{c.instructions+=3;NFSU2_TR(0x6f522a);
__builtin_memmove((R+4),(R+24),4);
}
B6f522c:{NFSU2_TR(0x6f522c);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B6f522e:{NFSU2_TR(0x6f522e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5231:L6f5231:{c.instructions+=3;NFSU2_TR(0x6f5231);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5232:{NFSU2_TR(0x6f5232);
__builtin_memmove((R+4),(R+24),4);
}
B6f5234:{NFSU2_TR(0x6f5234);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5239ull));
TAIL_STATIC(0x6f4e50u,6f4);
}
B6f5239:L6f5239:{c.instructions+=2;NFSU2_TR(0x6f5239);
__builtin_memmove((R+28),(R+24),4);
}
B6f523b:{NFSU2_TR(0x6f523b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B6f523e:L6f523e:{c.instructions+=2;NFSU2_TR(0x6f523e);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6f5242:{NFSU2_TR(0x6f5242);
if(r1(R+518)){{goto L6f5277;}}
}
B6f5244:L6f5244:{c.instructions+=5;NFSU2_TR(0x6f5244);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2full))));
__builtin_memmove((R+4),(U+0),4);
}
B6f5247:{NFSU2_TR(0x6f5247);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff0ull))));
}
B6f524a:{NFSU2_TR(0x6f524a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x20ull))));
}
B6f524d:{NFSU2_TR(0x6f524d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f524f:{NFSU2_TR(0x6f524f);
if(r1(R+518)){{goto L6f5261;}}
}
B6f5251:L6f5251:{c.instructions+=2;NFSU2_TR(0x6f5251);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f5253:{NFSU2_TR(0x6f5253);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f525a;}}
}
B6f5255:L6f5255:{c.instructions+=2;NFSU2_TR(0x6f5255);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5258:{NFSU2_TR(0x6f5258);
{goto L6f5261;}
}
B6f525a:L6f525a:{c.instructions+=3;NFSU2_TR(0x6f525a);
__builtin_memmove((R+8),(R+4),4);
}
B6f525c:{NFSU2_TR(0x6f525c);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B6f525e:{NFSU2_TR(0x6f525e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5261:L6f5261:{c.instructions+=2;NFSU2_TR(0x6f5261);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5262:{NFSU2_TR(0x6f5262);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5267ull));
TAIL_STATIC(0x6f4ea0u,6f4);
}
B6f5267:L6f5267:{c.instructions+=4;NFSU2_TR(0x6f5267);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f526d:{NFSU2_TR(0x6f526d);
u8 U[32];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7cull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6f5271:{NFSU2_TR(0x6f5271);
__builtin_memmove((R+28),(R+4),4);
}
B6f5273:{NFSU2_TR(0x6f5273);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6f5277:L6f5277:{c.instructions+=3;NFSU2_TR(0x6f5277);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6f527a:{NFSU2_TR(0x6f527a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6f527c:{NFSU2_TR(0x6f527c);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6f52af;}}
}
B6f527e:L6f527e:{c.instructions+=5;NFSU2_TR(0x6f527e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1full))));
}
B6f5281:{NFSU2_TR(0x6f5281);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffff0ull))));
}
B6f5284:{NFSU2_TR(0x6f5284);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x10ull))));
}
B6f5287:{NFSU2_TR(0x6f5287);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f5289:{NFSU2_TR(0x6f5289);
if(r1(R+518)){{goto L6f529b;}}
}
B6f528b:L6f528b:{c.instructions+=2;NFSU2_TR(0x6f528b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f528d:{NFSU2_TR(0x6f528d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f5294;}}
}
B6f528f:L6f528f:{c.instructions+=2;NFSU2_TR(0x6f528f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5292:{NFSU2_TR(0x6f5292);
{goto L6f529b;}
}
B6f5294:L6f5294:{c.instructions+=3;NFSU2_TR(0x6f5294);
__builtin_memmove((R+4),(R+24),4);
}
B6f5296:{NFSU2_TR(0x6f5296);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B6f5298:{NFSU2_TR(0x6f5298);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f529b:L6f529b:{c.instructions+=3;NFSU2_TR(0x6f529b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f529c:{NFSU2_TR(0x6f529c);
__builtin_memmove((R+4),(R+24),4);
}
B6f529e:{NFSU2_TR(0x6f529e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f52a3ull));
TAIL_STATIC(0x6f4f00u,6f4);
}
B6f52a3:L6f52a3:{c.instructions+=3;NFSU2_TR(0x6f52a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f52a9:{NFSU2_TR(0x6f52a9);
__builtin_memmove((R+28),(R+24),4);
}
B6f52ab:{NFSU2_TR(0x6f52ab);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6f52af:L6f52af:{c.instructions+=2;NFSU2_TR(0x6f52af);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6f52b3:{NFSU2_TR(0x6f52b3);
if(r1(R+518)){{goto L6f5302;}}
}
B6f52b5:L6f52b5:{c.instructions+=5;NFSU2_TR(0x6f52b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1full))));
__builtin_memmove((R+4),(U+0),4);
}
B6f52b8:{NFSU2_TR(0x6f52b8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff0ull))));
}
B6f52bb:{NFSU2_TR(0x6f52bb);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x10ull))));
}
B6f52be:{NFSU2_TR(0x6f52be);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f52c0:{NFSU2_TR(0x6f52c0);
if(r1(R+518)){{goto L6f52d2;}}
}
B6f52c2:L6f52c2:{c.instructions+=2;NFSU2_TR(0x6f52c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f52c4:{NFSU2_TR(0x6f52c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f52cb;}}
}
B6f52c6:L6f52c6:{c.instructions+=2;NFSU2_TR(0x6f52c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f52c9:{NFSU2_TR(0x6f52c9);
{goto L6f52d2;}
}
B6f52cb:L6f52cb:{c.instructions+=3;NFSU2_TR(0x6f52cb);
__builtin_memmove((R+0),(R+4),4);
}
B6f52cd:{NFSU2_TR(0x6f52cd);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B6f52cf:{NFSU2_TR(0x6f52cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f52d2:L6f52d2:{c.instructions+=2;NFSU2_TR(0x6f52d2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f52d3:{NFSU2_TR(0x6f52d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f52d8ull));
TAIL_STATIC(0x6f4d40u,6f4);
}
B6f52d8:L6f52d8:{c.instructions+=7;NFSU2_TR(0x6f52d8);
u8 U[1];
w1(U+0,u8(0x6full));
s1(u32(r4(R+4)),r1(U+0));
}
B6f52db:{NFSU2_TR(0x6f52db);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f52e1:{NFSU2_TR(0x6f52e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f52e4:{NFSU2_TR(0x6f52e4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6f52e6:{NFSU2_TR(0x6f52e6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x11ull))));
}
B6f52e9:{NFSU2_TR(0x6f52e9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f52eb:{NFSU2_TR(0x6f52eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f52f5;}}
}
B6f52ed:L6f52ed:{c.instructions+=3;NFSU2_TR(0x6f52ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f52f0:{NFSU2_TR(0x6f52f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f52f3:{NFSU2_TR(0x6f52f3);
{goto L6f5300;}
}
B6f52f5:L6f52f5:{c.instructions+=4;NFSU2_TR(0x6f52f5);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B6f52f7:{NFSU2_TR(0x6f52f7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xfffffff0ull))));
}
B6f52fa:{NFSU2_TR(0x6f52fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f52fd:{NFSU2_TR(0x6f52fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5300:L6f5300:{c.instructions+=1;NFSU2_TR(0x6f5300);
__builtin_memmove((R+28),(R+4),4);
}
B6f5302:L6f5302:{c.instructions+=2;NFSU2_TR(0x6f5302);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f5304:{NFSU2_TR(0x6f5304);
if(r1(R+518)){{goto L6f530d;}}
}
B6f5306:L6f5306:{c.instructions+=1;NFSU2_TR(0x6f5306);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f530d:L6f530d:{c.instructions+=5;NFSU2_TR(0x6f530d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f530e:{NFSU2_TR(0x6f530e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f530f:{NFSU2_TR(0x6f530f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f5310:{NFSU2_TR(0x6f5310);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f5311:{NFSU2_TR(0x6f5311);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5320:L6f5320:{c.instructions+=13;NFSU2_TR(0x6f5320);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5321:{NFSU2_TR(0x6f5321);
__builtin_memmove((R+20),(R+16),4);
}
B6f5323:{NFSU2_TR(0x6f5323);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f5326:{NFSU2_TR(0x6f5326);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5327:{NFSU2_TR(0x6f5327);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5328:{NFSU2_TR(0x6f5328);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f532b:{NFSU2_TR(0x6f532b);
u8 U[4];
w4(U+0,u32(0x2d2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5330:{NFSU2_TR(0x6f5330);
u8 U[4];
w4(U+0,u32(0x7c29d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5335:{NFSU2_TR(0x6f5335);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5336:{NFSU2_TR(0x6f5336);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5338:{NFSU2_TR(0x6f5338);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f533d:{NFSU2_TR(0x6f533d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f533e:{NFSU2_TR(0x6f533e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5343ull));
TAIL_STATIC(0x6f4c90u,6f4);
}
B6f5343:L6f5343:{c.instructions+=4;NFSU2_TR(0x6f5343);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f5346:{NFSU2_TR(0x6f5346);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5347:{NFSU2_TR(0x6f5347);
u8 U[4];
w4(U+0,u32(0x7c2a10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f534c:{NFSU2_TR(0x6f534c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5351ull));
TAIL_STATIC(0x6f4890u,6f4);
}
B6f5351:L6f5351:{c.instructions+=4;NFSU2_TR(0x6f5351);
__builtin_memmove((R+24),(R+0),4);
}
B6f5353:{NFSU2_TR(0x6f5353);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5354:{NFSU2_TR(0x6f5354);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5355:{NFSU2_TR(0x6f5355);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f535aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5190u);}goto L6f5190;}
}
B6f535a:L6f535a:{c.instructions+=10;NFSU2_TR(0x6f535a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f535c:{NFSU2_TR(0x6f535c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B6f535f:{NFSU2_TR(0x6f535f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffbffull))));
}
B6f5364:{NFSU2_TR(0x6f5364);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f5369:{NFSU2_TR(0x6f5369);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6f536b:{NFSU2_TR(0x6f536b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f536c:{NFSU2_TR(0x6f536c);
__builtin_memmove((R+0),(R+24),4);
}
B6f536e:{NFSU2_TR(0x6f536e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f536f:{NFSU2_TR(0x6f536f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f5370:{NFSU2_TR(0x6f5370);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5380:L6f5380:{c.instructions+=6;NFSU2_TR(0x6f5380);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5381:{NFSU2_TR(0x6f5381);
__builtin_memmove((R+20),(R+16),4);
}
B6f5383:{NFSU2_TR(0x6f5383);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f5386:{NFSU2_TR(0x6f5386);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f5389:{NFSU2_TR(0x6f5389);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f538c:{NFSU2_TR(0x6f538c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6f53c6;}}
}
B6f538e:L6f538e:{c.instructions+=2;NFSU2_TR(0x6f538e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6f53f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6f5395:{NFSU2_TR(0x6f5395);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6f53d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f539c:L6f539c:{c.instructions+=3;NFSU2_TR(0x6f539c);
w4(R+0,u32(0x79ull));
}
B6f53a1:{NFSU2_TR(0x6f53a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f53a2:{NFSU2_TR(0x6f53a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f53a3:L6f53a3:{c.instructions+=3;NFSU2_TR(0x6f53a3);
w4(R+0,u32(0x7bull));
}
B6f53a8:{NFSU2_TR(0x6f53a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f53a9:{NFSU2_TR(0x6f53a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f53aa:L6f53aa:{c.instructions+=3;NFSU2_TR(0x6f53aa);
w4(R+0,u32(0x7eull));
}
B6f53af:{NFSU2_TR(0x6f53af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f53b0:{NFSU2_TR(0x6f53b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f53b1:L6f53b1:{c.instructions+=3;NFSU2_TR(0x6f53b1);
w4(R+0,u32(0x78ull));
}
B6f53b6:{NFSU2_TR(0x6f53b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f53b7:{NFSU2_TR(0x6f53b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f53b8:L6f53b8:{c.instructions+=3;NFSU2_TR(0x6f53b8);
w4(R+0,u32(0x7full));
}
B6f53bd:{NFSU2_TR(0x6f53bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f53be:{NFSU2_TR(0x6f53be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f53bf:L6f53bf:{c.instructions+=3;NFSU2_TR(0x6f53bf);
w4(R+0,u32(0x7dull));
}
B6f53c4:{NFSU2_TR(0x6f53c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f53c5:{NFSU2_TR(0x6f53c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f53c6:L6f53c6:{c.instructions+=3;NFSU2_TR(0x6f53c6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f53c7:{NFSU2_TR(0x6f53c7);
u8 U[4];
w4(U+0,u32(0x7c2b20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f53cc:{NFSU2_TR(0x6f53cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f53d1ull));
{goto L6f5580;}
}
B6f53d1:L6f53d1:{c.instructions+=4;NFSU2_TR(0x6f53d1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6f53d4:{NFSU2_TR(0x6f53d4);
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
B6f53d6:{NFSU2_TR(0x6f53d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f53d7:{NFSU2_TR(0x6f53d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5420:L6f5420:{c.instructions+=11;NFSU2_TR(0x6f5420);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5421:{NFSU2_TR(0x6f5421);
__builtin_memmove((R+20),(R+16),4);
}
B6f5423:{NFSU2_TR(0x6f5423);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f5426:{NFSU2_TR(0x6f5426);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f5429:{NFSU2_TR(0x6f5429);
w4(R+8,u32(0x1ull));
}
B6f542e:{NFSU2_TR(0x6f542e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
}
B6f5431:{NFSU2_TR(0x6f5431);
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
B6f5434:{NFSU2_TR(0x6f5434);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6f5436:{NFSU2_TR(0x6f5436);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5439:{NFSU2_TR(0x6f5439);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f5440:{NFSU2_TR(0x6f5440);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6f54d0;}}
}
B6f5446:L6f5446:{c.instructions+=1;NFSU2_TR(0x6f5446);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6f54d4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f544d:L6f544d:{c.instructions+=5;NFSU2_TR(0x6f544d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6f544f:{NFSU2_TR(0x6f544f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f5456:{NFSU2_TR(0x6f5456);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5459:{NFSU2_TR(0x6f5459);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f545a:{NFSU2_TR(0x6f545a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f545b:L6f545b:{c.instructions+=6;NFSU2_TR(0x6f545b);
w4(R+4,u32(0x2ull));
}
B6f5460:{NFSU2_TR(0x6f5460);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6f5462:{NFSU2_TR(0x6f5462);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5465:{NFSU2_TR(0x6f5465);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5468:{NFSU2_TR(0x6f5468);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f5469:{NFSU2_TR(0x6f5469);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f546a:L6f546a:{c.instructions+=5;NFSU2_TR(0x6f546a);
u8 U[4];
w4(U+0,u32(0x4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6f5470:{NFSU2_TR(0x6f5470);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f5477:{NFSU2_TR(0x6f5477);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f547a:{NFSU2_TR(0x6f547a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f547b:{NFSU2_TR(0x6f547b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f547c:L6f547c:{c.instructions+=5;NFSU2_TR(0x6f547c);
u8 U[4];
w4(U+0,u32(0x8ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6f5482:{NFSU2_TR(0x6f5482);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f5489:{NFSU2_TR(0x6f5489);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f548c:{NFSU2_TR(0x6f548c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f548d:{NFSU2_TR(0x6f548d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f548e:L6f548e:{c.instructions+=6;NFSU2_TR(0x6f548e);
w4(R+4,u32(0x2ull));
}
B6f5493:{NFSU2_TR(0x6f5493);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6f5495:{NFSU2_TR(0x6f5495);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5498:{NFSU2_TR(0x6f5498);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f549b:{NFSU2_TR(0x6f549b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f549c:{NFSU2_TR(0x6f549c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f549d:L6f549d:{c.instructions+=6;NFSU2_TR(0x6f549d);
w4(R+4,u32(0x2ull));
}
B6f54a2:{NFSU2_TR(0x6f54a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6f54a4:{NFSU2_TR(0x6f54a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f54a7:{NFSU2_TR(0x6f54a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f54aa:{NFSU2_TR(0x6f54aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f54ab:{NFSU2_TR(0x6f54ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f54ac:L6f54ac:{c.instructions+=6;NFSU2_TR(0x6f54ac);
w4(R+4,u32(0x2ull));
}
B6f54b1:{NFSU2_TR(0x6f54b1);
u8 U[4];
w4(U+0,u32(0x4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6f54b7:{NFSU2_TR(0x6f54b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f54ba:{NFSU2_TR(0x6f54ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f54bd:{NFSU2_TR(0x6f54bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f54be:{NFSU2_TR(0x6f54be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f54bf:L6f54bf:{c.instructions+=4;NFSU2_TR(0x6f54bf);
w4(R+4,u32(0x2ull));
}
B6f54c4:{NFSU2_TR(0x6f54c4);
u8 U[4];
w4(U+0,u32(0x8ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6f54ca:{NFSU2_TR(0x6f54ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f54cd:{NFSU2_TR(0x6f54cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f54d0:L6f54d0:{c.instructions+=2;NFSU2_TR(0x6f54d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f54d1:{NFSU2_TR(0x6f54d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5500:L6f5500:{c.instructions+=8;NFSU2_TR(0x6f5500);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5501:{NFSU2_TR(0x6f5501);
__builtin_memmove((R+20),(R+16),4);
}
B6f5503:{NFSU2_TR(0x6f5503);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6f5506:{NFSU2_TR(0x6f5506);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f5509:{NFSU2_TR(0x6f5509);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f550c:{NFSU2_TR(0x6f550c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f550d:{NFSU2_TR(0x6f550d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f550e:{NFSU2_TR(0x6f550e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5513ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5420u);}goto L6f5420;}
}
B6f5513:L6f5513:{c.instructions+=10;NFSU2_TR(0x6f5513);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f5516:{NFSU2_TR(0x6f5516);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6f551a:{NFSU2_TR(0x6f551a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f551d:{NFSU2_TR(0x6f551d);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B6f5521:{NFSU2_TR(0x6f5521);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6f5522:{NFSU2_TR(0x6f5522);
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
B6f5525:{NFSU2_TR(0x6f5525);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6f5525);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6f5525);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B6f5527:{NFSU2_TR(0x6f5527);
__builtin_memmove((R+16),(R+20),4);
}
B6f5529:{NFSU2_TR(0x6f5529);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f552a:{NFSU2_TR(0x6f552a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5530:L6f5530:{c.instructions+=6;NFSU2_TR(0x6f5530);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5531:{NFSU2_TR(0x6f5531);
__builtin_memmove((R+20),(R+16),4);
}
B6f5533:{NFSU2_TR(0x6f5533);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x200ull))));
}
B6f5539:{NFSU2_TR(0x6f5539);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f553c:{NFSU2_TR(0x6f553c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f553e:{NFSU2_TR(0x6f553e);
if(r1(R+518)){{goto L6f5556;}}
}
B6f5540:L6f5540:{c.instructions+=6;NFSU2_TR(0x6f5540);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f5543:{NFSU2_TR(0x6f5543);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5544:{NFSU2_TR(0x6f5544);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5545:{NFSU2_TR(0x6f5545);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe00ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6f554b:{NFSU2_TR(0x6f554b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f554c:{NFSU2_TR(0x6f554c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5551ull));
TAIL_STATIC(0x75c7dcu,75c);
}
B6f5551:L6f5551:{c.instructions+=2;NFSU2_TR(0x6f5551);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f5554:{NFSU2_TR(0x6f5554);
{goto L6f555d;}
}
B6f5556:L6f5556:{c.instructions+=1;NFSU2_TR(0x6f5556);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe00ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6f555d:L6f555d:{c.instructions+=4;NFSU2_TR(0x6f555d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f5563:{NFSU2_TR(0x6f5563);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5564:{NFSU2_TR(0x6f5564);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5569:{NFSU2_TR(0x6f5569);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f556eull));
TAIL_STATIC(0x75f3c7u,75f);
}
B6f556e:L6f556e:{c.instructions+=2;NFSU2_TR(0x6f556e);
u8 U[4];
w4(U+0,u32(0x819f30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5573:{NFSU2_TR(0x6f5573);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5578ull));
TAIL_STATIC(0x75f58du,75f);
}
B6f5578:L6f5578:{c.instructions+=2;NFSU2_TR(0x6f5578);
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
B6f557b:{NFSU2_TR(0x6f557b);
u8 U[4];
{SPILL();c.pc=0x6f557bu;V r_=user_op(c,262160,{V(0x3ull)});SPILL();wv<4>((U+0),r_);}
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
{u32 t_=u32(u8(0x0ull));TAIL_DYNAMIC(t_);}
}
B6f5580:L6f5580:{c.instructions+=10;NFSU2_TR(0x6f5580);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5581:{NFSU2_TR(0x6f5581);
__builtin_memmove((R+20),(R+16),4);
}
B6f5583:{NFSU2_TR(0x6f5583);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x200ull))));
}
B6f5589:{NFSU2_TR(0x6f5589);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f558c:{NFSU2_TR(0x6f558c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f558f:{NFSU2_TR(0x6f558f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5590:{NFSU2_TR(0x6f5590);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5591:{NFSU2_TR(0x6f5591);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe00ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6f5597:{NFSU2_TR(0x6f5597);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5598:{NFSU2_TR(0x6f5598);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f559dull));
TAIL_STATIC(0x75c7dcu,75c);
}
B6f559d:L6f559d:{c.instructions+=4;NFSU2_TR(0x6f559d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f55a3:{NFSU2_TR(0x6f55a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f55a4:{NFSU2_TR(0x6f55a4);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f55a9:{NFSU2_TR(0x6f55a9);
u8 U[4];
__builtin_memmove((U+0),gp(0x813a98),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f55afull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f55af:L6f55af:{c.instructions+=4;NFSU2_TR(0x6f55af);
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
B6f55b2:{NFSU2_TR(0x6f55b2);
__builtin_memmove((R+16),(R+20),4);
}
B6f55b4:{NFSU2_TR(0x6f55b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f55b5:{NFSU2_TR(0x6f55b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f55b6:L6f55b6:{c.instructions+=5;NFSU2_TR(0x6f55b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f55b7:{NFSU2_TR(0x6f55b7);
__builtin_memmove((R+24),(R+4),4);
}
B6f55b9:{NFSU2_TR(0x6f55b9);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f55bb:{NFSU2_TR(0x6f55bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f55bc:{NFSU2_TR(0x6f55bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f55c1ull));
TAIL_STATIC(0x6fafedu,6fa);
}
B6f55c1:L6f55c1:{c.instructions+=5;NFSU2_TR(0x6f55c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f55c2:{NFSU2_TR(0x6f55c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f55c3:{NFSU2_TR(0x6f55c3);
__builtin_memmove((R+0),(R+24),4);
}
B6f55c5:{NFSU2_TR(0x6f55c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f55c6:{NFSU2_TR(0x6f55c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f55c7:L6f55c7:{c.instructions+=3;NFSU2_TR(0x6f55c7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f55ca:{NFSU2_TR(0x6f55ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f55cb:{NFSU2_TR(0x6f55cb);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831b0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f55d1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f55d1:L6f55d1:{c.instructions+=1;NFSU2_TR(0x6f55d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f55d2:L6f55d2:{c.instructions+=3;NFSU2_TR(0x6f55d2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f55d5:{NFSU2_TR(0x6f55d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f55d6:{NFSU2_TR(0x6f55d6);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831b8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f55dcull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f55dc:L6f55dc:{c.instructions+=1;NFSU2_TR(0x6f55dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f55dd:L6f55dd:{c.instructions+=3;NFSU2_TR(0x6f55dd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f55e0:{NFSU2_TR(0x6f55e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f55e1:{NFSU2_TR(0x6f55e1);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831a8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f55e7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f55e7:L6f55e7:{c.instructions+=1;NFSU2_TR(0x6f55e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f55e8:L6f55e8:{c.instructions+=3;NFSU2_TR(0x6f55e8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f55eb:{NFSU2_TR(0x6f55eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f55ec:{NFSU2_TR(0x6f55ec);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831bc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f55f2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f55f2:L6f55f2:{c.instructions+=1;NFSU2_TR(0x6f55f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f55f3:L6f55f3:{c.instructions+=9;NFSU2_TR(0x6f55f3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f55f4:{NFSU2_TR(0x6f55f4);
__builtin_memmove((R+20),(R+16),4);
}
B6f55f6:{NFSU2_TR(0x6f55f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f55f7:{NFSU2_TR(0x6f55f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f55f8:{NFSU2_TR(0x6f55f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f55f9:{NFSU2_TR(0x6f55f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f55fc:{NFSU2_TR(0x6f55fc);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6f55ff:{NFSU2_TR(0x6f55ff);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f5601:{NFSU2_TR(0x6f5601);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f5607;}}
}
B6f5603:L6f5603:{c.instructions+=2;NFSU2_TR(0x6f5603);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6f5605:{NFSU2_TR(0x6f5605);
{goto L6f560c;}
}
B6f5607:L6f5607:{c.instructions+=2;NFSU2_TR(0x6f5607);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f5609:{NFSU2_TR(0x6f5609);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f560c;}}
}
B6f560b:L6f560b:{c.instructions+=1;NFSU2_TR(0x6f560b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f560c:L6f560c:{c.instructions+=6;NFSU2_TR(0x6f560c);
__builtin_memmove((R+4),gp(0x8ad3f8),4);
}
B6f5612:{NFSU2_TR(0x6f5612);
s4(0x8ad3f8,u32(u32(m4(0x8ad3f8))+u32(u32(0x1ull))));
}
B6f5618:{NFSU2_TR(0x6f5618);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f561b:{NFSU2_TR(0x6f561b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f561e:{NFSU2_TR(0x6f561e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6f5620:{NFSU2_TR(0x6f5620);
w4(R+24,u32(0x8ad2b8ull));
}
B6f5625:L6f5625:{c.instructions+=3;NFSU2_TR(0x6f5625);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6f5627:{NFSU2_TR(0x6f5627);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f5629:{NFSU2_TR(0x6f5629);
if(r1(R+518)){{goto L6f563e;}}
}
B6f562b:L6f562b:{c.instructions+=2;NFSU2_TR(0x6f562b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f562d:{NFSU2_TR(0x6f562d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f5640;}}
}
B6f562f:L6f562f:{c.instructions+=2;NFSU2_TR(0x6f562f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f5632:{NFSU2_TR(0x6f5632);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f5640;}}
}
B6f5634:L6f5634:{c.instructions+=2;NFSU2_TR(0x6f5634);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f5637:{NFSU2_TR(0x6f5637);
if(r1(R+518)){{goto L6f563e;}}
}
B6f5639:L6f5639:{c.instructions+=2;NFSU2_TR(0x6f5639);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f563c:{NFSU2_TR(0x6f563c);
{goto L6f5640;}
}
B6f563e:L6f563e:{c.instructions+=1;NFSU2_TR(0x6f563e);
__builtin_memmove((R+0),(R+12),4);
}
B6f5640:L6f5640:{c.instructions+=4;NFSU2_TR(0x6f5640);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B6f5643:{NFSU2_TR(0x6f5643);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6f5644:{NFSU2_TR(0x6f5644);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ad3f8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ad3f8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f564a:{NFSU2_TR(0x6f564a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5625u);}goto L6f5625;}}
}
B6f564c:L6f564c:{c.instructions+=16;NFSU2_TR(0x6f564c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f564f:{NFSU2_TR(0x6f564f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6f5652:{NFSU2_TR(0x6f5652);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6f5655:{NFSU2_TR(0x6f5655);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ad2c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f565c:{NFSU2_TR(0x6f565c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ad2bcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5662:{NFSU2_TR(0x6f5662);
__builtin_memmove((R+4),gp(0x8ad4ac),4);
}
B6f5668:{NFSU2_TR(0x6f5668);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6f566b:{NFSU2_TR(0x6f566b);
u8 U[6];
w1(R+523,sborrow<u32>(m4(0x8ad3f8),u32(0x1ull)));
s4(0x8ad3f8,u32(u32(m4(0x8ad3f8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x8ad3f8))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8ad3f8))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8ad3f8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f5671:{NFSU2_TR(0x6f5671);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ad2c0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5677:{NFSU2_TR(0x6f5677);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f5678:{NFSU2_TR(0x6f5678);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f5679:{NFSU2_TR(0x6f5679);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ad2b8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f567f:{NFSU2_TR(0x6f567f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ad2c4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5685:{NFSU2_TR(0x6f5685);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f5686:{NFSU2_TR(0x6f5686);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f5687:{NFSU2_TR(0x6f5687);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5688:L6f5688:{c.instructions+=5;NFSU2_TR(0x6f5688);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5689:{NFSU2_TR(0x6f5689);
__builtin_memmove((R+20),(R+16),4);
}
B6f568b:{NFSU2_TR(0x6f568b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f568e:{NFSU2_TR(0x6f568e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f5690:{NFSU2_TR(0x6f5690);
w4(R+4,u32(0x8ad2b8ull));
}
B6f5695:L6f5695:{c.instructions+=2;NFSU2_TR(0x6f5695);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6f5697:{NFSU2_TR(0x6f5697);
if(r1(R+518)){{goto L6f56a5;}}
}
B6f5699:L6f5699:{c.instructions+=4;NFSU2_TR(0x6f5699);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B6f569c:{NFSU2_TR(0x6f569c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f569d:{NFSU2_TR(0x6f569d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ad3f8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ad3f8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f56a3:{NFSU2_TR(0x6f56a3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5695u);}goto L6f5695;}}
}
B6f56a5:L6f56a5:{c.instructions+=2;NFSU2_TR(0x6f56a5);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f56a8:{NFSU2_TR(0x6f56a8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f56bb;}}
}
B6f56aa:L6f56aa:{c.instructions+=4;NFSU2_TR(0x6f56aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6f56ad:{NFSU2_TR(0x6f56ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ad2b8ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6f56b4:{NFSU2_TR(0x6f56b4);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+8)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6f56b6:{NFSU2_TR(0x6f56b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f56bb;}}
}
B6f56b8:L6f56b8:{c.instructions+=1;NFSU2_TR(0x6f56b8);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6f56bb:L6f56bb:{c.instructions+=2;NFSU2_TR(0x6f56bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f56bc:{NFSU2_TR(0x6f56bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f56bd:L6f56bd:{c.instructions+=2;NFSU2_TR(0x6f56bd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f56bf:{NFSU2_TR(0x6f56bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f56c4ull));
{goto L6f58c1;}
}
B6f56c4:L6f56c4:{c.instructions+=3;NFSU2_TR(0x6f56c4);
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
B6f56c6:{NFSU2_TR(0x6f56c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f56c7:{NFSU2_TR(0x6f56c7);
if(r1(R+518)){{goto L6f5721;}}
}
B6f56c9:L6f56c9:{c.instructions+=4;NFSU2_TR(0x6f56c9);
__builtin_memmove((R+0),gp(0x8ad4ac),4);
}
B6f56ce:{NFSU2_TR(0x6f56ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f56cf:{NFSU2_TR(0x6f56cf);
__builtin_memmove(gp(0x8ad3fc),(R+0),4);
}
B6f56d4:{NFSU2_TR(0x6f56d4);
w4(R+24,u32(0x8ad2c4ull));
}
B6f56d9:L6f56d9:{c.instructions+=3;NFSU2_TR(0x6f56d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f56dc:{NFSU2_TR(0x6f56dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f56de:{NFSU2_TR(0x6f56de);
if(r1(R+518)){{goto L6f5715;}}
}
B6f56e0:L6f56e0:{c.instructions+=3;NFSU2_TR(0x6f56e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f56e2:{NFSU2_TR(0x6f56e2);
u8 U[8];
__builtin_memmove((U+0),gp(0x8ad4ac),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+0)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f56e8:{NFSU2_TR(0x6f56e8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f5715;}}
}
B6f56ea:L6f56ea:{c.instructions+=2;NFSU2_TR(0x6f56ea);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f56ee:{NFSU2_TR(0x6f56ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f5715;}}
}
B6f56f0:L6f56f0:{c.instructions+=6;NFSU2_TR(0x6f56f0);
__builtin_memmove((R+8),gp(0x8ad4ac),4);
}
B6f56f6:{NFSU2_TR(0x6f56f6);
u8 U[6];
w1(R+512,u8((r4(R+8))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+8),r4(R+0)));
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f56f8:{NFSU2_TR(0x6f56f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f56f9:{NFSU2_TR(0x6f56f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f56fc:{NFSU2_TR(0x6f56fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f5703:{NFSU2_TR(0x6f5703);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5705ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f5705:L6f5705:{c.instructions+=6;NFSU2_TR(0x6f5705);
__builtin_memmove((R+0),gp(0x8ad4ac),4);
}
B6f570a:{NFSU2_TR(0x6f570a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6f570d:{NFSU2_TR(0x6f570d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f5711:{NFSU2_TR(0x6f5711);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f5712:{NFSU2_TR(0x6f5712);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f5713:{NFSU2_TR(0x6f5713);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6f5715:L6f5715:{c.instructions+=3;NFSU2_TR(0x6f5715);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B6f5718:{NFSU2_TR(0x6f5718);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ad404ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ad404ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ad404ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f571e:{NFSU2_TR(0x6f571e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f56d9u);}goto L6f56d9;}}
}
B6f5720:L6f5720:{c.instructions+=1;NFSU2_TR(0x6f5720);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f5721:L6f5721:{c.instructions+=1;NFSU2_TR(0x6f5721);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5722:L6f5722:{c.instructions+=2;NFSU2_TR(0x6f5722);
__builtin_memmove((R+0),gp(0x8ad4a8),4);
}
B6f5727:{NFSU2_TR(0x6f5727);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5755:L6f5755:{c.instructions+=7;NFSU2_TR(0x6f5755);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5756:{NFSU2_TR(0x6f5756);
__builtin_memmove((R+20),(R+16),4);
}
B6f5758:{NFSU2_TR(0x6f5758);
__builtin_memmove((R+0),gp(0x8ad4a8),4);
}
B6f575d:{NFSU2_TR(0x6f575d);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6f5760:{NFSU2_TR(0x6f5760);
__builtin_memmove(gp(0x8ad400),(R+0),4);
}
B6f5765:{NFSU2_TR(0x6f5765);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f5766:{NFSU2_TR(0x6f5766);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5779:L6f5779:{c.instructions+=6;NFSU2_TR(0x6f5779);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f577a:{NFSU2_TR(0x6f577a);
__builtin_memmove((R+20),(R+16),4);
}
B6f577c:{NFSU2_TR(0x6f577c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f577d:{NFSU2_TR(0x6f577d);
__builtin_memmove((R+24),gp(0x8ad4a8),4);
}
B6f5783:{NFSU2_TR(0x6f5783);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B6f5786:{NFSU2_TR(0x6f5786);
{goto L6f5795;}
}
B6f5788:L6f5788:{c.instructions+=1;NFSU2_TR(0x6f5788);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f578dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f56bdu);}goto L6f56bd;}
}
B6f578d:L6f578d:{c.instructions+=2;NFSU2_TR(0x6f578d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f578f:{NFSU2_TR(0x6f578f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5794ull));
{goto L6f5889;}
}
B6f5794:L6f5794:{c.instructions+=1;NFSU2_TR(0x6f5794);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f5795:L6f5795:{c.instructions+=3;NFSU2_TR(0x6f5795);
__builtin_memmove((R+0),gp(0x8ad4a8),4);
}
B6f579a:{NFSU2_TR(0x6f579a);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+24)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f579c:{NFSU2_TR(0x6f579c);
if(r1(R+519)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5788u);}goto L6f5788;}}
}
B6f579e:L6f579e:{c.instructions+=3;NFSU2_TR(0x6f579e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f579f:{NFSU2_TR(0x6f579f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f57a0:{NFSU2_TR(0x6f57a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f57a1:L6f57a1:{c.instructions+=2;NFSU2_TR(0x6f57a1);
__builtin_memmove((R+0),gp(0x8ad4a4),4);
}
B6f57a6:{NFSU2_TR(0x6f57a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f57c4:L6f57c4:{c.instructions+=14;NFSU2_TR(0x6f57c4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f57c5:{NFSU2_TR(0x6f57c5);
__builtin_memmove((R+20),(R+16),4);
}
B6f57c7:{NFSU2_TR(0x6f57c7);
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
B6f57ca:{NFSU2_TR(0x6f57ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f57cd:{NFSU2_TR(0x6f57cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f57ce:{NFSU2_TR(0x6f57ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f57cf:{NFSU2_TR(0x6f57cf);
__builtin_memmove((R+24),(R+0),4);
}
B6f57d1:{NFSU2_TR(0x6f57d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f57d4:{NFSU2_TR(0x6f57d4);
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
B6f57d5:{NFSU2_TR(0x6f57d5);
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
B6f57d6:{NFSU2_TR(0x6f57d6);
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
B6f57d7:{NFSU2_TR(0x6f57d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f57da:{NFSU2_TR(0x6f57da);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6f57e0:{NFSU2_TR(0x6f57e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f57e3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f57e3:L6f57e3:{c.instructions+=5;NFSU2_TR(0x6f57e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f57e4:{NFSU2_TR(0x6f57e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f57e5:{NFSU2_TR(0x6f57e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f57e6:{NFSU2_TR(0x6f57e6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f57e7:{NFSU2_TR(0x6f57e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f57ea:L6f57ea:{c.instructions+=4;NFSU2_TR(0x6f57ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f57eb:{NFSU2_TR(0x6f57eb);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6f57ed:{NFSU2_TR(0x6f57ed);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ad408),4);
w1(R+512,u8((r4(U+6))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+24)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f57f3:{NFSU2_TR(0x6f57f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f582c;}}
}
B6f57f5:L6f57f5:{c.instructions+=1;NFSU2_TR(0x6f57f5);
u8 U[4];
__builtin_memmove((U+0),gp(0x783200),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f57fbull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f57fb:L6f57fb:{c.instructions+=7;NFSU2_TR(0x6f57fb);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f57fd:{NFSU2_TR(0x6f57fd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f57fe:{NFSU2_TR(0x6f57fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f57ff:{NFSU2_TR(0x6f57ff);
__builtin_memmove((R+24),gp(0x78318c),4);
}
B6f5805:{NFSU2_TR(0x6f5805);
u8 U[4];
w4(U+0,u32(0x8ad410ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f580a:{NFSU2_TR(0x6f580a);
__builtin_memmove(gp(0x8ad40c),(R+0),4);
}
B6f580f:{NFSU2_TR(0x6f580f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5811ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f5811:L6f5811:{c.instructions+=2;NFSU2_TR(0x6f5811);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5812:{NFSU2_TR(0x6f5812);
u8 U[4];
__builtin_memmove((U+0),gp(0x783188),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5818ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f5818:L6f5818:{c.instructions+=2;NFSU2_TR(0x6f5818);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5819:{NFSU2_TR(0x6f5819);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f581bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f581b:L6f581b:{c.instructions+=2;NFSU2_TR(0x6f581b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f581c:{NFSU2_TR(0x6f581c);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831fc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5822ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f5822:L6f5822:{c.instructions+=1;NFSU2_TR(0x6f5822);
s4(0x8ad408,u32(0x1ull));
}
B6f582c:L6f582c:{c.instructions+=2;NFSU2_TR(0x6f582c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f582d:{NFSU2_TR(0x6f582d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5859:L6f5859:{c.instructions+=6;NFSU2_TR(0x6f5859);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f585a:{NFSU2_TR(0x6f585a);
__builtin_memmove((R+20),(R+16),4);
}
B6f585c:{NFSU2_TR(0x6f585c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f585f:{NFSU2_TR(0x6f585f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f5862:{NFSU2_TR(0x6f5862);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5863:{NFSU2_TR(0x6f5863);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f586f;}}
}
B6f5865:L6f5865:{c.instructions+=1;NFSU2_TR(0x6f5865);
u8 U[4];
__builtin_memmove((U+0),gp(0x783188),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f586bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f586b:L6f586b:{c.instructions+=2;NFSU2_TR(0x6f586b);
__builtin_memmove((R+24),(R+0),4);
}
B6f586d:{NFSU2_TR(0x6f586d);
{goto L6f5872;}
}
B6f586f:L6f586f:{c.instructions+=1;NFSU2_TR(0x6f586f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f5872:L6f5872:{c.instructions+=2;NFSU2_TR(0x6f5872);
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
B6f5874:{NFSU2_TR(0x6f5874);
if(r1(R+518)){{goto L6f587f;}}
}
B6f5876:L6f5876:{c.instructions+=3;NFSU2_TR(0x6f5876);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5878:{NFSU2_TR(0x6f5878);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5879:{NFSU2_TR(0x6f5879);
u8 U[4];
__builtin_memmove((U+0),gp(0x783204),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f587full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f587f:L6f587f:{c.instructions+=2;NFSU2_TR(0x6f587f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5880:{NFSU2_TR(0x6f5880);
u8 U[4];
__builtin_memmove((U+0),gp(0x783144),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5886ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f5886:L6f5886:{c.instructions+=3;NFSU2_TR(0x6f5886);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f5887:{NFSU2_TR(0x6f5887);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f5888:{NFSU2_TR(0x6f5888);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5889:L6f5889:{c.instructions+=5;NFSU2_TR(0x6f5889);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f588a:{NFSU2_TR(0x6f588a);
__builtin_memmove((R+20),(R+16),4);
}
B6f588c:{NFSU2_TR(0x6f588c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f588e:{NFSU2_TR(0x6f588e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f5891:{NFSU2_TR(0x6f5891);
u8 U[4];
__builtin_memmove((U+0),gp(0x783208),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5897ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f5897:L6f5897:{c.instructions+=2;NFSU2_TR(0x6f5897);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f5898:{NFSU2_TR(0x6f5898);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5899:L6f5899:{c.instructions+=3;NFSU2_TR(0x6f5899);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f589a:{NFSU2_TR(0x6f589a);
__builtin_memmove((R+20),(R+16),4);
}
B6f589c:{NFSU2_TR(0x6f589c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f58a1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f57a1u);}goto L6f57a1;}
}
B6f58a1:L6f58a1:{c.instructions+=3;NFSU2_TR(0x6f58a1);
__builtin_memmove((R+4),(R+0),4);
}
B6f58a3:{NFSU2_TR(0x6f58a3);
u8 U[10];
w4(U+6,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f58a5:{NFSU2_TR(0x6f58a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f58aa;}}
}
B6f58a7:L6f58a7:{c.instructions+=2;NFSU2_TR(0x6f58a7);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f58a9:{NFSU2_TR(0x6f58a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f58aa:L6f58aa:{c.instructions+=7;NFSU2_TR(0x6f58aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f58ad:{NFSU2_TR(0x6f58ad);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x3e8ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B6f58b3:{NFSU2_TR(0x6f58b3);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6f58b4:{NFSU2_TR(0x6f58b4);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6f58b4);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6f58b4);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B6f58b6:{NFSU2_TR(0x6f58b6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f58b8:{NFSU2_TR(0x6f58b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f58b9:{NFSU2_TR(0x6f58b9);
u8 U[4];
__builtin_memmove((U+0),gp(0x783208),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f58bfull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f58bf:L6f58bf:{c.instructions+=2;NFSU2_TR(0x6f58bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f58c0:{NFSU2_TR(0x6f58c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f58c1:L6f58c1:{c.instructions+=6;NFSU2_TR(0x6f58c1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f58c2:{NFSU2_TR(0x6f58c2);
__builtin_memmove((R+20),(R+16),4);
}
B6f58c4:{NFSU2_TR(0x6f58c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f58c5:{NFSU2_TR(0x6f58c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f58c8:{NFSU2_TR(0x6f58c8);
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
B6f58ca:{NFSU2_TR(0x6f58ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f58df;}}
}
B6f58cc:L6f58cc:{c.instructions+=1;NFSU2_TR(0x6f58cc);
u8 U[4];
__builtin_memmove((U+0),gp(0x783200),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f58d2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f58d2:L6f58d2:{c.instructions+=5;NFSU2_TR(0x6f58d2);
w4(R+0,u32(u32(r4(R+0))-u32(m4(0x8ad40c))));
}
B6f58d8:{NFSU2_TR(0x6f58d8);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6f58da:{NFSU2_TR(0x6f58da);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6f58dc:{NFSU2_TR(0x6f58dc);
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
B6f58dd:{NFSU2_TR(0x6f58dd);
{goto L6f58f8;}
}
B6f58df:L6f58df:{c.instructions+=2;NFSU2_TR(0x6f58df);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f58e2:{NFSU2_TR(0x6f58e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f58e8;}}
}
B6f58e4:L6f58e4:{c.instructions+=2;NFSU2_TR(0x6f58e4);
w1(R+0,u8(0x1ull));
}
B6f58e6:{NFSU2_TR(0x6f58e6);
{goto L6f58f8;}
}
B6f58e8:L6f58e8:{c.instructions+=1;NFSU2_TR(0x6f58e8);
u8 U[4];
__builtin_memmove((U+0),gp(0x783200),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f58eeull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f58ee:L6f58ee:{c.instructions+=4;NFSU2_TR(0x6f58ee);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6f58f0:{NFSU2_TR(0x6f58f0);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6f58f3:{NFSU2_TR(0x6f58f3);
__builtin_memmove((R+4),(R+518),1);
}
B6f58f6:{NFSU2_TR(0x6f58f6);
__builtin_memmove((R+0),(R+4),1);
}
B6f58f8:L6f58f8:{c.instructions+=3;NFSU2_TR(0x6f58f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f58f9:{NFSU2_TR(0x6f58f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f58fa:{NFSU2_TR(0x6f58fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f58fb:L6f58fb:{c.instructions+=5;NFSU2_TR(0x6f58fb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f58fc:{NFSU2_TR(0x6f58fc);
__builtin_memmove((R+20),(R+16),4);
}
B6f58fe:{NFSU2_TR(0x6f58fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f5901:{NFSU2_TR(0x6f5901);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f5903:{NFSU2_TR(0x6f5903);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f590c;}}
}
B6f5905:L6f5905:{c.instructions+=2;NFSU2_TR(0x6f5905);
__builtin_memmove((R+0),gp(0x8ad410),4);
}
B6f590a:{NFSU2_TR(0x6f590a);
{goto L6f591c;}
}
B6f590c:L6f590c:{c.instructions+=2;NFSU2_TR(0x6f590c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f590f:{NFSU2_TR(0x6f590f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f5919;}}
}
B6f5911:L6f5911:{c.instructions+=1;NFSU2_TR(0x6f5911);
u8 U[4];
__builtin_memmove((U+0),gp(0x783188),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5917ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f5917:L6f5917:{c.instructions+=1;NFSU2_TR(0x6f5917);
{goto L6f591c;}
}
B6f5919:L6f5919:{c.instructions+=1;NFSU2_TR(0x6f5919);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f591c:L6f591c:{c.instructions+=2;NFSU2_TR(0x6f591c);
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
B6f591e:{NFSU2_TR(0x6f591e);
if(r1(R+518)){{goto L6f5964;}}
}
B6f5920:L6f5920:{c.instructions+=2;NFSU2_TR(0x6f5920);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5921:{NFSU2_TR(0x6f5921);
u8 U[4];
__builtin_memmove((U+0),gp(0x783180),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5927ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f5927:L6f5927:{c.instructions+=2;NFSU2_TR(0x6f5927);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xfffffff1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfffffff1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfffffff1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f592a:{NFSU2_TR(0x6f592a);
if(r1(R+518)){{goto L6f595f;}}
}
B6f592c:L6f592c:{c.instructions+=2;NFSU2_TR(0x6f592c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xfffffffeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfffffffeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfffffffeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f592f:{NFSU2_TR(0x6f592f);
if(r1(R+518)){{goto L6f595b;}}
}
B6f5931:L6f5931:{c.instructions+=2;NFSU2_TR(0x6f5931);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f5934:{NFSU2_TR(0x6f5934);
if(r1(R+518)){{goto L6f5956;}}
}
B6f5936:L6f5936:{c.instructions+=2;NFSU2_TR(0x6f5936);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f5938:{NFSU2_TR(0x6f5938);
if(r1(R+518)){{goto L6f5964;}}
}
B6f593a:L6f593a:{c.instructions+=2;NFSU2_TR(0x6f593a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f593d:{NFSU2_TR(0x6f593d);
if(r1(R+518)){{goto L6f5951;}}
}
B6f593f:L6f593f:{c.instructions+=2;NFSU2_TR(0x6f593f);
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
B6f5942:{NFSU2_TR(0x6f5942);
if(r1(R+518)){{goto L6f594d;}}
}
B6f5944:L6f5944:{c.instructions+=2;NFSU2_TR(0x6f5944);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xfull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f5947:{NFSU2_TR(0x6f5947);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f5964;}}
}
B6f5949:L6f5949:{c.instructions+=2;NFSU2_TR(0x6f5949);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f594b:{NFSU2_TR(0x6f594b);
{goto L6f5961;}
}
B6f594d:L6f594d:{c.instructions+=2;NFSU2_TR(0x6f594d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f594f:{NFSU2_TR(0x6f594f);
{goto L6f5961;}
}
B6f5951:L6f5951:{c.instructions+=4;NFSU2_TR(0x6f5951);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f5953:{NFSU2_TR(0x6f5953);
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
B6f5954:{NFSU2_TR(0x6f5954);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f5955:{NFSU2_TR(0x6f5955);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5956:L6f5956:{c.instructions+=3;NFSU2_TR(0x6f5956);
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
B6f5959:{NFSU2_TR(0x6f5959);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f595a:{NFSU2_TR(0x6f595a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f595b:L6f595b:{c.instructions+=2;NFSU2_TR(0x6f595b);
u8 U[4];
w4(U+0,u32(0xfffffffeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f595d:{NFSU2_TR(0x6f595d);
{goto L6f5961;}
}
B6f595f:L6f595f:{c.instructions+=1;NFSU2_TR(0x6f595f);
u8 U[4];
w4(U+0,u32(0xfffffffdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5961:L6f5961:{c.instructions+=3;NFSU2_TR(0x6f5961);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f5962:{NFSU2_TR(0x6f5962);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f5963:{NFSU2_TR(0x6f5963);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5964:L6f5964:{c.instructions+=3;NFSU2_TR(0x6f5964);
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
B6f5966:{NFSU2_TR(0x6f5966);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f5967:{NFSU2_TR(0x6f5967);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5968:L6f5968:{c.instructions+=5;NFSU2_TR(0x6f5968);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5969:{NFSU2_TR(0x6f5969);
__builtin_memmove((R+20),(R+16),4);
}
B6f596b:{NFSU2_TR(0x6f596b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f596e:{NFSU2_TR(0x6f596e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f5970:{NFSU2_TR(0x6f5970);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f5979;}}
}
B6f5972:L6f5972:{c.instructions+=2;NFSU2_TR(0x6f5972);
__builtin_memmove((R+0),gp(0x8ad410),4);
}
B6f5977:{NFSU2_TR(0x6f5977);
{goto L6f5989;}
}
B6f5979:L6f5979:{c.instructions+=2;NFSU2_TR(0x6f5979);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f597c:{NFSU2_TR(0x6f597c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f5986;}}
}
B6f597e:L6f597e:{c.instructions+=1;NFSU2_TR(0x6f597e);
u8 U[4];
__builtin_memmove((U+0),gp(0x783188),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5984ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f5984:L6f5984:{c.instructions+=1;NFSU2_TR(0x6f5984);
{goto L6f5989;}
}
B6f5986:L6f5986:{c.instructions+=1;NFSU2_TR(0x6f5986);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f5989:L6f5989:{c.instructions+=2;NFSU2_TR(0x6f5989);
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
B6f598b:{NFSU2_TR(0x6f598b);
if(r1(R+518)){{goto L6f59d7;}}
}
B6f598d:L6f598d:{c.instructions+=3;NFSU2_TR(0x6f598d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f5990:{NFSU2_TR(0x6f5990);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xfffffffdull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfffffffdull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfffffffdull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f5993:{NFSU2_TR(0x6f5993);
if(r1(R+518)){{goto L6f59cc;}}
}
B6f5995:L6f5995:{c.instructions+=2;NFSU2_TR(0x6f5995);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xfffffffeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfffffffeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfffffffeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f5998:{NFSU2_TR(0x6f5998);
if(r1(R+518)){{goto L6f59c8;}}
}
B6f599a:L6f599a:{c.instructions+=2;NFSU2_TR(0x6f599a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f599d:{NFSU2_TR(0x6f599d);
if(r1(R+518)){{goto L6f59c3;}}
}
B6f599f:L6f599f:{c.instructions+=2;NFSU2_TR(0x6f599f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f59a1:{NFSU2_TR(0x6f59a1);
if(r1(R+518)){{goto L6f59b2;}}
}
B6f59a3:L6f59a3:{c.instructions+=2;NFSU2_TR(0x6f59a3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f59a6:{NFSU2_TR(0x6f59a6);
if(r1(R+518)){{goto L6f59be;}}
}
B6f59a8:L6f59a8:{c.instructions+=2;NFSU2_TR(0x6f59a8);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B6f59ab:{NFSU2_TR(0x6f59ab);
if(r1(R+518)){{goto L6f59ba;}}
}
B6f59ad:L6f59ad:{c.instructions+=2;NFSU2_TR(0x6f59ad);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B6f59b0:{NFSU2_TR(0x6f59b0);
if(r1(R+518)){{goto L6f59b6;}}
}
B6f59b2:L6f59b2:{c.instructions+=2;NFSU2_TR(0x6f59b2);
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
B6f59b4:{NFSU2_TR(0x6f59b4);
{goto L6f59cf;}
}
B6f59b6:L6f59b6:{c.instructions+=2;NFSU2_TR(0x6f59b6);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f59b8:{NFSU2_TR(0x6f59b8);
{goto L6f59ce;}
}
B6f59ba:L6f59ba:{c.instructions+=2;NFSU2_TR(0x6f59ba);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f59bc:{NFSU2_TR(0x6f59bc);
{goto L6f59ce;}
}
B6f59be:L6f59be:{c.instructions+=3;NFSU2_TR(0x6f59be);
w1(R+512,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6f59c0:{NFSU2_TR(0x6f59c0);
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
B6f59c1:{NFSU2_TR(0x6f59c1);
{goto L6f59cf;}
}
B6f59c3:L6f59c3:{c.instructions+=2;NFSU2_TR(0x6f59c3);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f59c6:{NFSU2_TR(0x6f59c6);
{goto L6f59cf;}
}
B6f59c8:L6f59c8:{c.instructions+=2;NFSU2_TR(0x6f59c8);
u8 U[4];
w4(U+0,u32(0xfffffffeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f59ca:{NFSU2_TR(0x6f59ca);
{goto L6f59ce;}
}
B6f59cc:L6f59cc:{c.instructions+=1;NFSU2_TR(0x6f59cc);
u8 U[4];
w4(U+0,u32(0xfffffff1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f59ce:L6f59ce:{c.instructions+=1;NFSU2_TR(0x6f59ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f59cf:L6f59cf:{c.instructions+=3;NFSU2_TR(0x6f59cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f59d0:{NFSU2_TR(0x6f59d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f59d1:{NFSU2_TR(0x6f59d1);
u8 U[4];
__builtin_memmove((U+0),gp(0x783174),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f59d7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f59d7:L6f59d7:{c.instructions+=3;NFSU2_TR(0x6f59d7);
w1(R+0,u8(0x1ull));
}
B6f59d9:{NFSU2_TR(0x6f59d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f59da:{NFSU2_TR(0x6f59da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f59db:L6f59db:{c.instructions+=7;NFSU2_TR(0x6f59db);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f59dc:{NFSU2_TR(0x6f59dc);
__builtin_memmove((R+20),(R+16),4);
}
B6f59de:{NFSU2_TR(0x6f59de);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f59e1:{NFSU2_TR(0x6f59e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f59e2:{NFSU2_TR(0x6f59e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f59e5:{NFSU2_TR(0x6f59e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f59e8:{NFSU2_TR(0x6f59e8);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830ac),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f59eeull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f59ee:L6f59ee:{c.instructions+=2;NFSU2_TR(0x6f59ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f59f0:{NFSU2_TR(0x6f59f0);
if(r1(R+518)){{goto L6f5a00;}}
}
B6f59f2:L6f59f2:{c.instructions+=5;NFSU2_TR(0x6f59f2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f59f4:{NFSU2_TR(0x6f59f4);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x103ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x103ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x103ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6f59fb:{NFSU2_TR(0x6f59fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B6f59fe:{NFSU2_TR(0x6f59fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f59ff:{NFSU2_TR(0x6f59ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5a00:L6f5a00:{c.instructions+=3;NFSU2_TR(0x6f5a00);
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
B6f5a02:{NFSU2_TR(0x6f5a02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f5a03:{NFSU2_TR(0x6f5a03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5a04:L6f5a04:{c.instructions+=5;NFSU2_TR(0x6f5a04);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5a05:{NFSU2_TR(0x6f5a05);
__builtin_memmove((R+20),(R+16),4);
}
B6f5a07:{NFSU2_TR(0x6f5a07);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5a08:{NFSU2_TR(0x6f5a08);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5a09:{NFSU2_TR(0x6f5a09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5a0eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5722u);}goto L6f5722;}
}
B6f5a0e:L6f5a0e:{c.instructions+=2;NFSU2_TR(0x6f5a0e);
__builtin_memmove((R+24),(R+0),4);
}
B6f5a10:{NFSU2_TR(0x6f5a10);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+24),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+24),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6f5a13:L6f5a13:{c.instructions+=2;NFSU2_TR(0x6f5a13);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f5a16:{NFSU2_TR(0x6f5a16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5a1bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f59dbu);}goto L6f59db;}
}
B6f5a1b:L6f5a1b:{c.instructions+=4;NFSU2_TR(0x6f5a1b);
__builtin_memmove((R+12),(R+0),1);
}
B6f5a1d:{NFSU2_TR(0x6f5a1d);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6f5a1f:{NFSU2_TR(0x6f5a1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f5a20:{NFSU2_TR(0x6f5a20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f5a31;}}
}
B6f5a22:L6f5a22:{c.instructions+=2;NFSU2_TR(0x6f5a22);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B6f5a26:{NFSU2_TR(0x6f5a26);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5a13u);}goto L6f5a13;}}
}
B6f5a28:L6f5a28:{c.instructions+=1;NFSU2_TR(0x6f5a28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5a2dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5722u);}goto L6f5722;}
}
B6f5a2d:L6f5a2d:{c.instructions+=2;NFSU2_TR(0x6f5a2d);
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
B6f5a2f:{NFSU2_TR(0x6f5a2f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5a13u);}goto L6f5a13;}}
}
B6f5a31:L6f5a31:{c.instructions+=5;NFSU2_TR(0x6f5a31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f5a32:{NFSU2_TR(0x6f5a32);
__builtin_memmove((R+0),(R+12),1);
}
B6f5a34:{NFSU2_TR(0x6f5a34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f5a35:{NFSU2_TR(0x6f5a35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f5a36:{NFSU2_TR(0x6f5a36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5a40:L6f5a40:{c.instructions+=9;NFSU2_TR(0x6f5a40);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5a41:{NFSU2_TR(0x6f5a41);
__builtin_memmove((R+20),(R+16),4);
}
B6f5a43:{NFSU2_TR(0x6f5a43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6f5a46:{NFSU2_TR(0x6f5a46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5a47:{NFSU2_TR(0x6f5a47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f5a4a:{NFSU2_TR(0x6f5a4a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5a4b:{NFSU2_TR(0x6f5a4b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6f5a4d:{NFSU2_TR(0x6f5a4d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f5a50:{NFSU2_TR(0x6f5a50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f5a55;}}
}
B6f5a52:L6f5a52:{c.instructions+=1;NFSU2_TR(0x6f5a52);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f5a55:L6f5a55:{c.instructions+=14;NFSU2_TR(0x6f5a55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f5a58:{NFSU2_TR(0x6f5a58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5a5b:{NFSU2_TR(0x6f5a5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f5a5e:{NFSU2_TR(0x6f5a5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5a61:{NFSU2_TR(0x6f5a61);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f5a64:{NFSU2_TR(0x6f5a64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5a65:{NFSU2_TR(0x6f5a65);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5a67:{NFSU2_TR(0x6f5a67);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f5a6a:{NFSU2_TR(0x6f5a6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5a6b:{NFSU2_TR(0x6f5a6b);
u8 U[4];
w4(U+0,u32(0x6f57c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5a70:{NFSU2_TR(0x6f5a70);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f5a73:{NFSU2_TR(0x6f5a73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5a76:{NFSU2_TR(0x6f5a76);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5a77:{NFSU2_TR(0x6f5a77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5a7cull));
TAIL_STATIC(0x75f6bbu,75f);
}
B6f5a7c:L6f5a7c:{c.instructions+=4;NFSU2_TR(0x6f5a7c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6f5a7f:{NFSU2_TR(0x6f5a7f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f5a81:{NFSU2_TR(0x6f5a81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5a84:{NFSU2_TR(0x6f5a84);
if(r1(R+518)){{goto L6f5abd;}}
}
B6f5a86:L6f5a86:{c.instructions+=3;NFSU2_TR(0x6f5a86);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f5a89:{NFSU2_TR(0x6f5a89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5a8a:{NFSU2_TR(0x6f5a8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5a8full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5968u);}goto L6f5968;}
}
B6f5a8f:L6f5a8f:{c.instructions+=4;NFSU2_TR(0x6f5a8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f5a90:{NFSU2_TR(0x6f5a90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f5a91:{NFSU2_TR(0x6f5a91);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f5a94:{NFSU2_TR(0x6f5a94);
u8 U[4];
__builtin_memmove((U+0),gp(0x78315c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5a9aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f5a9a:L6f5a9a:{c.instructions+=1;NFSU2_TR(0x6f5a9a);
{goto L6f5aa6;}
}
B6f5a9c:L6f5a9c:{c.instructions+=3;NFSU2_TR(0x6f5a9c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5a9e:{NFSU2_TR(0x6f5a9e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5aa0:{NFSU2_TR(0x6f5aa0);
u8 U[4];
__builtin_memmove((U+0),gp(0x783208),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5aa6ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f5aa6:L6f5aa6:{c.instructions+=2;NFSU2_TR(0x6f5aa6);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
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
B6f5aa9:{NFSU2_TR(0x6f5aa9);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5a9cu);}goto L6f5a9c;}}
}
B6f5aab:L6f5aab:{c.instructions+=2;NFSU2_TR(0x6f5aab);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B6f5aae:{NFSU2_TR(0x6f5aae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f5ab9;}}
}
B6f5ab0:L6f5ab0:{c.instructions+=2;NFSU2_TR(0x6f5ab0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f5ab3:{NFSU2_TR(0x6f5ab3);
u8 U[4];
__builtin_memmove((U+0),gp(0x783144),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5ab9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f5ab9:L6f5ab9:{c.instructions+=2;NFSU2_TR(0x6f5ab9);
w1(R+0,u8(0x1ull));
}
B6f5abb:{NFSU2_TR(0x6f5abb);
{goto L6f5abf;}
}
B6f5abd:L6f5abd:{c.instructions+=1;NFSU2_TR(0x6f5abd);
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
B6f5abf:L6f5abf:{c.instructions+=4;NFSU2_TR(0x6f5abf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f5ac0:{NFSU2_TR(0x6f5ac0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f5ac1:{NFSU2_TR(0x6f5ac1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f5ac2:{NFSU2_TR(0x6f5ac2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5ac3:L6f5ac3:{c.instructions+=7;NFSU2_TR(0x6f5ac3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5ac4:{NFSU2_TR(0x6f5ac4);
__builtin_memmove((R+20),(R+16),4);
}
B6f5ac6:{NFSU2_TR(0x6f5ac6);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f5ac9:{NFSU2_TR(0x6f5ac9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5aca:{NFSU2_TR(0x6f5aca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5acb:{NFSU2_TR(0x6f5acb);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6f5ace:{NFSU2_TR(0x6f5ace);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5ad3ull));
TAIL_STATIC(0x75eb50u,75e);
}
B6f5ad3:L6f5ad3:{c.instructions+=4;NFSU2_TR(0x6f5ad3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f5ad4:{NFSU2_TR(0x6f5ad4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f5ad5:{NFSU2_TR(0x6f5ad5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f5ad6:{NFSU2_TR(0x6f5ad6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5ad7:L6f5ad7:{c.instructions+=4;NFSU2_TR(0x6f5ad7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5ad8:{NFSU2_TR(0x6f5ad8);
w4(R+24,u32(0x8ad430ull));
}
B6f5add:{NFSU2_TR(0x6f5add);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5ade:{NFSU2_TR(0x6f5ade);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5ae3ull));
TAIL_STATIC(0x6f62e9u,6f6);
}
B6f5ae3:L6f5ae3:{c.instructions+=3;NFSU2_TR(0x6f5ae3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5ae4:{NFSU2_TR(0x6f5ae4);
s4(0x8ad424,u32(0x1ull));
}
B6f5aee:{NFSU2_TR(0x6f5aee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5af3ull));
TAIL_STATIC(0x6f6335u,6f6);
}
B6f5af3:L6f5af3:{c.instructions+=4;NFSU2_TR(0x6f5af3);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ad414),4);
w1(R+512,u8((r4(U+6))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f5afa:{NFSU2_TR(0x6f5afa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f5afb:{NFSU2_TR(0x6f5afb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f5afc:{NFSU2_TR(0x6f5afc);
if(r1(R+518)){{goto L6f5b34;}}
}
B6f5afe:L6f5afe:{c.instructions+=1;NFSU2_TR(0x6f5afe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5aff:L6f5aff:{c.instructions+=3;NFSU2_TR(0x6f5aff);
s4(0x8ad4a8,u32(u32(m4(0x8ad4a8))+u32(u32(0x1ull))));
}
B6f5b06:{NFSU2_TR(0x6f5b06);
s4(0x8ad4ac,u32(u32(m4(0x8ad4ac))+u32(u32(0x1ull))));
}
B6f5b0d:{NFSU2_TR(0x6f5b0d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6f5b0f:L6f5b0f:{c.instructions+=3;NFSU2_TR(0x6f5b0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ad484ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f5b15:{NFSU2_TR(0x6f5b15);
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
B6f5b17:{NFSU2_TR(0x6f5b17);
if(r1(R+518)){{goto L6f5b1b;}}
}
B6f5b19:L6f5b19:{c.instructions+=1;NFSU2_TR(0x6f5b19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5b1bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f5b1b:L6f5b1b:{c.instructions+=3;NFSU2_TR(0x6f5b1b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6f5b1e:{NFSU2_TR(0x6f5b1e);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x20ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f5b21:{NFSU2_TR(0x6f5b21);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5b0fu);}goto L6f5b0f;}}
}
B6f5b23:L6f5b23:{c.instructions+=2;NFSU2_TR(0x6f5b23);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5b24:{NFSU2_TR(0x6f5b24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5b29ull));
TAIL_STATIC(0x6f6335u,6f6);
}
B6f5b29:L6f5b29:{c.instructions+=3;NFSU2_TR(0x6f5b29);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ad414),4);
w1(R+512,u8((r4(U+6))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f5b30:{NFSU2_TR(0x6f5b30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f5b31:{NFSU2_TR(0x6f5b31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5affu);}goto L6f5aff;}}
}
B6f5b33:L6f5b33:{c.instructions+=1;NFSU2_TR(0x6f5b33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f5b34:L6f5b34:{c.instructions+=2;NFSU2_TR(0x6f5b34);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5b35:{NFSU2_TR(0x6f5b35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5b3aull));
TAIL_STATIC(0x6f6372u,6f6);
}
B6f5b3a:L6f5b3a:{c.instructions+=6;NFSU2_TR(0x6f5b3a);
s4(0x8ad424,u32(u32(m4(0x8ad424))&u32(u32(0x0ull))));
}
B6f5b41:{NFSU2_TR(0x6f5b41);
s4(0x8ad4a4,u32(u32(m4(0x8ad4a4))&u32(u32(0x0ull))));
}
B6f5b48:{NFSU2_TR(0x6f5b48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f5b49:{NFSU2_TR(0x6f5b49);
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
B6f5b4b:{NFSU2_TR(0x6f5b4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f5b4c:{NFSU2_TR(0x6f5b4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5b4d:L6f5b4d:{c.instructions+=10;NFSU2_TR(0x6f5b4d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5b4e:{NFSU2_TR(0x6f5b4e);
__builtin_memmove((R+20),(R+16),4);
}
B6f5b50:{NFSU2_TR(0x6f5b50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5b51:{NFSU2_TR(0x6f5b51);
{u32 ea_=u32(u32(9098284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f5b57:{NFSU2_TR(0x6f5b57);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5b58:{NFSU2_TR(0x6f5b58);
{u32 ea_=u32(u32(9098280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f5b5e:{NFSU2_TR(0x6f5b5e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5b5f:{NFSU2_TR(0x6f5b5f);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6f5b62:{NFSU2_TR(0x6f5b62);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f5b65:{NFSU2_TR(0x6f5b65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5b6aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5ac3u);}goto L6f5ac3;}
}
B6f5b6a:L6f5b6a:{c.instructions+=5;NFSU2_TR(0x6f5b6a);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f5b6d:{NFSU2_TR(0x6f5b6d);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6f5b6f:{NFSU2_TR(0x6f5b6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f5b70:{NFSU2_TR(0x6f5b70);
{u32 ea_=u32(u32(9098284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f5b76:{NFSU2_TR(0x6f5b76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5b7bull));
TAIL_STATIC(0x75bed4u,75b);
}
B6f5b7b:L6f5b7b:{c.instructions+=4;NFSU2_TR(0x6f5b7b);
s4(0x8ad41c,u32(u32(m4(0x8ad41c))+u32(r4(R+0))));
}
B6f5b81:{NFSU2_TR(0x6f5b81);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6f5b83:{NFSU2_TR(0x6f5b83);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ad414),4);
w1(R+512,u8((r4(U+6))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+28)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f5b89:{NFSU2_TR(0x6f5b89);
if(r1(R+518)){{goto L6f5bf1;}}
}
B6f5b8b:L6f5b8b:{c.instructions+=3;NFSU2_TR(0x6f5b8b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5b8c:{NFSU2_TR(0x6f5b8c);
__builtin_memmove((R+24),gp(0x78320c),4);
}
B6f5b92:{NFSU2_TR(0x6f5b92);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5b94ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f5b94:L6f5b94:{c.instructions+=6;NFSU2_TR(0x6f5b94);
__builtin_memmove((R+4),(R+0),4);
}
B6f5b96:{NFSU2_TR(0x6f5b96);
__builtin_memmove((R+0),gp(0x8ad41c),4);
}
B6f5b9b:{NFSU2_TR(0x6f5b9b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B6f5b9d:{NFSU2_TR(0x6f5b9d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6f5b9e:{NFSU2_TR(0x6f5b9e);
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
B6f5ba1:{NFSU2_TR(0x6f5ba1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f5bbb;}}
}
B6f5ba3:L6f5ba3:{c.instructions+=2;NFSU2_TR(0x6f5ba3);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xfffffc18ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xfffffc18ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xfffffc18ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f5ba8:{NFSU2_TR(0x6f5ba8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f5bb8;}}
}
B6f5baa:L6f5baa:{c.instructions+=1;NFSU2_TR(0x6f5baa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5bacull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f5bac:L6f5bac:{c.instructions+=3;NFSU2_TR(0x6f5bac);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f5bad:{NFSU2_TR(0x6f5bad);
s4(0x8ad43c,u32(u32(m4(0x8ad43c))+u32(u32(0x1ull))));
}
B6f5bb3:{NFSU2_TR(0x6f5bb3);
__builtin_memmove(gp(0x8ad41c),(R+0),4);
}
B6f5bb8:L6f5bb8:{c.instructions+=2;NFSU2_TR(0x6f5bb8);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f5bba:{NFSU2_TR(0x6f5bba);
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
B6f5bbb:L6f5bbb:{c.instructions+=6;NFSU2_TR(0x6f5bbb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5bbc:{NFSU2_TR(0x6f5bbc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5bbd:{NFSU2_TR(0x6f5bbd);
u8 U[4];
w4(U+0,u32(0x6f5b4dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5bc2:{NFSU2_TR(0x6f5bc2);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ad418),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5bc8:{NFSU2_TR(0x6f5bc8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5bc9:{NFSU2_TR(0x6f5bc9);
u8 U[4];
__builtin_memmove((U+0),gp(0x7833a8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5bcfull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f5bcf:L6f5bcf:{c.instructions+=4;NFSU2_TR(0x6f5bcf);
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
B6f5bd1:{NFSU2_TR(0x6f5bd1);
__builtin_memmove(gp(0x8ad420),(R+0),4);
}
B6f5bd6:{NFSU2_TR(0x6f5bd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f5bd7:{NFSU2_TR(0x6f5bd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f5bf1;}}
}
B6f5bd9:L6f5bd9:{c.instructions+=4;NFSU2_TR(0x6f5bd9);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ad418),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5bdf:{NFSU2_TR(0x6f5bdf);
__builtin_memmove(gp(0x8ad4a4),(R+28),4);
}
B6f5be5:{NFSU2_TR(0x6f5be5);
__builtin_memmove(gp(0x8ad414),(R+28),4);
}
B6f5beb:{NFSU2_TR(0x6f5beb);
u8 U[4];
__builtin_memmove((U+0),gp(0x7833bc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5bf1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f5bf1:L6f5bf1:{c.instructions+=2;NFSU2_TR(0x6f5bf1);
u8 U[8];
__builtin_memmove((U+0),gp(0x8ad424),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f5bf7:{NFSU2_TR(0x6f5bf7);
if(r1(R+518)){{goto L6f5c0c;}}
}
B6f5bf9:L6f5bf9:{c.instructions+=2;NFSU2_TR(0x6f5bf9);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ad438),4);
w1(R+512,u8((r4(U+6))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+28)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f5bff:{NFSU2_TR(0x6f5bff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f5c0c;}}
}
B6f5c01:L6f5c01:{c.instructions+=2;NFSU2_TR(0x6f5c01);
u8 U[4];
w4(U+0,u32(0x8ad430ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5c06:{NFSU2_TR(0x6f5c06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5c0bull));
TAIL_STATIC(0x6f630cu,6f6);
}
B6f5c0b:L6f5c0b:{c.instructions+=1;NFSU2_TR(0x6f5c0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f5c0c:L6f5c0c:{c.instructions+=1;NFSU2_TR(0x6f5c0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5c11ull));
TAIL_STATIC(0x6f658eu,6f6);
}
B6f5c11:L6f5c11:{c.instructions+=3;NFSU2_TR(0x6f5c11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f5c12:{NFSU2_TR(0x6f5c12);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f5c13:{NFSU2_TR(0x6f5c13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5c16:L6f5c16:{c.instructions+=4;NFSU2_TR(0x6f5c16);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5c17:{NFSU2_TR(0x6f5c17);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6f5c19:{NFSU2_TR(0x6f5c19);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ad414),4);
w1(R+512,u8((r4(U+6))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+24)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f5c1f:{NFSU2_TR(0x6f5c1f);
if(r1(R+518)){{goto L6f5c75;}}
}
B6f5c21:L6f5c21:{c.instructions+=5;NFSU2_TR(0x6f5c21);
__builtin_memmove((R+0),gp(0x8ad420),4);
}
B6f5c26:{NFSU2_TR(0x6f5c26);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6f5c28:{NFSU2_TR(0x6f5c28);
__builtin_memmove(gp(0x8ad4a4),(R+24),4);
}
B6f5c2e:{NFSU2_TR(0x6f5c2e);
__builtin_memmove(gp(0x8ad414),(R+24),4);
}
B6f5c34:{NFSU2_TR(0x6f5c34);
if(r1(R+518)){{goto L6f5c3d;}}
}
B6f5c36:L6f5c36:{c.instructions+=2;NFSU2_TR(0x6f5c36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5c37:{NFSU2_TR(0x6f5c37);
u8 U[4];
__builtin_memmove((U+0),gp(0x7833ac),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5c3dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f5c3d:L6f5c3d:{c.instructions+=2;NFSU2_TR(0x6f5c3d);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ad418),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5c43:{NFSU2_TR(0x6f5c43);
u8 U[4];
__builtin_memmove((U+0),gp(0x7833bc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5c49ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f5c49:L6f5c49:{c.instructions+=2;NFSU2_TR(0x6f5c49);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ad424),4);
w1(R+512,u8((r4(U+6))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+24)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f5c4f:{NFSU2_TR(0x6f5c4f);
if(r1(R+518)){{goto L6f5c6d;}}
}
B6f5c51:L6f5c51:{c.instructions+=2;NFSU2_TR(0x6f5c51);
u8 U[4];
w4(U+0,u32(0x8ad430ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5c56:{NFSU2_TR(0x6f5c56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5c5bull));
TAIL_STATIC(0x6f630cu,6f6);
}
B6f5c5b:L6f5c5b:{c.instructions+=1;NFSU2_TR(0x6f5c5b);
{goto L6f5c6c;}
}
B6f5c5d:L6f5c5d:{c.instructions+=2;NFSU2_TR(0x6f5c5d);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ad424),4);
w1(R+512,u8((r4(U+6))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+24)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f5c63:{NFSU2_TR(0x6f5c63);
if(r1(R+518)){{goto L6f5c75;}}
}
B6f5c65:L6f5c65:{c.instructions+=2;NFSU2_TR(0x6f5c65);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5c67:{NFSU2_TR(0x6f5c67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5c6cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5889u);}goto L6f5889;}
}
B6f5c6c:L6f5c6c:{c.instructions+=1;NFSU2_TR(0x6f5c6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f5c6d:L6f5c6d:{c.instructions+=2;NFSU2_TR(0x6f5c6d);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ad420),4);
w1(R+512,u8((r4(U+6))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+24)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f5c73:{NFSU2_TR(0x6f5c73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5c5du);}goto L6f5c5d;}}
}
B6f5c75:L6f5c75:{c.instructions+=7;NFSU2_TR(0x6f5c75);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6f5c77:{NFSU2_TR(0x6f5c77);
__builtin_memmove(gp(0x8ad438),(R+24),4);
}
B6f5c7d:{NFSU2_TR(0x6f5c7d);
__builtin_memmove(gp(0x8ad418),(R+24),4);
}
B6f5c83:{NFSU2_TR(0x6f5c83);
{u32 ea_=u32(u32(9098284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f5c89:{NFSU2_TR(0x6f5c89);
__builtin_memmove(gp(0x8ad420),(R+24),4);
}
B6f5c8f:{NFSU2_TR(0x6f5c8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f5c90:{NFSU2_TR(0x6f5c90);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5c91:L6f5c91:{c.instructions+=10;NFSU2_TR(0x6f5c91);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5c92:{NFSU2_TR(0x6f5c92);
__builtin_memmove((R+20),(R+16),4);
}
B6f5c94:{NFSU2_TR(0x6f5c94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6f5c97:{NFSU2_TR(0x6f5c97);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5c98:{NFSU2_TR(0x6f5c98);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6f5c9a:{NFSU2_TR(0x6f5c9a);
u8 U[8];
__builtin_memmove((U+0),gp(0x8ad440),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f5ca0:{NFSU2_TR(0x6f5ca0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5ca1:{NFSU2_TR(0x6f5ca1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5ca2:{NFSU2_TR(0x6f5ca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f5ca9:{NFSU2_TR(0x6f5ca9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f5cc1;}}
}
B6f5cab:L6f5cab:{c.instructions+=5;NFSU2_TR(0x6f5cab);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5cad:{NFSU2_TR(0x6f5cad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f5cae:{NFSU2_TR(0x6f5cae);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f5cb0:{NFSU2_TR(0x6f5cb0);
w4(R+28,u32(0x8ad484ull));
}
B6f5cb5:{NFSU2_TR(0x6f5cb5);
s4(0x8ad440,u32(0x1ull));
}
B6f5cbf:L6f5cbf:{c.instructions+=1;NFSU2_TR(0x6f5cbf);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6f5cc1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5cbfu);}goto L6f5cbf;}
}
B6f5cc1:L6f5cc1:{c.instructions+=1;NFSU2_TR(0x6f5cc1);
__builtin_memmove((R+24),gp(0x78320c),4);
}
B6f5cc7:L6f5cc7:{c.instructions+=1;NFSU2_TR(0x6f5cc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5cccull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5c16u);}goto L6f5c16;}
}
B6f5ccc:L6f5ccc:{c.instructions+=3;NFSU2_TR(0x6f5ccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f5ccf:{NFSU2_TR(0x6f5ccf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f5cd1:{NFSU2_TR(0x6f5cd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f5cdd;}}
}
B6f5cd3:L6f5cd3:{c.instructions+=2;NFSU2_TR(0x6f5cd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x64ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f5cda:{NFSU2_TR(0x6f5cda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f5cdd:L6f5cdd:{c.instructions+=2;NFSU2_TR(0x6f5cdd);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6f5ce0:{NFSU2_TR(0x6f5ce0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f5cea;}}
}
B6f5ce2:L6f5ce2:{c.instructions+=2;NFSU2_TR(0x6f5ce2);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x2710ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2710ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2710ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f5ce8:{NFSU2_TR(0x6f5ce8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f5cf4;}}
}
B6f5cea:L6f5cea:{c.instructions+=2;NFSU2_TR(0x6f5cea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x64ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f5cf1:{NFSU2_TR(0x6f5cf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f5cf4:L6f5cf4:{c.instructions+=10;NFSU2_TR(0x6f5cf4);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f5cf7:{NFSU2_TR(0x6f5cf7);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5cf9:{NFSU2_TR(0x6f5cf9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f5cfc:{NFSU2_TR(0x6f5cfc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5cfd:{NFSU2_TR(0x6f5cfd);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6f5d03:{NFSU2_TR(0x6f5d03);
__builtin_memmove(gp(0x8ad4a8),(R+12),4);
}
B6f5d09:{NFSU2_TR(0x6f5d09);
{u32 ea_=u32(u32(9098280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f5d0f:{NFSU2_TR(0x6f5d0f);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6f5d11:{NFSU2_TR(0x6f5d11);
{u32 ea_=u32(u32(9098284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f5d17:{NFSU2_TR(0x6f5d17);
u8 U[4];
__builtin_memmove((U+0),gp(0x7833b4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5d1dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f5d1d:L6f5d1d:{c.instructions+=2;NFSU2_TR(0x6f5d1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f5d1f:{NFSU2_TR(0x6f5d1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f5e10;}}
}
B6f5d25:L6f5d25:{c.instructions+=9;NFSU2_TR(0x6f5d25);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6f5d27:{NFSU2_TR(0x6f5d27);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f5d28:{NFSU2_TR(0x6f5d28);
{u32 ea_=u32(u32(9098280u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6f5d2e:{NFSU2_TR(0x6f5d2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5d31:{NFSU2_TR(0x6f5d31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5d34:{NFSU2_TR(0x6f5d34);
__builtin_memmove(gp(0x8ad418),(R+0),4);
}
B6f5d39:{NFSU2_TR(0x6f5d39);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6f5d3b:{NFSU2_TR(0x6f5d3b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f5d3e:{NFSU2_TR(0x6f5d3e);
if(r1(R+518)){{goto L6f5e10;}}
}
B6f5d44:L6f5d44:{c.instructions+=7;NFSU2_TR(0x6f5d44);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5d46:{NFSU2_TR(0x6f5d46);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5d47:{NFSU2_TR(0x6f5d47);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5d48:{NFSU2_TR(0x6f5d48);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5d49:{NFSU2_TR(0x6f5d49);
u8 U[4];
w4(U+0,u32(0x6f5ad7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5d4e:{NFSU2_TR(0x6f5d4e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5d4f:{NFSU2_TR(0x6f5d4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5d54ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5a40u);}goto L6f5a40;}
}
B6f5d54:L6f5d54:{c.instructions+=3;NFSU2_TR(0x6f5d54);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6f5d57:{NFSU2_TR(0x6f5d57);
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
B6f5d59:{NFSU2_TR(0x6f5d59);
if(r1(R+518)){{goto L6f5e10;}}
}
B6f5d5f:L6f5d5f:{c.instructions+=2;NFSU2_TR(0x6f5d5f);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ad418),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5d65:{NFSU2_TR(0x6f5d65);
u8 U[4];
__builtin_memmove((U+0),gp(0x7833b0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5d6bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f5d6b:L6f5d6b:{c.instructions+=2;NFSU2_TR(0x6f5d6b);
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
B6f5d6d:{NFSU2_TR(0x6f5d6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f5e20;}}
}
B6f5d73:L6f5d73:{c.instructions+=2;NFSU2_TR(0x6f5d73);
u8 U[4];
w4(U+0,u32(0x6f5c16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5d78:{NFSU2_TR(0x6f5d78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5d7dull));
TAIL_STATIC(0x6f65c1u,6f6);
}
B6f5d7d:L6f5d7d:{c.instructions+=5;NFSU2_TR(0x6f5d7d);
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
B6f5d7f:{NFSU2_TR(0x6f5d7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f5d80:{NFSU2_TR(0x6f5d80);
__builtin_memmove(gp(0x8ad4a4),(R+28),4);
}
B6f5d86:{NFSU2_TR(0x6f5d86);
__builtin_memmove(gp(0x8ad414),(R+28),4);
}
B6f5d8c:{NFSU2_TR(0x6f5d8c);
if(r1(R+518)){{goto L6f5dbd;}}
}
B6f5d8e:L6f5d8e:{c.instructions+=2;NFSU2_TR(0x6f5d8e);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ad420),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f5d94:{NFSU2_TR(0x6f5d94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f5dbd;}}
}
B6f5d96:L6f5d96:{c.instructions+=3;NFSU2_TR(0x6f5d96);
__builtin_memmove((R+28),gp(0x8ad438),4);
}
B6f5d9c:{NFSU2_TR(0x6f5d9c);
s4(0x8ad438,u32(0x1ull));
}
B6f5da6:{NFSU2_TR(0x6f5da6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5da8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f5da8:L6f5da8:{c.instructions+=7;NFSU2_TR(0x6f5da8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5da9:{NFSU2_TR(0x6f5da9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5daa:{NFSU2_TR(0x6f5daa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5dab:{NFSU2_TR(0x6f5dab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5dac:{NFSU2_TR(0x6f5dac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5dad:{NFSU2_TR(0x6f5dad);
__builtin_memmove(gp(0x8ad41c),(R+0),4);
}
B6f5db2:{NFSU2_TR(0x6f5db2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5db7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5b4du);}goto L6f5b4d;}
}
B6f5db7:L6f5db7:{c.instructions+=1;NFSU2_TR(0x6f5db7);
__builtin_memmove(gp(0x8ad438),(R+28),4);
}
B6f5dbd:L6f5dbd:{c.instructions+=1;NFSU2_TR(0x6f5dbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5dc2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5722u);}goto L6f5722;}
}
B6f5dc2:L6f5dc2:{c.instructions+=2;NFSU2_TR(0x6f5dc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5dc5:{NFSU2_TR(0x6f5dc5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5dc7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f5dc7:L6f5dc7:{c.instructions+=5;NFSU2_TR(0x6f5dc7);
__builtin_memmove((R+28),(R+0),4);
}
B6f5dc9:{NFSU2_TR(0x6f5dc9);
__builtin_memmove((R+0),gp(0x8ad4a4),4);
}
B6f5dce:{NFSU2_TR(0x6f5dce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6f5dd1:{NFSU2_TR(0x6f5dd1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+28),r4(R+0)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f5dd3:{NFSU2_TR(0x6f5dd3);
{goto L6f5de7;}
}
B6f5dd5:L6f5dd5:{c.instructions+=1;NFSU2_TR(0x6f5dd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5ddaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5722u);}goto L6f5722;}
}
B6f5dda:L6f5dda:{c.instructions+=2;NFSU2_TR(0x6f5dda);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6f5ddd:{NFSU2_TR(0x6f5ddd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f5ded;}}
}
B6f5ddf:L6f5ddf:{c.instructions+=2;NFSU2_TR(0x6f5ddf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5de1:{NFSU2_TR(0x6f5de1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5de6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5889u);}goto L6f5889;}
}
B6f5de6:L6f5de6:{c.instructions+=1;NFSU2_TR(0x6f5de6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f5de7:L6f5de7:{c.instructions+=1;NFSU2_TR(0x6f5de7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5de9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f5de9:L6f5de9:{c.instructions+=2;NFSU2_TR(0x6f5de9);
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
B6f5deb:{NFSU2_TR(0x6f5deb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5dd5u);}goto L6f5dd5;}}
}
B6f5ded:L6f5ded:{c.instructions+=1;NFSU2_TR(0x6f5ded);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5df2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5722u);}goto L6f5722;}
}
B6f5df2:L6f5df2:{c.instructions+=2;NFSU2_TR(0x6f5df2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f5df5:{NFSU2_TR(0x6f5df5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f5dfc;}}
}
B6f5df7:L6f5df7:{c.instructions+=1;NFSU2_TR(0x6f5df7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5dfcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5c16u);}goto L6f5c16;}
}
B6f5dfc:L6f5dfc:{c.instructions+=3;NFSU2_TR(0x6f5dfc);
__builtin_memmove((R+0),gp(0x8ad4a4),4);
}
B6f5e01:{NFSU2_TR(0x6f5e01);
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
B6f5e03:{NFSU2_TR(0x6f5e03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f5e3c;}}
}
B6f5e05:L6f5e05:{c.instructions+=2;NFSU2_TR(0x6f5e05);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B6f5e08:{NFSU2_TR(0x6f5e08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5cc7u);}goto L6f5cc7;}}
}
B6f5e0e:L6f5e0e:{c.instructions+=1;NFSU2_TR(0x6f5e0e);
{goto L6f5e3c;}
}
B6f5e10:L6f5e10:{c.instructions+=4;NFSU2_TR(0x6f5e10);
__builtin_memmove(gp(0x8ad4a4),(R+12),4);
}
B6f5e16:{NFSU2_TR(0x6f5e16);
__builtin_memmove(gp(0x8ad414),(R+12),4);
}
B6f5e1c:{NFSU2_TR(0x6f5e1c);
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
B6f5e1e:{NFSU2_TR(0x6f5e1e);
{goto L6f5e3c;}
}
B6f5e20:L6f5e20:{c.instructions+=4;NFSU2_TR(0x6f5e20);
u8 U[4];
w4(U+0,u32(0x8ad430ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5e25:{NFSU2_TR(0x6f5e25);
__builtin_memmove(gp(0x8ad4a4),(R+12),4);
}
B6f5e2b:{NFSU2_TR(0x6f5e2b);
__builtin_memmove(gp(0x8ad414),(R+12),4);
}
B6f5e31:{NFSU2_TR(0x6f5e31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5e36ull));
TAIL_STATIC(0x6f630cu,6f6);
}
B6f5e36:L6f5e36:{c.instructions+=2;NFSU2_TR(0x6f5e36);
__builtin_memmove((R+0),gp(0x8ad4a4),4);
}
B6f5e3b:{NFSU2_TR(0x6f5e3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f5e3c:L6f5e3c:{c.instructions+=5;NFSU2_TR(0x6f5e3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f5e3d:{NFSU2_TR(0x6f5e3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f5e3e:{NFSU2_TR(0x6f5e3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f5e3f:{NFSU2_TR(0x6f5e3f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f5e40:{NFSU2_TR(0x6f5e40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5e41:L6f5e41:{c.instructions+=13;NFSU2_TR(0x6f5e41);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5e42:{NFSU2_TR(0x6f5e42);
__builtin_memmove((R+20),(R+16),4);
}
B6f5e44:{NFSU2_TR(0x6f5e44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6f5e47:{NFSU2_TR(0x6f5e47);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
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
B6f5e4b:{NFSU2_TR(0x6f5e4b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5e4c:{NFSU2_TR(0x6f5e4c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5e4e:{NFSU2_TR(0x6f5e4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f5e4f:{NFSU2_TR(0x6f5e4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f5e52:{NFSU2_TR(0x6f5e52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5e53:{NFSU2_TR(0x6f5e53);
u8 U[4];
w4(U+0,u32(0x7c2d88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5e58:{NFSU2_TR(0x6f5e58);
u8 U[4];
w4(U+0,u32(0x80000002ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5e5d:{NFSU2_TR(0x6f5e5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5e60:{NFSU2_TR(0x6f5e60);
u8 U[4];
__builtin_memmove((U+0),gp(0x78300c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5e66ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f5e66:L6f5e66:{c.instructions+=2;NFSU2_TR(0x6f5e66);
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
B6f5e68:{NFSU2_TR(0x6f5e68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f5e92;}}
}
B6f5e6a:L6f5e6a:{c.instructions+=11;NFSU2_TR(0x6f5e6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f5e6d:{NFSU2_TR(0x6f5e6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5e6e:{NFSU2_TR(0x6f5e6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f5e71:{NFSU2_TR(0x6f5e71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5e72:{NFSU2_TR(0x6f5e72);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f5e75:{NFSU2_TR(0x6f5e75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5e76:{NFSU2_TR(0x6f5e76);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5e78:{NFSU2_TR(0x6f5e78);
u8 U[4];
w4(U+0,u32(0x7c2d80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5e7d:{NFSU2_TR(0x6f5e7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f5e80:{NFSU2_TR(0x6f5e80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5e83:{NFSU2_TR(0x6f5e83);
u8 U[4];
__builtin_memmove((U+0),gp(0x783004),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5e89ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f5e89:L6f5e89:{c.instructions+=2;NFSU2_TR(0x6f5e89);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f5e8c:{NFSU2_TR(0x6f5e8c);
u8 U[4];
__builtin_memmove((U+0),gp(0x783014),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5e92ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f5e92:L6f5e92:{c.instructions+=4;NFSU2_TR(0x6f5e92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f5e95:{NFSU2_TR(0x6f5e95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f5e96:{NFSU2_TR(0x6f5e96);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f5e97:{NFSU2_TR(0x6f5e97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5e98:L6f5e98:{c.instructions+=8;NFSU2_TR(0x6f5e98);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5e99:{NFSU2_TR(0x6f5e99);
__builtin_memmove((R+20),(R+16),4);
}
B6f5e9b:{NFSU2_TR(0x6f5e9b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5e9c:{NFSU2_TR(0x6f5e9c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5e9d:{NFSU2_TR(0x6f5e9d);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
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
B6f5ea1:{NFSU2_TR(0x6f5ea1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f5ea4:{NFSU2_TR(0x6f5ea4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5ea5:{NFSU2_TR(0x6f5ea5);
u8 U[4];
__builtin_memmove((U+0),gp(0x78311c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5eabull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f5eab:L6f5eab:{c.instructions+=4;NFSU2_TR(0x6f5eab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f5eae:{NFSU2_TR(0x6f5eae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f5eb1:{NFSU2_TR(0x6f5eb1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f5eb2:{NFSU2_TR(0x6f5eb2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5eb3:L6f5eb3:{c.instructions+=10;NFSU2_TR(0x6f5eb3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5eb4:{NFSU2_TR(0x6f5eb4);
__builtin_memmove((R+20),(R+16),4);
}
B6f5eb6:{NFSU2_TR(0x6f5eb6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5eb7:{NFSU2_TR(0x6f5eb7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5eb8:{NFSU2_TR(0x6f5eb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f5ebc:{NFSU2_TR(0x6f5ebc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5ebd:{NFSU2_TR(0x6f5ebd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5ebe:{NFSU2_TR(0x6f5ebe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5ebf:{NFSU2_TR(0x6f5ebf);
w4(R+12,u32(0xf4240ull));
}
B6f5ec4:{NFSU2_TR(0x6f5ec4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5ec9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5e98u);}goto L6f5e98;}
}
B6f5ec9:L6f5ec9:{c.instructions+=2;NFSU2_TR(0x6f5ec9);
__builtin_memmove((R+24),(R+0),4);
}
B6f5ecb:{NFSU2_TR(0x6f5ecb);
__builtin_memmove((R+28),(R+8),4);
}
B6f5ecd:L6f5ecd:{c.instructions+=1;NFSU2_TR(0x6f5ecd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5ed2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5e98u);}goto L6f5e98;}
}
B6f5ed2:L6f5ed2:{c.instructions+=2;NFSU2_TR(0x6f5ed2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f5ed4:{NFSU2_TR(0x6f5ed4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f5ee8;}}
}
B6f5ed6:L6f5ed6:{c.instructions+=2;NFSU2_TR(0x6f5ed6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f5ed8:{NFSU2_TR(0x6f5ed8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f5ee8;}}
}
B6f5eda:L6f5eda:{c.instructions+=5;NFSU2_TR(0x6f5eda);
w1(R+512,carry<u32>(r4(R+12),u32(0xffffffffull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
}
B6f5edd:{NFSU2_TR(0x6f5edd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+8,u32(r1(R+512)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+12,u32(u32(r4(U+4))+u32(u32(0xffffffffull))));
w4(U+4,u32(u32(r4(U+12))+u32(r4(U+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f5ee1:{NFSU2_TR(0x6f5ee1);
__builtin_memmove((R+4),(R+12),4);
}
B6f5ee3:{NFSU2_TR(0x6f5ee3);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))|u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6f5ee6:{NFSU2_TR(0x6f5ee6);
if(r1(R+518)){{goto L6f5ef8;}}
}
B6f5ee8:L6f5ee8:{c.instructions+=4;NFSU2_TR(0x6f5ee8);
w1(R+512,u8((r4(R+0))<(r4(R+24))));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B6f5eea:{NFSU2_TR(0x6f5eea);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+28))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6f5eec:{NFSU2_TR(0x6f5eec);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B6f5eef:{NFSU2_TR(0x6f5eef);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5ecdu);}goto L6f5ecd;}}
}
B6f5ef1:L6f5ef1:{c.instructions+=1;NFSU2_TR(0x6f5ef1);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6f5ef8;}}
}
B6f5ef3:L6f5ef3:{c.instructions+=2;NFSU2_TR(0x6f5ef3);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B6f5ef6:{NFSU2_TR(0x6f5ef6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5ecdu);}goto L6f5ecd;}}
}
B6f5ef8:L6f5ef8:{c.instructions+=5;NFSU2_TR(0x6f5ef8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f5ef9:{NFSU2_TR(0x6f5ef9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f5efa:{NFSU2_TR(0x6f5efa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f5efb:{NFSU2_TR(0x6f5efb);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f5efc:{NFSU2_TR(0x6f5efc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5efd:L6f5efd:{c.instructions+=7;NFSU2_TR(0x6f5efd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5efe:{NFSU2_TR(0x6f5efe);
__builtin_memmove((R+20),(R+16),4);
}
B6f5f00:{NFSU2_TR(0x6f5f00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5f01:{NFSU2_TR(0x6f5f01);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5f02:{NFSU2_TR(0x6f5f02);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f5f05:{NFSU2_TR(0x6f5f05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5f06:{NFSU2_TR(0x6f5f06);
u8 U[4];
__builtin_memmove((U+0),gp(0x783118),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5f0cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f5f0c:L6f5f0c:{c.instructions+=4;NFSU2_TR(0x6f5f0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f5f0f:{NFSU2_TR(0x6f5f0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f5f12:{NFSU2_TR(0x6f5f12);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f5f13:{NFSU2_TR(0x6f5f13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5f14:L6f5f14:{c.instructions+=10;NFSU2_TR(0x6f5f14);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5f15:{NFSU2_TR(0x6f5f15);
__builtin_memmove((R+20),(R+16),4);
}
B6f5f17:{NFSU2_TR(0x6f5f17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6f5f1a:{NFSU2_TR(0x6f5f1a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5f1b:{NFSU2_TR(0x6f5f1b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5f1c:{NFSU2_TR(0x6f5f1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5f1d:{NFSU2_TR(0x6f5f1d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6f5f1f:{NFSU2_TR(0x6f5f1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5f22:{NFSU2_TR(0x6f5f22);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f5f24:{NFSU2_TR(0x6f5f24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5f29ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5efdu);}goto L6f5efd;}
}
B6f5f29:L6f5f29:{c.instructions+=5;NFSU2_TR(0x6f5f29);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5f2a:{NFSU2_TR(0x6f5f2a);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5f2c:{NFSU2_TR(0x6f5f2c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5f2d:{NFSU2_TR(0x6f5f2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5f2e:{NFSU2_TR(0x6f5f2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5f33ull));
TAIL_STATIC(0x75f750u,75f);
}
B6f5f33:L6f5f33:{c.instructions+=2;NFSU2_TR(0x6f5f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5f36:{NFSU2_TR(0x6f5f36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5f39:L6f5f39:{c.instructions+=3;NFSU2_TR(0x6f5f39);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5f3b:{NFSU2_TR(0x6f5f3b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5f3d:{NFSU2_TR(0x6f5f3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5f42ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5eb3u);}goto L6f5eb3;}
}
B6f5f42:L6f5f42:{c.instructions+=7;NFSU2_TR(0x6f5f42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f5f43:{NFSU2_TR(0x6f5f43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f5f44:{NFSU2_TR(0x6f5f44);
u8 U[8];
{SPILL();c.pc=0x6f5f44u;V r_=user_op(c,524364,{});SPILL();wv<8>((U+0),r_);}
w4(R+8,u32(u64(r8(U+0))>>32));
w4(R+0,u32(r8(U+0)));
}
B6f5f46:{NFSU2_TR(0x6f5f46);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f5f49:{NFSU2_TR(0x6f5f49);
__builtin_memmove((R+24),(R+0),4);
}
B6f5f4b:{NFSU2_TR(0x6f5f4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f5f4e:{NFSU2_TR(0x6f5f4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5f53ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5eb3u);}goto L6f5eb3;}
}
B6f5f53:L6f5f53:{c.instructions+=6;NFSU2_TR(0x6f5f53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f5f54:{NFSU2_TR(0x6f5f54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f5f55:{NFSU2_TR(0x6f5f55);
u8 U[8];
{SPILL();c.pc=0x6f5f55u;V r_=user_op(c,524364,{});SPILL();wv<8>((U+0),r_);}
w4(R+8,u32(u64(r8(U+0))>>32));
w4(R+0,u32(r8(U+0)));
}
B6f5f57:{NFSU2_TR(0x6f5f57);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B6f5f59:{NFSU2_TR(0x6f5f59);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f5f5b:{NFSU2_TR(0x6f5f5b);
if(r1(R+518)){{goto L6f5f7a;}}
}
B6f5f5d:L6f5f5d:{c.instructions+=2;NFSU2_TR(0x6f5f5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6f5f60:{NFSU2_TR(0x6f5f60);
if(r1(R+512)){{goto L6f5f74;}}
}
B6f5f62:L6f5f62:{c.instructions+=2;NFSU2_TR(0x6f5f62);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f5f66:{NFSU2_TR(0x6f5f66);
if(r1(R+518)){{goto L6f5f74;}}
}
B6f5f68:L6f5f68:{c.instructions+=2;NFSU2_TR(0x6f5f68);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6f5f6a:{NFSU2_TR(0x6f5f6a);
if(r1(R+512)){{goto L6f5f70;}}
}
B6f5f6c:L6f5f6c:{c.instructions+=2;NFSU2_TR(0x6f5f6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f5f6e:{NFSU2_TR(0x6f5f6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f5f7a;}}
}
B6f5f70:L6f5f70:{c.instructions+=2;NFSU2_TR(0x6f5f70);
__builtin_memmove((R+28),(R+0),4);
}
B6f5f72:{NFSU2_TR(0x6f5f72);
{goto L6f5f7a;}
}
B6f5f74:L6f5f74:{c.instructions+=2;NFSU2_TR(0x6f5f74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f5f77:{NFSU2_TR(0x6f5f77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5f7a:L6f5f7a:{c.instructions+=3;NFSU2_TR(0x6f5f7a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6f5f7b:{NFSU2_TR(0x6f5f7b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f5f7e:{NFSU2_TR(0x6f5f7e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5f39u);}goto L6f5f39;}}
}
B6f5f80:L6f5f80:{c.instructions+=2;NFSU2_TR(0x6f5f80);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f5f82:{NFSU2_TR(0x6f5f82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f5f87;}}
}
B6f5f84:L6f5f84:{c.instructions+=1;NFSU2_TR(0x6f5f84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f5f87:L6f5f87:{c.instructions+=6;NFSU2_TR(0x6f5f87);
__builtin_memmove((R+0),(R+28),4);
}
B6f5f89:{NFSU2_TR(0x6f5f89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f5f8a:{NFSU2_TR(0x6f5f8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f5f8b:{NFSU2_TR(0x6f5f8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f5f8c:{NFSU2_TR(0x6f5f8c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f5f8d:{NFSU2_TR(0x6f5f8d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5f8e:L6f5f8e:{c.instructions+=17;NFSU2_TR(0x6f5f8e);
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
B6f5f8f:{NFSU2_TR(0x6f5f8f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5f90:{NFSU2_TR(0x6f5f90);
__builtin_memmove((R+20),(R+16),4);
}
B6f5f92:{NFSU2_TR(0x6f5f92);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f5f95:{NFSU2_TR(0x6f5f95);
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
B6f5f96:{NFSU2_TR(0x6f5f96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f5f97:{NFSU2_TR(0x6f5f97);
__builtin_memmove((R+4),(R+0),4);
}
B6f5f99:{NFSU2_TR(0x6f5f99);
w4(R+0,u32(u32(r4(R+0))^u32(u32(0x200000ull))));
}
B6f5f9e:{NFSU2_TR(0x6f5f9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5f9f:{NFSU2_TR(0x6f5f9f);
u8 U[48];
__builtin_memmove((R+640),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(U+0,u32(u32(r4(R+640))&u32(u32(0x4000ull))));
w1(R+525,u8((r4(U+0))!=(u32(0x0ull))));
w4(U+4,u32(u32(r4(R+640))&u32(u32(0x800ull))));
w1(R+523,u8((r4(U+4))!=(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+640))&u32(u32(0x400ull))));
w1(R+522,u8((r4(U+8))!=(u32(0x0ull))));
w4(U+12,u32(u32(r4(R+640))&u32(u32(0x200ull))));
w1(R+521,u8((r4(U+12))!=(u32(0x0ull))));
w4(U+16,u32(u32(r4(R+640))&u32(u32(0x100ull))));
w1(R+520,u8((r4(U+16))!=(u32(0x0ull))));
w4(U+20,u32(u32(r4(R+640))&u32(u32(0x80ull))));
w1(R+519,u8((r4(U+20))!=(u32(0x0ull))));
w4(U+24,u32(u32(r4(R+640))&u32(u32(0x40ull))));
w1(R+518,u8((r4(U+24))!=(u32(0x0ull))));
w4(U+28,u32(u32(r4(R+640))&u32(u32(0x10ull))));
w1(R+516,u8((r4(U+28))!=(u32(0x0ull))));
w4(U+32,u32(u32(r4(R+640))&u32(u32(0x4ull))));
w1(R+514,u8((r4(U+32))!=(u32(0x0ull))));
w4(U+36,u32(u32(r4(R+640))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+36))!=(u32(0x0ull))));
w4(U+40,u32(u32(r4(R+640))&u32(u32(0x200000ull))));
w1(R+532,u8((r4(U+40))!=(u32(0x0ull))));
w4(U+44,u32(u32(r4(R+640))&u32(u32(0x40000ull))));
w1(R+529,u8((r4(U+44))!=(u32(0x0ull))));
w1(R+531,u8(0x0ull));
w1(R+530,u8(0x0ull));
}
B6f5fa0:{NFSU2_TR(0x6f5fa0);
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
B6f5fa1:{NFSU2_TR(0x6f5fa1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f5fa2:{NFSU2_TR(0x6f5fa2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B6f5fa4:{NFSU2_TR(0x6f5fa4);
__builtin_memmove((R+16),(R+20),4);
}
B6f5fa6:{NFSU2_TR(0x6f5fa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f5fa7:{NFSU2_TR(0x6f5fa7);
u8 U[48];
__builtin_memmove((R+640),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(U+0,u32(u32(r4(R+640))&u32(u32(0x4000ull))));
w1(R+525,u8((r4(U+0))!=(u32(0x0ull))));
w4(U+4,u32(u32(r4(R+640))&u32(u32(0x800ull))));
w1(R+523,u8((r4(U+4))!=(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+640))&u32(u32(0x400ull))));
w1(R+522,u8((r4(U+8))!=(u32(0x0ull))));
w4(U+12,u32(u32(r4(R+640))&u32(u32(0x200ull))));
w1(R+521,u8((r4(U+12))!=(u32(0x0ull))));
w4(U+16,u32(u32(r4(R+640))&u32(u32(0x100ull))));
w1(R+520,u8((r4(U+16))!=(u32(0x0ull))));
w4(U+20,u32(u32(r4(R+640))&u32(u32(0x80ull))));
w1(R+519,u8((r4(U+20))!=(u32(0x0ull))));
w4(U+24,u32(u32(r4(R+640))&u32(u32(0x40ull))));
w1(R+518,u8((r4(U+24))!=(u32(0x0ull))));
w4(U+28,u32(u32(r4(R+640))&u32(u32(0x10ull))));
w1(R+516,u8((r4(U+28))!=(u32(0x0ull))));
w4(U+32,u32(u32(r4(R+640))&u32(u32(0x4ull))));
w1(R+514,u8((r4(U+32))!=(u32(0x0ull))));
w4(U+36,u32(u32(r4(R+640))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+36))!=(u32(0x0ull))));
w4(U+40,u32(u32(r4(R+640))&u32(u32(0x200000ull))));
w1(R+532,u8((r4(U+40))!=(u32(0x0ull))));
w4(U+44,u32(u32(r4(R+640))&u32(u32(0x40000ull))));
w1(R+529,u8((r4(U+44))!=(u32(0x0ull))));
w1(R+531,u8(0x0ull));
w1(R+530,u8(0x0ull));
}
B6f5fa8:{NFSU2_TR(0x6f5fa8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5fa9:L6f5fa9:{c.instructions+=15;NFSU2_TR(0x6f5fa9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5faa:{NFSU2_TR(0x6f5faa);
__builtin_memmove((R+20),(R+16),4);
}
B6f5fac:{NFSU2_TR(0x6f5fac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5fad:{NFSU2_TR(0x6f5fad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5fae:{NFSU2_TR(0x6f5fae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f5fb1:{NFSU2_TR(0x6f5fb1);
u8 U[32];
w4(U+0,u32(0x0ull));
w1(U+4,u8((r4(R+0))==(u32(0x0ull))));
if(r1(U+4)){goto L6f5fb1_35;}
w1(U+5,u8((r4(R+0))==(u32(0x1ull))));
if(r1(U+5)){goto L6f5fb1_37;}
w1(U+6,u8((r4(R+0))==(u32(0x2ull))));
if(r1(U+6)){goto L6f5fb1_39;}
w1(U+7,u8((r4(R+0))==(u32(0x3ull))));
if(r1(U+7)){goto L6f5fb1_41;}
w1(U+8,u8((r4(R+0))==(u32(0x4ull))));
if(r1(U+8)){goto L6f5fb1_43;}
w1(U+9,u8((r4(R+0))==(u32(0x5ull))));
if(r1(U+9)){goto L6f5fb1_45;}
w1(U+10,u8((r4(R+0))==(u32(0x6ull))));
if(r1(U+10)){goto L6f5fb1_47;}
w1(U+11,u8((r4(R+0))==(u32(0x7ull))));
if(r1(U+11)){goto L6f5fb1_49;}
w1(U+12,u8((r4(R+0))==(u32(0x9ull))));
if(r1(U+12)){goto L6f5fb1_51;}
w1(U+13,u8((r4(R+0))==(u32(0xaull))));
if(r1(U+13)){goto L6f5fb1_53;}
w1(U+14,u8((r4(R+0))==(u32(0xbull))));
if(r1(U+14)){goto L6f5fb1_55;}
w1(U+15,u8((r4(R+0))==(u32(0xdull))));
if(r1(U+15)){goto L6f5fb1_57;}
w1(U+16,u8((r4(R+0))==(u32(0xfull))));
if(r1(U+16)){goto L6f5fb1_59;}
w1(U+17,u8((r4(R+0))==(u32(0x80000002ull))));
if(r1(U+17)){goto L6f5fb1_61;}
w1(U+18,u8((r4(R+0))==(u32(0x80000003ull))));
if(r1(U+18)){goto L6f5fb1_63;}
w1(U+19,u8((r4(R+0))==(u32(0x80000004ull))));
if(r1(U+19)){goto L6f5fb1_65;}
{SPILL();c.pc=0x6f5fb1u;V r_=user_op(c,262189,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f5fb1_67;
L6f5fb1_35:;
{SPILL();c.pc=0x6f5fb1u;V r_=user_op(c,262190,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f5fb1_67;
L6f5fb1_37:;
{SPILL();c.pc=0x6f5fb1u;V r_=user_op(c,262191,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f5fb1_67;
L6f5fb1_39:;
{SPILL();c.pc=0x6f5fb1u;V r_=user_op(c,262192,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f5fb1_67;
L6f5fb1_41:;
{SPILL();c.pc=0x6f5fb1u;V r_=user_op(c,262193,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f5fb1_67;
L6f5fb1_43:;
{SPILL();c.pc=0x6f5fb1u;V r_=user_op(c,262194,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f5fb1_67;
L6f5fb1_45:;
{SPILL();c.pc=0x6f5fb1u;V r_=user_op(c,262195,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f5fb1_67;
L6f5fb1_47:;
{SPILL();c.pc=0x6f5fb1u;V r_=user_op(c,262196,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f5fb1_67;
L6f5fb1_49:;
{SPILL();c.pc=0x6f5fb1u;V r_=user_op(c,262197,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f5fb1_67;
L6f5fb1_51:;
{SPILL();c.pc=0x6f5fb1u;V r_=user_op(c,262198,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f5fb1_67;
L6f5fb1_53:;
{SPILL();c.pc=0x6f5fb1u;V r_=user_op(c,262199,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f5fb1_67;
L6f5fb1_55:;
{SPILL();c.pc=0x6f5fb1u;V r_=user_op(c,262200,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f5fb1_67;
L6f5fb1_57:;
{SPILL();c.pc=0x6f5fb1u;V r_=user_op(c,262201,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f5fb1_67;
L6f5fb1_59:;
{SPILL();c.pc=0x6f5fb1u;V r_=user_op(c,262202,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f5fb1_67;
L6f5fb1_61:;
{SPILL();c.pc=0x6f5fb1u;V r_=user_op(c,262203,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f5fb1_67;
L6f5fb1_63:;
{SPILL();c.pc=0x6f5fb1u;V r_=user_op(c,262204,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f5fb1_67;
L6f5fb1_65:;
{SPILL();c.pc=0x6f5fb1u;V r_=user_op(c,262205,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f5fb1_67;
L6f5fb1_67:;
__builtin_memmove((R+0),gp(u32(r4(U+0))),4);
w4(U+20,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(U+20))),4);
w4(U+24,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),gp(u32(r4(U+24))),4);
w4(U+28,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),gp(u32(r4(U+28))),4);
}
B6f5fb3:{NFSU2_TR(0x6f5fb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f5fb6:{NFSU2_TR(0x6f5fb6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6f5fb8:{NFSU2_TR(0x6f5fb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5fbb:{NFSU2_TR(0x6f5fbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5fbe:{NFSU2_TR(0x6f5fbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f5fc1:{NFSU2_TR(0x6f5fc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f5fc2:{NFSU2_TR(0x6f5fc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f5fc3:{NFSU2_TR(0x6f5fc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f5fc4:{NFSU2_TR(0x6f5fc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5fc5:L6f5fc5:{c.instructions+=10;NFSU2_TR(0x6f5fc5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5fc6:{NFSU2_TR(0x6f5fc6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f5fc8:{NFSU2_TR(0x6f5fc8);
u8 U[5];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x80ull))));
w1(R+519,u8((r1(U+0))!=(u8(0x0ull))));
w1(U+1,u8(u32(r1(R+1))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+1))!=(u8(0x0ull))));
w1(U+2,u8(u32(r1(R+1))&u32(u8(0x10ull))));
w1(R+516,u8((r1(U+2))!=(u8(0x0ull))));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x4ull))));
w1(R+514,u8((r1(U+3))!=(u8(0x0ull))));
w1(U+4,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+512,u8((r1(U+4))!=(u8(0x0ull))));
}
B6f5fc9:{NFSU2_TR(0x6f5fc9);
w4(R+0,u32(0x5ull));
}
B6f5fce:{NFSU2_TR(0x6f5fce);
w4(R+12,u32(0x2ull));
}
B6f5fd3:{NFSU2_TR(0x6f5fd3);
u8 U[6];
w2(U+0,u16(r1(R+12)));
{u64 d_=u64(r2(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6f5fd3);w2(U+2,u16(u64(r2(R+0))/d_));}
{u64 d_=u64(r2(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6f5fd3);w2(U+4,u16(u64(r2(R+0))%d_));}
w1(R+0,u8(r2(U+2)));
w1(R+1,u8(r2(U+4)));
}
B6f5fd5:{NFSU2_TR(0x6f5fd5);
u8 U[8];
w1(U+0,shl<u8>(r1(R+519),u64(u32(0x7ull))));
w1(U+1,shl<u8>(r1(R+518),u64(u32(0x6ull))));
w1(U+2,u8(u32(r1(U+0))|u32(r1(U+1))));
w1(U+3,shl<u8>(r1(R+516),u64(u32(0x4ull))));
w1(U+4,u8(u32(r1(U+2))|u32(r1(U+3))));
w1(U+5,shl<u8>(r1(R+514),u64(u32(0x2ull))));
w1(U+6,u8(u32(r1(U+4))|u32(r1(U+5))));
w1(U+7,u8(u32(r1(U+6))|u32(u8(0x2ull))));
w1(R+1,u8(u32(r1(U+7))|u32(r1(R+512))));
}
B6f5fd6:{NFSU2_TR(0x6f5fd6);
u8 U[5];
__builtin_memmove((U+3),(R+1),1);
w1(R+512,u8((r1(U+3))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x2ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6f5fd9:{NFSU2_TR(0x6f5fd9);
w4(R+0,u32(0x0ull));
}
B6f5fde:{NFSU2_TR(0x6f5fde);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f5fe5;}}
}
B6f5fe0:L6f5fe0:{c.instructions+=1;NFSU2_TR(0x6f5fe0);
w4(R+0,u32(0x1ull));
}
B6f5fe5:L6f5fe5:{c.instructions+=2;NFSU2_TR(0x6f5fe5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f5fe6:{NFSU2_TR(0x6f5fe6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f5fe7:L6f5fe7:{c.instructions+=9;NFSU2_TR(0x6f5fe7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5fe8:{NFSU2_TR(0x6f5fe8);
__builtin_memmove((R+20),(R+16),4);
}
B6f5fea:{NFSU2_TR(0x6f5fea);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f5fed:{NFSU2_TR(0x6f5fed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5fee:{NFSU2_TR(0x6f5fee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5fef:{NFSU2_TR(0x6f5fef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5ff0:{NFSU2_TR(0x6f5ff0);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5ff2:{NFSU2_TR(0x6f5ff2);
u8 U[4];
w4(U+0,u32(0x8ad448ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f5ff7:{NFSU2_TR(0x6f5ff7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f5ffcull));
TAIL_STATIC(0x6fafedu,6fa);
}
B6f5ffc:L6f5ffc:{c.instructions+=3;NFSU2_TR(0x6f5ffc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f5ffd:{NFSU2_TR(0x6f5ffd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f5ffe:{NFSU2_TR(0x6f5ffe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6003ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f5f8eu);}goto L6f5f8e;}
}
XIT:NFSU2_TR_EXIT(0x6f5,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
