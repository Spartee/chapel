/***************************************************************
This code was generated by  Spiral 5.0 beta, www.spiral.net --
Copyright (c) 2005, Carnegie Mellon University
All rights reserved.
The code is distributed under a BSD style license
(see http://www.opensource.org/licenses/bsd-license.php)

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are
met:

* Redistributions of source code must retain the above copyright
  notice, reference to Spiral, this list of conditions and the
  following disclaimer.
* Redistributions in binary form must reproduce the above
  copyright notice, this list of conditions and the following
  disclaimer in the documentation and/or other materials provided
  with the distribution.
* Neither the name of Carnegie Mellon University nor the name of its
  contributors may be used to endorse or promote products derived from
  this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
*AS IS* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
******************************************************************/

#include "omega64c.h"
static double D137[56];
static double D138[56];

void init_fft128() {
    for(int i21730 = 0; i21730 <= 6; i21730++) {
        for(int i21745 = 0; i21745 <= 3; i21745++) {
            D137[((i21730*8) + (i21745*2))] = omega(128, ((i21730 + 1)*i21745));
            D137[((i21730*8) + (i21745*2) + 1)] = omega(128, ((i21730 + 1)*(i21745 + 4)));
        }
    }
    for(int i21731 = 0; i21731 <= 6; i21731++) {
        for(int i21755 = 0; i21755 <= 3; i21755++) {
            D138[((i21731*8) + (i21755*2))] = omega(128, ((9 + i21731)*i21755));
            D138[((i21731*8) + (i21755*2) + 1)] = omega(128, ((9 + i21731)*(i21755 + 4)));
        }
    }

}

void fft128(_Complex double  *Y, _Complex double  *X) {
    static _Complex double T5632[128];
    _Complex double a41039, a41040, a41041, a41042, a41043, a41044, a41045, a41046, a41047, s16100, s16101, s16102, s16103, t43460, t43461, t43462, t43463, t43464, t43465, t43466, t43467, t43468, t43469, t43470;
    a41039 = *(X);
    a41040 = *((X + 64));
    t43460 = (a41039 + a41040);
    t43461 = (a41039 - a41040);
    a41041 = *((X + 32));
    a41042 = *((X + 96));
    t43462 = (a41041 + a41042);
    t43463 = (t43460 + t43462);
    t43464 = (t43460 - t43462);
    a41043 = (__I__*(a41041 - a41042));
    t43465 = (t43461 + a41043);
    t43466 = (t43461 - a41043);
    a41044 = *((X + 16));
    a41045 = *((X + 80));
    t43467 = (a41044 + a41045);
    s16100 = ((0.70710678118654757 + __I__ * 0.70710678118654757)*(a41044 - a41045));
    a41046 = *((X + 48));
    a41047 = *((X + 112));
    t43468 = (a41046 + a41047);
    s16101 = ((-0.70710678118654757 + __I__ * 0.70710678118654757)*(a41046 - a41047));
    t43469 = (t43467 + t43468);
    s16102 = (__I__*(t43467 - t43468));
    t43470 = (s16100 + s16101);
    s16103 = (__I__*(s16100 - s16101));
    *(T5632) = (t43463 + t43469);
    *((T5632 + 64)) = (t43463 - t43469);
    *((T5632 + 16)) = (t43465 + t43470);
    *((T5632 + 80)) = (t43465 - t43470);
    *((T5632 + 32)) = (t43464 + s16102);
    *((T5632 + 96)) = (t43464 - s16102);
    *((T5632 + 48)) = (t43466 + s16103);
    *((T5632 + 112)) = (t43466 - s16103);
    for(int i21730 = 0; i21730 <= 6; i21730++) {
        _Complex double a41125, s16144, s16145, s16146, s16147, s16148, s16149, s16150, s16151, s16152, s16153, s16154, s16155, t43519, t43520, t43521, t43522, t43523, t43524, t43525, t43526, t43527, t43528, t43529;
        double  *a41126;
        _Complex double  *b3458;
        _Complex double  *b3459;
        b3458 = (X + i21730);
        s16144 = *((b3458 + 1));
        s16145 = *((b3458 + 65));
        t43519 = (s16144 + s16145);
        t43520 = (s16144 - s16145);
        s16146 = *((b3458 + 33));
        s16147 = *((b3458 + 97));
        t43521 = (s16146 + s16147);
        t43522 = (t43519 + t43521);
        t43523 = (t43519 - t43521);
        a41125 = (__I__*(s16146 - s16147));
        t43524 = (t43520 + a41125);
        t43525 = (t43520 - a41125);
        s16148 = *((b3458 + 17));
        s16149 = *((b3458 + 81));
        t43526 = (s16148 + s16149);
        s16150 = ((0.70710678118654757 + __I__ * 0.70710678118654757)*(s16148 - s16149));
        s16151 = *((b3458 + 49));
        s16152 = *((b3458 + 113));
        t43527 = (s16151 + s16152);
        s16153 = ((-0.70710678118654757 + __I__ * 0.70710678118654757)*(s16151 - s16152));
        t43528 = (t43526 + t43527);
        s16154 = (__I__*(t43526 - t43527));
        t43529 = (s16150 + s16153);
        s16155 = (__I__*(s16150 - s16153));
        a41126 = (D137 + (8*i21730));
        b3459 = (T5632 + i21730);
        *((b3459 + 1)) = (*(a41126)*(t43522 + t43528));
        *((b3459 + 65)) = (*((a41126 + 1))*(t43522 - t43528));
        *((b3459 + 17)) = (*((a41126 + 2))*(t43524 + t43529));
        *((b3459 + 81)) = (*((a41126 + 3))*(t43524 - t43529));
        *((b3459 + 33)) = (*((a41126 + 4))*(t43523 + s16154));
        *((b3459 + 97)) = (*((a41126 + 5))*(t43523 - s16154));
        *((b3459 + 49)) = (*((a41126 + 6))*(t43525 + s16155));
        *((b3459 + 113)) = (*((a41126 + 7))*(t43525 - s16155));
    }
    _Complex double a41215, a41216, a41217, a41218, a41219, a41220, a41221, a41222, a41223, a41224, s16168, s16169, s16170, s16171, s16172, s16173, t43578, t43579, t43580, t43581, t43582, t43583, t43584, t43585;
    a41215 = *((X + 8));
    a41216 = *((X + 72));
    t43578 = (a41215 + a41216);
    t43579 = (a41215 - a41216);
    a41217 = *((X + 40));
    a41218 = *((X + 104));
    t43580 = (a41217 + a41218);
    t43581 = (t43578 + t43580);
    s16168 = ((0.70710678118654757 + __I__ * 0.70710678118654757)*(t43578 - t43580));
    a41219 = (__I__*(a41217 - a41218));
    s16169 = ((0.92387953251128674 + __I__ * 0.38268343236508978)*(t43579 + a41219));
    s16170 = ((0.38268343236508978 + __I__ * 0.92387953251128674)*(t43579 - a41219));
    a41220 = *((X + 24));
    a41221 = *((X + 88));
    t43582 = (a41220 + a41221);
    t43583 = (a41220 - a41221);
    a41222 = *((X + 56));
    a41223 = *((X + 120));
    t43584 = (a41222 + a41223);
    t43585 = (t43582 + t43584);
    s16171 = ((-0.70710678118654757 + __I__ * 0.70710678118654757)*(t43582 - t43584));
    a41224 = (__I__*(a41222 - a41223));
    s16172 = ((0.38268343236508978 + __I__ * 0.92387953251128674)*(t43583 + a41224));
    s16173 = ((-0.92387953251128674 - __I__ * 0.38268343236508978)*(t43583 - a41224));
    *((T5632 + 8)) = (t43581 + t43585);
    *((T5632 + 72)) = ((__I__*t43581) + ((- __I__)*t43585));
    *((T5632 + 24)) = (s16169 + s16172);
    *((T5632 + 88)) = ((__I__*s16169) + ((- __I__)*s16172));
    *((T5632 + 40)) = (s16168 + s16171);
    *((T5632 + 104)) = ((__I__*s16168) + ((- __I__)*s16171));
    *((T5632 + 56)) = (s16170 + s16173);
    *((T5632 + 120)) = ((__I__*s16170) + ((- __I__)*s16173));
    for(int i21731 = 0; i21731 <= 6; i21731++) {
        _Complex double a41302, s16214, s16215, s16216, s16217, s16218, s16219, s16220, s16221, s16222, s16223, s16224, s16225, t43634, t43635, t43636, t43637, t43638, t43639, t43640, t43641, t43642, t43643, t43644;
        double  *a41303;
        _Complex double  *b3485;
        _Complex double  *b3486;
        b3485 = (X + i21731);
        s16214 = *((b3485 + 9));
        s16215 = *((b3485 + 73));
        t43634 = (s16214 + s16215);
        t43635 = (s16214 - s16215);
        s16216 = *((b3485 + 41));
        s16217 = *((b3485 + 105));
        t43636 = (s16216 + s16217);
        t43637 = (t43634 + t43636);
        t43638 = (t43634 - t43636);
        a41302 = (__I__*(s16216 - s16217));
        t43639 = (t43635 + a41302);
        t43640 = (t43635 - a41302);
        s16218 = *((b3485 + 25));
        s16219 = *((b3485 + 89));
        t43641 = (s16218 + s16219);
        s16220 = ((0.70710678118654757 + __I__ * 0.70710678118654757)*(s16218 - s16219));
        s16221 = *((b3485 + 57));
        s16222 = *((b3485 + 121));
        t43642 = (s16221 + s16222);
        s16223 = ((-0.70710678118654757 + __I__ * 0.70710678118654757)*(s16221 - s16222));
        t43643 = (t43641 + t43642);
        s16224 = (__I__*(t43641 - t43642));
        t43644 = (s16220 + s16223);
        s16225 = (__I__*(s16220 - s16223));
        a41303 = (D138 + (8*i21731));
        b3486 = (T5632 + i21731);
        *((b3486 + 9)) = (*(a41303)*(t43637 + t43643));
        *((b3486 + 73)) = (*((a41303 + 1))*(t43637 - t43643));
        *((b3486 + 25)) = (*((a41303 + 2))*(t43639 + t43644));
        *((b3486 + 89)) = (*((a41303 + 3))*(t43639 - t43644));
        *((b3486 + 41)) = (*((a41303 + 4))*(t43638 + s16224));
        *((b3486 + 105)) = (*((a41303 + 5))*(t43638 - s16224));
        *((b3486 + 57)) = (*((a41303 + 6))*(t43640 + s16225));
        *((b3486 + 121)) = (*((a41303 + 7))*(t43640 - s16225));
    }
    for(int i21732 = 0; i21732 <= 7; i21732++) {
        _Complex double a41418, a41419, a41420, a41421, a41423, a41424, a41425, a41426, s16276, s16277, s16278, s16279, s16280, s16281, s16282, s16283, s16284, s16285, s16286, s16287, s16288, s16289, s16290, s16291, s16292, s16293, s16294, s16295, s16296, s16297, s16298, s16299, s16300, t43773, t43774, t43775, t43776, t43777, t43778, t43779, t43780, t43781, t43782, t43783, t43784, t43785, t43786, t43787, t43788, t43789, t43790, t43791, t43792, t43793, t43794, t43795, t43796, t43797, t43798, t43799, t43800, t43801, t43802, t43803;
        _Complex double  *a41417;
        _Complex double  *a41422;
        a41417 = (T5632 + (16*i21732));
        s16276 = *(a41417);
        s16277 = *((a41417 + 8));
        t43773 = (s16276 + s16277);
        t43774 = (s16276 - s16277);
        s16278 = *((a41417 + 4));
        s16279 = *((a41417 + 12));
        t43775 = (s16278 + s16279);
        t43776 = (t43773 + t43775);
        t43777 = (t43773 - t43775);
        a41418 = (__I__*(s16278 - s16279));
        t43778 = (t43774 + a41418);
        t43779 = (t43774 - a41418);
        s16280 = *((a41417 + 1));
        s16281 = *((a41417 + 9));
        t43780 = (s16280 + s16281);
        t43781 = (s16280 - s16281);
        s16282 = *((a41417 + 5));
        s16283 = *((a41417 + 13));
        t43782 = (s16282 + s16283);
        t43783 = (t43780 + t43782);
        s16284 = ((0.70710678118654757 + __I__ * 0.70710678118654757)*(t43780 - t43782));
        a41419 = (__I__*(s16282 - s16283));
        s16285 = ((0.92387953251128674 + __I__ * 0.38268343236508978)*(t43781 + a41419));
        s16286 = ((0.38268343236508978 + __I__ * 0.92387953251128674)*(t43781 - a41419));
        s16287 = *((a41417 + 2));
        s16288 = *((a41417 + 10));
        t43784 = (s16287 + s16288);
        t43785 = (s16287 - s16288);
        s16289 = *((a41417 + 6));
        s16290 = *((a41417 + 14));
        t43786 = (s16289 + s16290);
        t43787 = (t43784 + t43786);
        s16291 = (__I__*(t43784 - t43786));
        a41420 = (__I__*(s16289 - s16290));
        s16292 = ((0.70710678118654757 + __I__ * 0.70710678118654757)*(t43785 + a41420));
        s16293 = ((-0.70710678118654757 + __I__ * 0.70710678118654757)*(t43785 - a41420));
        s16294 = *((a41417 + 3));
        s16295 = *((a41417 + 11));
        t43788 = (s16294 + s16295);
        t43789 = (s16294 - s16295);
        s16296 = *((a41417 + 7));
        s16297 = *((a41417 + 15));
        t43790 = (s16296 + s16297);
        t43791 = (t43788 + t43790);
        s16298 = ((-0.70710678118654757 + __I__ * 0.70710678118654757)*(t43788 - t43790));
        a41421 = (__I__*(s16296 - s16297));
        s16299 = ((0.38268343236508978 + __I__ * 0.92387953251128674)*(t43789 + a41421));
        s16300 = ((-0.92387953251128674 - __I__ * 0.38268343236508978)*(t43789 - a41421));
        t43792 = (t43776 + t43787);
        t43793 = (t43776 - t43787);
        t43794 = (t43783 + t43791);
        a41422 = (Y + i21732);
        *(a41422) = (t43792 + t43794);
        *((a41422 + 64)) = (t43792 - t43794);
        a41423 = (__I__*(t43783 - t43791));
        *((a41422 + 32)) = (t43793 + a41423);
        *((a41422 + 96)) = (t43793 - a41423);
        t43795 = (t43778 + s16292);
        t43796 = (t43778 - s16292);
        t43797 = (s16285 + s16299);
        *((a41422 + 8)) = (t43795 + t43797);
        *((a41422 + 72)) = (t43795 - t43797);
        a41424 = (__I__*(s16285 - s16299));
        *((a41422 + 40)) = (t43796 + a41424);
        *((a41422 + 104)) = (t43796 - a41424);
        t43798 = (t43777 + s16291);
        t43799 = (t43777 - s16291);
        t43800 = (s16284 + s16298);
        *((a41422 + 16)) = (t43798 + t43800);
        *((a41422 + 80)) = (t43798 - t43800);
        a41425 = (__I__*(s16284 - s16298));
        *((a41422 + 48)) = (t43799 + a41425);
        *((a41422 + 112)) = (t43799 - a41425);
        t43801 = (t43779 + s16293);
        t43802 = (t43779 - s16293);
        t43803 = (s16286 + s16300);
        *((a41422 + 24)) = (t43801 + t43803);
        *((a41422 + 88)) = (t43801 - t43803);
        a41426 = (__I__*(s16286 - s16300));
        *((a41422 + 56)) = (t43802 + a41426);
        *((a41422 + 120)) = (t43802 - a41426);
    }

}
