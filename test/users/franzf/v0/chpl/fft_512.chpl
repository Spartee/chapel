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

use omega;
var  buf6: [0..511] complex;
var  buf7: [0..63] complex;
var  dat11: [0..123] complex;
var  dat12: [0..123] complex;
var  dat13: [0..123] complex;
var  dat14: [0..123] complex;
var  dat15: [0..27] complex;
var  dat16: [0..27] complex;

def init_fft512() {
    for i125905 in [0..30] {
        for i125941 in [0..1] {
            dat11(((i125905*4) + (i125941*2))) = omega(512, ((i125905 + 1)*(i125941*2)));
            dat11(((i125905*4) + (i125941*2) + 1)) = omega(512, ((i125905 + 1)*((i125941*2) + 4)));
        }
    }
    for i125905 in [0..30] {
        for i125919 in [0..1] {
            dat12(((i125905*4) + (i125919*2))) = omega(512, ((i125905 + 1)*(1 + (i125919*2))));
            dat12(((i125905*4) + (i125919*2) + 1)) = omega(512, ((i125905 + 1)*(5 + (i125919*2))));
        }
    }
    for i125906 in [0..30] {
        for i125949 in [0..1] {
            dat13(((i125906*4) + (i125949*2))) = omega(512, ((33 + i125906)*(i125949*2)));
            dat13(((i125906*4) + (i125949*2) + 1)) = omega(512, ((33 + i125906)*((i125949*2) + 4)));
        }
    }
    for i125906 in [0..30] {
        for i125929 in [0..1] {
            dat14(((i125906*4) + (i125929*2))) = omega(512, ((33 + i125906)*(1 + (i125929*2))));
            dat14(((i125906*4) + (i125929*2) + 1)) = omega(512, ((33 + i125906)*(5 + (i125929*2))));
        }
    }
    for i125931 in [0..6] {
        for i125957 in [0..1] {
            dat15(((i125931*4) + (i125957*2))) = omega(64, ((i125931 + 1)*i125957));
            dat15(((i125931*4) + (i125957*2) + 1)) = omega(64, ((i125931 + 1)*(i125957 + 2)));
        }
    }
    for i125932 in [0..6] {
        for i125965 in [0..1] {
            dat16(((i125932*4) + (i125965*2))) = omega(64, ((9 + i125932)*i125965));
            dat16(((i125932*4) + (i125965*2) + 1)) = omega(64, ((9 + i125932)*(i125965 + 2)));
        }
    }

}

def fft512(Y: [0..511] complex, X: [0..511] complex) {
    for i125907 in [0..7] {
        for i125933 in [0..3] {
            var a215225, a215226, a215227, a215228, a215230, a215231, a215232, a215233, s92772, s92773, s92774, s92775, s92776, s92777, s92778, s92779, s92780, s92781, s92782, s92783, s92784, s92785, s92786, s92787, s92788, s92789, s92790, s92791, s92792, s92793, s92794, s92795, s92796, t193059, t193060, t193061, t193062, t193063, t193064, t193065, t193066, t193067, t193068, t193069, t193070, t193071, t193072, t193073, t193074, t193075, t193076, t193077, t193078, t193079, t193080, t193081, t193082, t193083, t193084, t193085, t193086, t193087, t193088, t193089:complex;
            var a215224, a215229:int;
            a215224 = (i125907 + (8*i125933));
            s92772 = X(a215224);
            s92773 = X((a215224 + 256));
            t193059 = (s92772 + s92773);
            t193060 = (s92772 - s92773);
            s92774 = X((a215224 + 128));
            s92775 = X((a215224 + 384));
            t193061 = (s92774 + s92775);
            t193062 = (t193059 + t193061);
            t193063 = (t193059 - t193061);
            a215225 = (1.0i*(s92774 - s92775));
            t193064 = (t193060 + a215225);
            t193065 = (t193060 - a215225);
            s92776 = X((a215224 + 32));
            s92777 = X((a215224 + 288));
            t193066 = (s92776 + s92777);
            t193067 = (s92776 - s92777);
            s92778 = X((a215224 + 160));
            s92779 = X((a215224 + 416));
            t193068 = (s92778 + s92779);
            t193069 = (t193066 + t193068);
            s92780 = ((0.70710678118654757 + 1.0i * 0.70710678118654757)*(t193066 - t193068));
            a215226 = (1.0i*(s92778 - s92779));
            s92781 = ((0.92387953251128674 + 1.0i * 0.38268343236508978)*(t193067 + a215226));
            s92782 = ((0.38268343236508978 + 1.0i * 0.92387953251128674)*(t193067 - a215226));
            s92783 = X((a215224 + 64));
            s92784 = X((a215224 + 320));
            t193070 = (s92783 + s92784);
            t193071 = (s92783 - s92784);
            s92785 = X((a215224 + 192));
            s92786 = X((a215224 + 448));
            t193072 = (s92785 + s92786);
            t193073 = (t193070 + t193072);
            s92787 = (1.0i*(t193070 - t193072));
            a215227 = (1.0i*(s92785 - s92786));
            s92788 = ((0.70710678118654757 + 1.0i * 0.70710678118654757)*(t193071 + a215227));
            s92789 = ((-0.70710678118654757 + 1.0i * 0.70710678118654757)*(t193071 - a215227));
            s92790 = X((a215224 + 96));
            s92791 = X((a215224 + 352));
            t193074 = (s92790 + s92791);
            t193075 = (s92790 - s92791);
            s92792 = X((a215224 + 224));
            s92793 = X((a215224 + 480));
            t193076 = (s92792 + s92793);
            t193077 = (t193074 + t193076);
            s92794 = ((-0.70710678118654757 + 1.0i * 0.70710678118654757)*(t193074 - t193076));
            a215228 = (1.0i*(s92792 - s92793));
            s92795 = ((0.38268343236508978 + 1.0i * 0.92387953251128674)*(t193075 + a215228));
            s92796 = ((-0.92387953251128674 - 1.0i * 0.38268343236508978)*(t193075 - a215228));
            t193078 = (t193062 + t193073);
            t193079 = (t193062 - t193073);
            t193080 = (t193069 + t193077);
            a215229 = (16*i125933);
            buf7(a215229) = (t193078 + t193080);
            buf7((8 + a215229)) = (t193078 - t193080);
            a215230 = (1.0i*(t193069 - t193077));
            buf7((4 + a215229)) = (t193079 + a215230);
            buf7((12 + a215229)) = (t193079 - a215230);
            t193081 = (t193064 + s92788);
            t193082 = (t193064 - s92788);
            t193083 = (s92781 + s92795);
            buf7((1 + a215229)) = (t193081 + t193083);
            buf7((9 + a215229)) = (t193081 - t193083);
            a215231 = (1.0i*(s92781 - s92795));
            buf7((5 + a215229)) = (t193082 + a215231);
            buf7((13 + a215229)) = (t193082 - a215231);
            t193084 = (t193063 + s92787);
            t193085 = (t193063 - s92787);
            t193086 = (s92780 + s92794);
            buf7((2 + a215229)) = (t193084 + t193086);
            buf7((10 + a215229)) = (t193084 - t193086);
            a215232 = (1.0i*(s92780 - s92794));
            buf7((6 + a215229)) = (t193085 + a215232);
            buf7((14 + a215229)) = (t193085 - a215232);
            t193087 = (t193065 + s92789);
            t193088 = (t193065 - s92789);
            t193089 = (s92782 + s92796);
            buf7((3 + a215229)) = (t193087 + t193089);
            buf7((11 + a215229)) = (t193087 - t193089);
            a215233 = (1.0i*(s92782 - s92796));
            buf7((7 + a215229)) = (t193088 + a215233);
            buf7((15 + a215229)) = (t193088 - a215233);
        }
        var a215258, t193106, t193107, t193108:complex;
        var a215257:int;
        t193106 = (buf7(0) + buf7(32));
        t193107 = (buf7(0) - buf7(32));
        t193108 = (buf7(16) + buf7(48));
        a215257 = (64*i125907);
        buf6(a215257) = (t193106 + t193108);
        buf6((a215257 + 32)) = (t193106 - t193108);
        a215258 = (1.0i*(buf7(16) - buf7(48)));
        buf6((16 + a215257)) = (t193107 + a215258);
        buf6((48 + a215257)) = (t193107 - a215258);
        for i125931 in [0..6] {
            var a215304, s92813, s92814, s92815, s92816, t193125, t193126, t193127:complex;
            var a215303, b45127:int;
            a215303 = (4*i125931);
            s92813 = (dat15(a215303)*buf7((1 + i125931)));
            s92814 = (dat15((1 + a215303))*buf7((33 + i125931)));
            t193125 = (s92813 + s92814);
            t193126 = (s92813 - s92814);
            s92815 = (dat15((2 + a215303))*buf7((17 + i125931)));
            s92816 = (dat15((3 + a215303))*buf7((49 + i125931)));
            t193127 = (s92815 + s92816);
            b45127 = ((64*i125907) + i125931);
            buf6((b45127 + 1)) = (t193125 + t193127);
            buf6((b45127 + 33)) = (t193125 - t193127);
            a215304 = (1.0i*(s92815 - s92816));
            buf6((b45127 + 17)) = (t193126 + a215304);
            buf6((b45127 + 49)) = (t193126 - a215304);
        }
        var s92821, s92822, t193144, t193145:complex;
        var a215334:int;
        t193144 = (buf7(8) + (1.0i*buf7(40)));
        t193145 = (buf7(8) + ((- 1.0i)*buf7(40)));
        s92821 = ((0.70710678118654757 + 1.0i * 0.70710678118654757)*(buf7(24) + (1.0i*buf7(56))));
        s92822 = ((-0.70710678118654757 + 1.0i * 0.70710678118654757)*(buf7(24) + ((- 1.0i)*buf7(56))));
        a215334 = (64*i125907);
        buf6((8 + a215334)) = (t193144 + s92821);
        buf6((40 + a215334)) = (t193144 - s92821);
        buf6((24 + a215334)) = (t193145 + s92822);
        buf6((56 + a215334)) = (t193145 - s92822);
        for i125932 in [0..6] {
            var a215380, s92839, s92840, s92841, s92842, t193162, t193163, t193164:complex;
            var a215379, b45133:int;
            a215379 = (4*i125932);
            s92839 = (dat16(a215379)*buf7((9 + i125932)));
            s92840 = (dat16((1 + a215379))*buf7((41 + i125932)));
            t193162 = (s92839 + s92840);
            t193163 = (s92839 - s92840);
            s92841 = (dat16((2 + a215379))*buf7((25 + i125932)));
            s92842 = (dat16((3 + a215379))*buf7((57 + i125932)));
            t193164 = (s92841 + s92842);
            b45133 = ((64*i125907) + i125932);
            buf6((b45133 + 9)) = (t193162 + t193164);
            buf6((b45133 + 41)) = (t193162 - t193164);
            a215380 = (1.0i*(s92841 - s92842));
            buf6((b45133 + 25)) = (t193163 + a215380);
            buf6((b45133 + 57)) = (t193163 - a215380);
        }
    }
    var a215401, s92851, s92852, s92853, s92854, t193213, t193214, t193215, t193216, t193217, t193218, t193219, t193220, t193221, t193222, t193223:complex;
    t193213 = (buf6(0) + buf6(256));
    t193214 = (buf6(0) - buf6(256));
    t193215 = (buf6(128) + buf6(384));
    t193216 = (t193213 + t193215);
    t193217 = (t193213 - t193215);
    a215401 = (1.0i*(buf6(128) - buf6(384)));
    t193218 = (t193214 + a215401);
    t193219 = (t193214 - a215401);
    t193220 = (buf6(64) + buf6(320));
    s92851 = ((0.70710678118654757 + 1.0i * 0.70710678118654757)*(buf6(64) - buf6(320)));
    t193221 = (buf6(192) + buf6(448));
    s92852 = ((-0.70710678118654757 + 1.0i * 0.70710678118654757)*(buf6(192) - buf6(448)));
    t193222 = (t193220 + t193221);
    s92853 = (1.0i*(t193220 - t193221));
    t193223 = (s92851 + s92852);
    s92854 = (1.0i*(s92851 - s92852));
    Y(0) = (t193216 + t193222);
    Y(256) = (t193216 - t193222);
    Y(64) = (t193218 + t193223);
    Y(320) = (t193218 - t193223);
    Y(128) = (t193217 + s92853);
    Y(384) = (t193217 - s92853);
    Y(192) = (t193219 + s92854);
    Y(448) = (t193219 - s92854);
    for i125905 in [0..30] {
        var a215472, s92895, s92896, s92897, s92898, s92899, s92900, s92901, s92902, s92903, s92904, s92905, s92906, t193272, t193273, t193274, t193275, t193276, t193277, t193278, t193279, t193280, t193281, t193282:complex;
        var a215464, a215465, a215466, a215467, a215468, a215469, a215470, a215471, a215473, a215474, a215475, a215476:int;
        a215464 = (1 + i125905);
        a215465 = (257 + i125905);
        a215466 = (4*i125905);
        s92895 = (dat11(a215466)*buf6(a215464));
        a215467 = (1 + a215466);
        s92896 = (dat11(a215467)*buf6(a215465));
        t193272 = (s92895 + s92896);
        t193273 = (s92895 - s92896);
        a215468 = (129 + i125905);
        a215469 = (385 + i125905);
        a215470 = (2 + a215466);
        s92897 = (dat11(a215470)*buf6(a215468));
        a215471 = (3 + a215466);
        s92898 = (dat11(a215471)*buf6(a215469));
        t193274 = (s92897 + s92898);
        t193275 = (t193272 + t193274);
        t193276 = (t193272 - t193274);
        a215472 = (1.0i*(s92897 - s92898));
        t193277 = (t193273 + a215472);
        t193278 = (t193273 - a215472);
        a215473 = (65 + i125905);
        a215474 = (321 + i125905);
        s92899 = (dat12(a215466)*buf6(a215473));
        s92900 = (dat12(a215467)*buf6(a215474));
        t193279 = (s92899 + s92900);
        s92901 = ((0.70710678118654757 + 1.0i * 0.70710678118654757)*(s92899 - s92900));
        a215475 = (193 + i125905);
        a215476 = (449 + i125905);
        s92902 = (dat12(a215470)*buf6(a215475));
        s92903 = (dat12(a215471)*buf6(a215476));
        t193280 = (s92902 + s92903);
        s92904 = ((-0.70710678118654757 + 1.0i * 0.70710678118654757)*(s92902 - s92903));
        t193281 = (t193279 + t193280);
        s92905 = (1.0i*(t193279 - t193280));
        t193282 = (s92901 + s92904);
        s92906 = (1.0i*(s92901 - s92904));
        Y(a215464) = (t193275 + t193281);
        Y(a215465) = (t193275 - t193281);
        Y(a215473) = (t193277 + t193282);
        Y(a215474) = (t193277 - t193282);
        Y(a215468) = (t193276 + s92905);
        Y(a215469) = (t193276 - s92905);
        Y(a215475) = (t193278 + s92906);
        Y(a215476) = (t193278 - s92906);
    }
    var a215517, a215518, s92919, s92920, s92921, s92922, s92923, s92924, t193331, t193332, t193333, t193334, t193335, t193336, t193337, t193338:complex;
    t193331 = (buf6(32) + (1.0i*buf6(288)));
    t193332 = (buf6(32) + ((- 1.0i)*buf6(288)));
    s92919 = ((0.92387953251128674 + 1.0i * 0.38268343236508978)*(buf6(96) + (1.0i*buf6(352))));
    s92920 = ((0.38268343236508978 + 1.0i * 0.92387953251128674)*(buf6(96) + ((- 1.0i)*buf6(352))));
    s92921 = ((0.70710678118654757 + 1.0i * 0.70710678118654757)*(buf6(160) + (1.0i*buf6(416))));
    s92922 = ((-0.70710678118654757 + 1.0i * 0.70710678118654757)*(buf6(160) + ((- 1.0i)*buf6(416))));
    s92923 = ((0.38268343236508978 + 1.0i * 0.92387953251128674)*(buf6(224) + (1.0i*buf6(480))));
    s92924 = ((-0.92387953251128674 - 1.0i * 0.38268343236508978)*(buf6(224) + ((- 1.0i)*buf6(480))));
    t193333 = (t193331 + s92921);
    t193334 = (t193331 - s92921);
    t193335 = (s92919 + s92923);
    Y(32) = (t193333 + t193335);
    Y(288) = (t193333 - t193335);
    a215517 = (1.0i*(s92919 - s92923));
    Y(160) = (t193334 + a215517);
    Y(416) = (t193334 - a215517);
    t193336 = (t193332 + s92922);
    t193337 = (t193332 - s92922);
    t193338 = (s92920 + s92924);
    Y(96) = (t193336 + t193338);
    Y(352) = (t193336 - t193338);
    a215518 = (1.0i*(s92920 - s92924));
    Y(224) = (t193337 + a215518);
    Y(480) = (t193337 - a215518);
    for i125906 in [0..30] {
        var a215589, s92965, s92966, s92967, s92968, s92969, s92970, s92971, s92972, s92973, s92974, s92975, s92976, t193387, t193388, t193389, t193390, t193391, t193392, t193393, t193394, t193395, t193396, t193397:complex;
        var a215581, a215582, a215583, a215584, a215585, a215586, a215587, a215588, a215590, a215591, a215592, a215593:int;
        a215581 = (33 + i125906);
        a215582 = (289 + i125906);
        a215583 = (4*i125906);
        s92965 = (dat13(a215583)*buf6(a215581));
        a215584 = (1 + a215583);
        s92966 = (dat13(a215584)*buf6(a215582));
        t193387 = (s92965 + s92966);
        t193388 = (s92965 - s92966);
        a215585 = (161 + i125906);
        a215586 = (417 + i125906);
        a215587 = (2 + a215583);
        s92967 = (dat13(a215587)*buf6(a215585));
        a215588 = (3 + a215583);
        s92968 = (dat13(a215588)*buf6(a215586));
        t193389 = (s92967 + s92968);
        t193390 = (t193387 + t193389);
        t193391 = (t193387 - t193389);
        a215589 = (1.0i*(s92967 - s92968));
        t193392 = (t193388 + a215589);
        t193393 = (t193388 - a215589);
        a215590 = (97 + i125906);
        a215591 = (353 + i125906);
        s92969 = (dat14(a215583)*buf6(a215590));
        s92970 = (dat14(a215584)*buf6(a215591));
        t193394 = (s92969 + s92970);
        s92971 = ((0.70710678118654757 + 1.0i * 0.70710678118654757)*(s92969 - s92970));
        a215592 = (225 + i125906);
        a215593 = (481 + i125906);
        s92972 = (dat14(a215587)*buf6(a215592));
        s92973 = (dat14(a215588)*buf6(a215593));
        t193395 = (s92972 + s92973);
        s92974 = ((-0.70710678118654757 + 1.0i * 0.70710678118654757)*(s92972 - s92973));
        t193396 = (t193394 + t193395);
        s92975 = (1.0i*(t193394 - t193395));
        t193397 = (s92971 + s92974);
        s92976 = (1.0i*(s92971 - s92974));
        Y(a215581) = (t193390 + t193396);
        Y(a215582) = (t193390 - t193396);
        Y(a215590) = (t193392 + t193397);
        Y(a215591) = (t193392 - t193397);
        Y(a215585) = (t193391 + s92975);
        Y(a215586) = (t193391 - s92975);
        Y(a215592) = (t193393 + s92976);
        Y(a215593) = (t193393 - s92976);
    }

}
