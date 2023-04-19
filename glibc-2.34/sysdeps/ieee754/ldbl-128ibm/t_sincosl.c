/* Quad-precision floating point sine and cosine tables.
   Copyright (C) 1999-2021 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Contributed by Jakub Jelinek <jj@ultra.linux.cz>

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* For 0.1484375 + n/128.0, n=0..82 this table contains
   first 113 bits of cosine, then at least 113 additional
   bits and the same for sine.
   0.1484375+82.0/128.0 is the smallest number among above defined numbers
   larger than pi/4.
   Computed using gmp.
 */

const long double __sincosl_table[] = {

/* x =  1.48437500000000000000000000000000000e-01L 3ffc3000000000000000000000000000 */
/* cos(x) = 0.fd2f5320e1b790209b4dda2f98 f79caaa7b873aff1014b0fbc52 43766d03cb006bc837c4358 */
 0x0.fd2f5320e1b790209b4dda2f98p0L,
 0x0.f79caaa7b873aff1014b0fbc52p-104L,
/* sin(x) = 0.25dc50bc95711d0d9787d108fd 438cf5959ee0bfb7a1e36e8b1a 112968f356657420e9cc9ea */
 0x0.25dc50bc95711d0d9787d108fdp0L,
 0x0.438cf5959ee0bfb7a1e36e8b1ap-104L,

/* x = 1.56250000000000000000000000000000000e-01 3ffc4000000000000000000000000000 */
/* cos(x) = 0.fce1a053e621438b6d60c76e8c 45bf0a9dc71aa16f922acc10e9 5144ec796a249813c9cb649 */
 0x0.fce1a053e621438b6d60c76e8cp0L,
 0x0.45bf0a9dc71aa16f922acc10e9p-104L,
/* sin(x) = 0.27d66258bacd96a3eb335b365c 87d59438c5142bb56a489e9b8d b9d36234ffdebb6bdc22d8e */
 0x0.27d66258bacd96a3eb335b365cp0L,
 0x0.87d59438c5142bb56a489e9b8dp-104L,

/* x = 1.64062500000000000000000000000000000e-01 3ffc5000000000000000000000000000 */
/* cos(x) = 0.fc8ffa01ba6807417e05962b0d 9fdf1fddb0cc4c07d22e19e080 19bffa50a6c7acdb40307a3 */
 0x0.fc8ffa01ba6807417e05962b0dp0L,
 0x0.9fdf1fddb0cc4c07d22e19e080p-104L,
/* sin(x) = 0.29cfd49b8be4f665276cab01cb f0426934906c3dd105473b226e 410b1450f62e53ff7c6cce1 */
 0x0.29cfd49b8be4f665276cab01cbp0L,
 0x0.f0426934906c3dd105473b226ep-104L,

/* x = 1.71875000000000000000000000000000000e-01 3ffc6000000000000000000000000000 */
/* cos(x) = 0.fc3a6170f767ac735d63d99a9d 439e1db5e59d3ef153a4265d58 55850ed82b536bf361b80e3 */
 0x0.fc3a6170f767ac735d63d99a9dp0L,
 0x0.439e1db5e59d3ef153a4265d58p-104L,
/* sin(x) = 0.2bc89f9f424de5485de7ce03b2 514952b9faf5648c3244d4736f eb95dbb9da49f3b58a9253b */
 0x0.2bc89f9f424de5485de7ce03b2p0L,
 0x0.514952b9faf5648c3244d4736fp-104L,

/* x = 1.79687500000000000000000000000000000e-01 3ffc7000000000000000000000000000 */
/* cos(x) = 0.fbe0d7f7fef11e70aa43b8abf4 f6a457cea20c8f3f676b47781f 9821bbe9ce04b3c7b981c0b */
 0x0.fbe0d7f7fef11e70aa43b8abf4p0L,
 0x0.f6a457cea20c8f3f676b47781fp-104L,
/* sin(x) = 0.2dc0bb80b49a97ffb34e8dd1f8 db9df7af47ed2dcf58b12c8e78 27e048cae929da02c04ecac */
 0x0.2dc0bb80b49a97ffb34e8dd1f8p0L,
 0x0.db9df7af47ed2dcf58b12c8e78p-104L,

/* x = 1.87500000000000000000000000000000000e-01 3ffc8000000000000000000000000000 */
/* cos(x) = 0.fb835efcf670dd2ce6fe792469 7eea13ea358867e9cdb3899b78 3f4f9f43aa5626e8b67b3bc */
 0x0.fb835efcf670dd2ce6fe792469p0L,
 0x0.7eea13ea358867e9cdb3899b78p-104L,
/* sin(x) = 0.2fb8205f75e56a2b56a1c4792f 856258769af396e0189ef72c05 e4df59a6b00e4b44a6ea515 */
 0x0.2fb8205f75e56a2b56a1c4792fp0L,
 0x0.856258769af396e0189ef72c05p-104L,

/* x = 1.95312500000000000000000000000000000e-01 3ffc9000000000000000000000000000 */
/* cos(x) = 0.fb21f7f5c156696b00ac1fe28a c5fd76674a92b4df80d9c8a46c 684399005deccc41386257c */
 0x0.fb21f7f5c156696b00ac1fe28ap0L,
 0x0.c5fd76674a92b4df80d9c8a46cp-104L,
/* sin(x) = 0.31aec65df552876f82ece9a235 6713246eba6799983d7011b0b3 698d6e1da919c15d57c30c1 */
 0x0.31aec65df552876f82ece9a235p0L,
 0x0.6713246eba6799983d7011b0b3p-104L,

/* x = 2.03125000000000000000000000000000000e-01 3ffca000000000000000000000000000 */
/* cos(x) = 0.fabca467fb3cb8f1d069f01d8e a33ade5bfd68296ecd1cc9f7b7 609bbcf3676e726c3301334 */
 0x0.fabca467fb3cb8f1d069f01d8ep0L,
 0x0.a33ade5bfd68296ecd1cc9f7b7p-104L,
/* sin(x) = 0.33a4a5a19d86246710f602c44d f4fa513f4639ce938477aeeabb 82e8e0a7ed583a188879fd4 */
 0x0.33a4a5a19d86246710f602c44dp0L,
 0x0.f4fa513f4639ce938477aeeabbp-104L,

/* x = 2.10937500000000000000000000000000000e-01 3ffcb000000000000000000000000000 */
/* cos(x) = 0.fa5365e8f1d3ca27be1db5d76a e64d983d7470a4ab0f4ccf65a2 b8c67a380df949953a09bc1 */
 0x0.fa5365e8f1d3ca27be1db5d76ap0L,
 0x0.e64d983d7470a4ab0f4ccf65a2p-104L,
/* sin(x) = 0.3599b652f40ec999df12a0a4c8 561de159c98d4e54555de518b9 7f48886f715d8df5f4f093e */
 0x0.3599b652f40ec999df12a0a4c8p0L,
 0x0.561de159c98d4e54555de518b9p-104L,

/* x = 2.18750000000000000000000000000000000e-01 3ffcc000000000000000000000000000 */
/* cos(x) = 0.f9e63e1d9e8b6f6f2e296bae5b 5ed9c11fd7fa2fe11e09fc7bde 901abed24b6365e72f7db4e */
 0x0.f9e63e1d9e8b6f6f2e296bae5bp0L,
 0x0.5ed9c11fd7fa2fe11e09fc7bdep-104L,
/* sin(x) = 0.378df09db8c332ce0d2b53d865 582e4526ea336c768f68c32b49 6c6d11c1cd241bb9f1da523 */
 0x0.378df09db8c332ce0d2b53d865p0L,
 0x0.582e4526ea336c768f68c32b49p-104L,

/* x = 2.26562500000000000000000000000000000e-01 3ffcd000000000000000000000000000 */
/* cos(x) = 0.f9752eba9fff6b98842beadab0 54a932fb0f8d5b875ae63d6b22 88d09b148921aeb6e52f61b */
 0x0.f9752eba9fff6b98842beadab0p0L,
 0x0.54a932fb0f8d5b875ae63d6b22p-104L,
/* sin(x) = 0.39814cb10513453cb97b21bc1c a6a337b150c21a675ab85503bc 09a436a10ab1473934e20c8 */
 0x0.39814cb10513453cb97b21bc1cp0L,
 0x0.a6a337b150c21a675ab85503bcp-104L,

/* x = 2.34375000000000000000000000000000000e-01 3ffce000000000000000000000000000 */
/* cos(x) = 0.f90039843324f9b940416c1984 b6cbed1fc733d97354d4265788 a86150493ce657cae032674 */
 0x0.f90039843324f9b940416c1984p0L,
 0x0.b6cbed1fc733d97354d4265788p-104L,
/* sin(x) = 0.3b73c2bf6b4b9f668ef9499c81 f0d965087f1753fa64b086e58c b8470515c18c1412f8c2e02 */
 0x0.3b73c2bf6b4b9f668ef9499c81p0L,
 0x0.f0d965087f1753fa64b086e58cp-104L,

/* x = 2.42187500000000000000000000000000000e-01 3ffcf000000000000000000000000000 */
/* cos(x) = 0.f887604e2c39dbb20e4ec58250 59a789ffc95b275ad9954078ba 8a28d3fcfe9cc2c1d49697b */
 0x0.f887604e2c39dbb20e4ec58250p0L,
 0x0.59a789ffc95b275ad9954078bap-104L,
/* sin(x) = 0.3d654aff15cb457a0fca854698 aba33039a8a40626609204472d 9d40309b626eccc6dff0ffa */
 0x0.3d654aff15cb457a0fca854698p0L,
 0x0.aba33039a8a40626609204472dp-104L,

/* x = 2.50000000000000000000000000000000000e-01 3ffd0000000000000000000000000000 */
/* cos(x) = 0.f80aa4fbef750ba783d33cb95f 94f8a41426dbe79edc4a023ef9 ec13c944551c0795b84fee1 */
 0x0.f80aa4fbef750ba783d33cb95fp0L,
 0x0.94f8a41426dbe79edc4a023ef9p-104L,
/* sin(x) = 0.3f55dda9e62aed7513bd7b8e6a 3d1635dd5676648d7db525898d 7086af9330f03c7f285442a */
 0x0.3f55dda9e62aed7513bd7b8e6ap0L,
 0x0.3d1635dd5676648d7db525898dp-104L,

/* x = 2.57812500000000000000000000000000000e-01 3ffd0800000000000000000000000000 */
/* cos(x) = 0.f78a098069792daabc9ee42591 b7c5a68cb1ab822aeb446b3311 b4ba5371b8970e2c1547ad7 */
 0x0.f78a098069792daabc9ee42591p0L,
 0x0.b7c5a68cb1ab822aeb446b3311p-104L,
/* sin(x) = 0.414572fd94556e6473d6202713 88dd47c0ba050cdb5270112e3e 370e8c4705ae006426fb5d5 */
 0x0.414572fd94556e6473d6202713p0L,
 0x0.88dd47c0ba050cdb5270112e3ep-104L,

/* x = 2.65625000000000000000000000000000000e-01 3ffd1000000000000000000000000000 */
/* cos(x) = 0.f7058fde0788dfc805b8fe8878 9e4f4253e3c50afe8b22f41159 620ab5940ff7df9557c0d1f */
 0x0.f7058fde0788dfc805b8fe8878p0L,
 0x0.9e4f4253e3c50afe8b22f41159p-104L,
/* sin(x) = 0.4334033bcd90d6604f5f36c1d4 b84451a87150438275b77470b5 0e5b968fa7962b5ffb379b7 */
 0x0.4334033bcd90d6604f5f36c1d4p0L,
 0x0.b84451a87150438275b77470b5p-104L,

/* x = 2.73437500000000000000000000000000000e-01 3ffd1800000000000000000000000000 */
/* cos(x) = 0.f67d3a26af7d07aa4bd6d42af8 c0067fefb96d5b46c031eff536 27f215ea3242edc3f2e13eb */
 0x0.f67d3a26af7d07aa4bd6d42af8p0L,
 0x0.c0067fefb96d5b46c031eff536p-104L,
/* sin(x) = 0.452186aa5377ab20bbf2524f52 e3a06a969f47166ab88cf88c11 1ad12c55941021ef3317a1a */
 0x0.452186aa5377ab20bbf2524f52p0L,
 0x0.e3a06a969f47166ab88cf88c11p-104L,

/* x = 2.81250000000000000000000000000000000e-01 3ffd2000000000000000000000000000 */
/* cos(x) = 0.f5f10a7bb77d3dfa0c1da8b578 42783280d01ce3c0f82bae3b9d 623c168d2e7c29977994451 */
 0x0.f5f10a7bb77d3dfa0c1da8b578p0L,
 0x0.42783280d01ce3c0f82bae3b9dp-104L,
/* sin(x) = 0.470df5931ae1d946076fe0dcff 47fe31bb2ede618ebc607821f8 462b639e1f4298b5ae87fd3 */
 0x0.470df5931ae1d946076fe0dcffp0L,
 0x0.47fe31bb2ede618ebc607821f8p-104L,

/* x = 2.89062500000000000000000000000000000e-01 3ffd2800000000000000000000000000 */
/* cos(x) = 0.f561030ddd7a78960ea9f4a32c 6521554995667f5547bafee9ec 48b3155cdb0f7fd00509713 */
 0x0.f561030ddd7a78960ea9f4a32cp0L,
 0x0.6521554995667f5547bafee9ecp-104L,
/* sin(x) = 0.48f948446abcd6b0f7fccb100e 7a1b26eccad880b0d24b59948c 7cdd49514d44b933e6985c2 */
 0x0.48f948446abcd6b0f7fccb100ep0L,
 0x0.7a1b26eccad880b0d24b59948cp-104L,

/* x = 2.96875000000000000000000000000000000e-01 3ffd3000000000000000000000000000 */
/* cos(x) = 0.f4cd261d3e6c15bb369c875863 0d2ac00b7ace2a51c0631bfeb3 9ed158ba924cc91e259c195 */
 0x0.f4cd261d3e6c15bb369c875863p0L,
 0x0.0d2ac00b7ace2a51c0631bfeb3p-104L,
/* sin(x) = 0.4ae37710fad27c8aa9c4cf96c0 3519b9ce07dc08a1471775499f 05c29f86190aaebaeb9716e */
 0x0.4ae37710fad27c8aa9c4cf96c0p0L,
 0x0.3519b9ce07dc08a1471775499fp-104L,

/* x = 3.04687500000000000000000000000000000e-01 3ffd3800000000000000000000000000 */
/* cos(x) = 0.f43575f94d4f6b272f5fb76b14 d2a64ab52df1ee8ddf7c651034 e5b2889305a9ea9015d758a */
 0x0.f43575f94d4f6b272f5fb76b14p0L,
 0x0.d2a64ab52df1ee8ddf7c651034p-104L,
/* sin(x) = 0.4ccc7a50127e1de0cb6b40c302 c651f7bded4f9e7702b0471ae0 288d091a37391950907202f */
 0x0.4ccc7a50127e1de0cb6b40c302p0L,
 0x0.c651f7bded4f9e7702b0471ae0p-104L,

/* x = 3.12500000000000000000000000000000000e-01 3ffd4000000000000000000000000000 */
/* cos(x) = 0.f399f500c9e9fd37ae9957263d ab8877102beb569f101ee44953 50868e5847d181d50d3cca2 */
 0x0.f399f500c9e9fd37ae9957263dp0L,
 0x0.ab8877102beb569f101ee44953p-104L,
/* sin(x) = 0.4eb44a5da74f600207aaa090f0 734e288603ffadb3eb2542a469 77b105f8547128036dcf7f0 */
 0x0.4eb44a5da74f600207aaa090f0p0L,
 0x0.734e288603ffadb3eb2542a469p-104L,

/* x = 3.20312500000000000000000000000000000e-01 3ffd4800000000000000000000000000 */
/* cos(x) = 0.f2faa5a1b74e82fd61fa05f917 7380e8e69b7b15a945e8e5ae11 24bf3d12b0617e03af4fab5 */
 0x0.f2faa5a1b74e82fd61fa05f917p0L,
 0x0.7380e8e69b7b15a945e8e5ae11p-104L,
/* sin(x) = 0.509adf9a7b9a5a0f638a8fa3a6 0a199418859f18b37169a644fd b986c21ecb00133853bc35b */
 0x0.509adf9a7b9a5a0f638a8fa3a6p0L,
 0x0.0a199418859f18b37169a644fdp-104L,

/* x = 3.28125000000000000000000000000000000e-01 3ffd5000000000000000000000000000 */
/* cos(x) = 0.f2578a595224dd2e6bfa2eb2f9 9cc674f5ea6f479eae2eb58018 6897ae3f893df1113ca06b8 */
 0x0.f2578a595224dd2e6bfa2eb2f9p0L,
 0x0.9cc674f5ea6f479eae2eb58018p-104L,
/* sin(x) = 0.5280326c3cf481823ba6bb08ea c82c2093f2bce3c4eb4ee3dec7 df41c92c8a4226098616075 */
 0x0.5280326c3cf481823ba6bb08eap0L,
 0x0.c82c2093f2bce3c4eb4ee3dec7p-104L,

/* x = 3.35937500000000000000000000000000000e-01 3ffd5800000000000000000000000000 */
/* cos(x) = 0.f1b0a5b406b526d886c55feadc 8d0dcc8eb9ae2ac707051771b4 8e05b25b000009660bdb3e3 */
 0x0.f1b0a5b406b526d886c55feadcp0L,
 0x0.8d0dcc8eb9ae2ac707051771b4p-104L,
/* sin(x) = 0.54643b3da29de9b357155eef0f 332fb3e66c83bf4dddd9491c5e b8e103ccd92d6175220ed51 */
 0x0.54643b3da29de9b357155eef0fp0L,
 0x0.332fb3e66c83bf4dddd9491c5ep-104L,

/* x = 3.43750000000000000000000000000000000e-01 3ffd6000000000000000000000000000 */
/* cos(x) = 0.f105fa4d66b607a67d44e04272 5204435142ac8ad54dfb0907a4 f6b56b06d98ee60f19e557a */
 0x0.f105fa4d66b607a67d44e04272p0L,
 0x0.5204435142ac8ad54dfb0907a4p-104L,
/* sin(x) = 0.5646f27e8bd65cbe3a5d61ff06 572290ee826d9674a00246b05a e26753cdfc90d9ce81a7d02 */
 0x0.5646f27e8bd65cbe3a5d61ff06p0L,
 0x0.572290ee826d9674a00246b05ap-104L,

/* x = 3.51562500000000000000000000000000000e-01 3ffd6800000000000000000000000000 */
/* cos(x) = 0.f0578ad01ede707fa39c09dc6b 984afef74f3dc8d0efb0f4c5a6 b13771145b3e0446fe33887 */
 0x0.f0578ad01ede707fa39c09dc6bp0L,
 0x0.984afef74f3dc8d0efb0f4c5a6p-104L,
/* sin(x) = 0.582850a41e1dd46c7f602ea244 cdbbbfcdfa8f3189be794dda42 7ce090b5f85164f1f80ac13 */
 0x0.582850a41e1dd46c7f602ea244p0L,
 0x0.cdbbbfcdfa8f3189be794dda42p-104L,

/* x = 3.59375000000000000000000000000000000e-01 3ffd7000000000000000000000000000 */
/* cos(x) = 0.efa559f5ec3aec3a4eb0331927 8a2d41fcf9189462261125fe61 47b078f1daa0b06750a1654 */
 0x0.efa559f5ec3aec3a4eb0331927p0L,
 0x0.8a2d41fcf9189462261125fe61p-104L,
/* sin(x) = 0.5a084e28e35fda2776dfdbbb55 31d74ced2b5d17c0b1afc46475 29d50c295e36d8ceec126c1 */
 0x0.5a084e28e35fda2776dfdbbb55p0L,
 0x0.31d74ced2b5d17c0b1afc46475p-104L,

/* x = 3.67187500000000000000000000000000000e-01 3ffd7800000000000000000000000000 */
/* cos(x) = 0.eeef6a879146af0bf9b95ea2ea 0ac0d3e2e4d7e15d93f48cbd41 bf8e4fded40bef69e19eafa */
 0x0.eeef6a879146af0bf9b95ea2eap0L,
 0x0.0ac0d3e2e4d7e15d93f48cbd41p-104L,
/* sin(x) = 0.5be6e38ce8095542bc14ee9da0 d36483e6734bcab2e07624188a f5653f114eeb46738fa899d */
 0x0.5be6e38ce8095542bc14ee9da0p0L,
 0x0.d36483e6734bcab2e07624188ap-104L,

/* x = 3.75000000000000000000000000000000000e-01 3ffd8000000000000000000000000000 */
/* cos(x) = 0.ee35bf5ccac89052cd91ddb734 d3a47e262e3b609db604e21705 3803be0091e76daf28a89b7 */
 0x0.ee35bf5ccac89052cd91ddb734p0L,
 0x0.d3a47e262e3b609db604e21705p-104L,
/* sin(x) = 0.5dc40955d9084f48a94675a249 8de5d851320ff5528a6afb3f2e 24de240fce6cbed1ba0ccd6 */
 0x0.5dc40955d9084f48a94675a249p0L,
 0x0.8de5d851320ff5528a6afb3f2ep-104L,

/* x = 3.82812500000000000000000000000000000e-01 3ffd8800000000000000000000000000 */
/* cos(x) = 0.ed785b5c44741b4493c56bcb9d 338a151c6f6b85d8f8aca658b2 8572c162b199680eb9304da */
 0x0.ed785b5c44741b4493c56bcb9dp0L,
 0x0.338a151c6f6b85d8f8aca658b2p-104L,
/* sin(x) = 0.5f9fb80f21b53649c432540a50 e22c53057ff42ae0fdf1307760 dc0093f99c8efeb2fbd7073 */
 0x0.5f9fb80f21b53649c432540a50p0L,
 0x0.e22c53057ff42ae0fdf1307760p-104L,

/* x = 3.90625000000000000000000000000000000e-01 3ffd9000000000000000000000000000 */
/* cos(x) = 0.ecb7417b8d4ee3fec37aba4073 aa48f1f14666006fb431d96713 03c8100d10190ec8179c41d */
 0x0.ecb7417b8d4ee3fec37aba4073p0L,
 0x0.aa48f1f14666006fb431d96713p-104L,
/* sin(x) = 0.6179e84a09a5258a40e9b5face 03e525f8b5753cd0105d93fe62 98010c3458e84d75fe420e9 */
 0x0.6179e84a09a5258a40e9b5facep0L,
 0x0.03e525f8b5753cd0105d93fe62p-104L,

/* x = 3.98437500000000000000000000000000000e-01 3ffd9800000000000000000000000000 */
/* cos(x) = 0.ebf274bf0bda4f62447e56a093 626798d3013b5942b1abfd155a acc9dc5c6d0806a20d6b9c1 */
 0x0.ebf274bf0bda4f62447e56a093p0L,
 0x0.626798d3013b5942b1abfd155ap-104L,
/* sin(x) = 0.6352929dd264bd44a02ea76632 5d8aa8bd9695fc8def3caefba5 b94c9a3c873f7b2d3776ead */
 0x0.6352929dd264bd44a02ea76632p0L,
 0x0.5d8aa8bd9695fc8def3caefba5p-104L,

/* x = 4.06250000000000000000000000000000000e-01 3ffda000000000000000000000000000 */
/* cos(x) = 0.eb29f839f201fd13b937968279 16a78f15c85230a4e8ea4b2155 8265a14367e1abb4c30695a */
 0x0.eb29f839f201fd13b937968279p0L,
 0x0.16a78f15c85230a4e8ea4b2155p-104L,
/* sin(x) = 0.6529afa7d51b129631ec197c0a 840a11d7dc5368b0a47956feb2 85caa8371c4637ef17ef01b */
 0x0.6529afa7d51b129631ec197c0ap0L,
 0x0.840a11d7dc5368b0a47956feb2p-104L,

/* x = 4.14062500000000000000000000000000000e-01 3ffda800000000000000000000000000 */
/* cos(x) = 0.ea5dcf0e30cf03e6976ef0b1ec 26515fba47383855c3b4055a99 b5e86824b2cd1a691fdca7b */
 0x0.ea5dcf0e30cf03e6976ef0b1ecp0L,
 0x0.26515fba47383855c3b4055a99p-104L,
/* sin(x) = 0.66ff380ba0144109e39a320b0a 3fa5fd65ea0585bcbf9b1a769a 9b0334576c658139e1a1cbe */
 0x0.66ff380ba0144109e39a320b0ap0L,
 0x0.3fa5fd65ea0585bcbf9b1a769ap-104L,

/* x = 4.21875000000000000000000000000000000e-01 3ffdb000000000000000000000000000 */
/* cos(x) = 0.e98dfc6c6be031e60dd3089cbd d18a75b1f6b2c1e97f79225202 f03dbea45b07a5ec4efc062 */
 0x0.e98dfc6c6be031e60dd3089cbdp0L,
 0x0.d18a75b1f6b2c1e97f79225202p-104L,
/* sin(x) = 0.68d32473143327973bc712bcc4 ccddc47630d755850c0655243b 205934dc49ffed8eb76adcb */
 0x0.68d32473143327973bc712bcc4p0L,
 0x0.ccddc47630d755850c0655243bp-104L,

/* x = 4.29687500000000000000000000000000000e-01 3ffdb800000000000000000000000000 */
/* cos(x) = 0.e8ba8393eca7821aa563d83491 b6101189b3b101c3677f73d7ba d7c10f9ee02b7ab4009739a */
 0x0.e8ba8393eca7821aa563d83491p0L,
 0x0.b6101189b3b101c3677f73d7bap-104L,
/* sin(x) = 0.6aa56d8e8249db4eb60a761fe3 f9e559be456b9e13349ca99b0b fb787f22b95db3b70179615 */
 0x0.6aa56d8e8249db4eb60a761fe3p0L,
 0x0.f9e559be456b9e13349ca99b0bp-104L,

/* x = 4.37500000000000000000000000000000000e-01 3ffdc000000000000000000000000000 */
/* cos(x) = 0.e7e367d2956cfb16b6aa11e541 9cd0057f5c132a6455bf064297 e6a76fe2b72bb630d6d50ff */
 0x0.e7e367d2956cfb16b6aa11e541p0L,
 0x0.9cd0057f5c132a6455bf064297p-104L,
/* sin(x) = 0.6c760c14c8585a51dbd34660ae 6c52ac7036a0b40887a0b63724 f8b4414348c3063a637f457 */
 0x0.6c760c14c8585a51dbd34660aep0L,
 0x0.6c52ac7036a0b40887a0b63724p-104L,

/* x = 4.45312500000000000000000000000000000e-01 3ffdc800000000000000000000000000 */
/* cos(x) = 0.e708ac84d4172a3e2737662213 429e14021074d7e702e77d72a8 f1101a7e70410df8273e9aa */
 0x0.e708ac84d4172a3e2737662213p0L,
 0x0.429e14021074d7e702e77d72a8p-104L,
/* sin(x) = 0.6e44f8c36eb10a1c752d093c00 f4d47ba446ac4c215d26b03164 42f168459e677d06e7249e3 */
 0x0.6e44f8c36eb10a1c752d093c00p0L,
 0x0.f4d47ba446ac4c215d26b03164p-104L,

/* x = 4.53125000000000000000000000000000000e-01 3ffdd000000000000000000000000000 */
/* cos(x) = 0.e62a551594b970a770b15d41d4 c0e483e47aca550111df6966f9 e7ac3a94ae49e6a71eb031e */
 0x0.e62a551594b970a770b15d41d4p0L,
 0x0.c0e483e47aca550111df6966f9p-104L,
/* sin(x) = 0.70122c5ec5028c8cff33abf4fd 340ccc382e038379b09cf04f9a 52692b10b72586060cbb001 */
 0x0.70122c5ec5028c8cff33abf4fdp0L,
 0x0.340ccc382e038379b09cf04f9ap-104L,

/* x = 4.60937500000000000000000000000000000e-01 3ffdd800000000000000000000000000 */
/* cos(x) = 0.e54864fe33e8575cabf5bd0e5c f1b1a8bc7c0d5f61702450fa6b 6539735820dd2603ae355d5 */
 0x0.e54864fe33e8575cabf5bd0e5cp0L,
 0x0.f1b1a8bc7c0d5f61702450fa6bp-104L,
/* sin(x) = 0.71dd9fb1ff4677853acb970a9f 6729c6e3aac247b1c57cea66c7 7413f1f98e8b9e98e49d851 */
 0x0.71dd9fb1ff4677853acb970a9fp0L,
 0x0.6729c6e3aac247b1c57cea66c7p-104L,

/* x = 4.68750000000000000000000000000000000e-01 3ffde000000000000000000000000000 */
/* cos(x) = 0.e462dfc670d421ab3d1a159012 28f146a0547011202bf5ab01f9 14431859aef577966bc4fa4 */
 0x0.e462dfc670d421ab3d1a159012p0L,
 0x0.28f146a0547011202bf5ab01f9p-104L,
/* sin(x) = 0.73a74b8f52947b681baf6928eb 3fb021769bf4779bad0e3aa9b1 cdb75ec60aad9fc63ff19d5 */
 0x0.73a74b8f52947b681baf6928ebp0L,
 0x0.3fb021769bf4779bad0e3aa9b1p-104L,

/* x = 4.76562500000000000000000000000000000e-01 3ffde800000000000000000000000000 */
/* cos(x) = 0.e379c9045f29d517c4808aa497 c2057b2b3d109e76c0dc302d4d 0698b36e3f0bdbf33d8e952 */
 0x0.e379c9045f29d517c4808aa497p0L,
 0x0.c2057b2b3d109e76c0dc302d4dp-104L,
/* sin(x) = 0.756f28d011d98528a44a75fc29 c779bd734ecdfb582fdb74b68a 4c4c4be54cfd0b2d3ad292f */
 0x0.756f28d011d98528a44a75fc29p0L,
 0x0.c779bd734ecdfb582fdb74b68ap-104L,

/* x = 4.84375000000000000000000000000000000e-01 3ffdf000000000000000000000000000 */
/* cos(x) = 0.e28d245c58baef72225e232abc 003c4366acd9eb4fc2808c2ab7 fe7676cf512ac7f945ae5fb */
 0x0.e28d245c58baef72225e232abcp0L,
 0x0.003c4366acd9eb4fc2808c2ab7p-104L,
/* sin(x) = 0.77353054ca72690d4c6e171fd9 9e6b39fa8e1ede5f052fd29645 34c75340970a3a9cd3c5c32 */
 0x0.77353054ca72690d4c6e171fd9p0L,
 0x0.9e6b39fa8e1ede5f052fd29645p-104L,

/* x = 4.92187500000000000000000000000000000e-01 3ffdf800000000000000000000000000 */
/* cos(x) = 0.e19cf580eeec046aa1422fa748 07ecefb2a1911c94e7b5f20a00 f70022d940193691e5bd790 */
 0x0.e19cf580eeec046aa1422fa748p0L,
 0x0.07ecefb2a1911c94e7b5f20a00p-104L,
/* sin(x) = 0.78f95b0560a9a3bd6df7bd981d c38c61224d08bc20631ea932e6 05e53b579e9e0767dfcbbcb */
 0x0.78f95b0560a9a3bd6df7bd981dp0L,
 0x0.c38c61224d08bc20631ea932e6p-104L,

/* x = 5.00000000000000000000000000000000000e-01 3ffe0000000000000000000000000000 */
/* cos(x) = 0.e0a94032dbea7cedbddd9da2fa fad98556566b3a89f43eabd723 50af3e8b19e801204d8fe2e */
 0x0.e0a94032dbea7cedbddd9da2fap0L,
 0x0.fad98556566b3a89f43eabd723p-104L,
/* sin(x) = 0.7abba1d12c17bfa1d92f0d93f6 0ded9992f45b4fcaf13cd58b30 3693d2a0db47db35ae8a3a9 */
 0x0.7abba1d12c17bfa1d92f0d93f6p0L,
 0x0.0ded9992f45b4fcaf13cd58b30p-104L,

/* x = 5.07812500000000000000000000000000000e-01 3ffe0400000000000000000000000000 */
/* cos(x) = 0.dfb20840f3a9b36f7ae2c51534 2890b5ec583b8366cc2b55029e 95094d31112383f2553498b */
 0x0.dfb20840f3a9b36f7ae2c51534p0L,
 0x0.2890b5ec583b8366cc2b55029ep-104L,
/* sin(x) = 0.7c7bfdaf13e5ed17212f8a7525 bfb113aba6c0741b5362bb8d59 282a850b63716bca0c910f0 */
 0x0.7c7bfdaf13e5ed17212f8a7525p0L,
 0x0.bfb113aba6c0741b5362bb8d59p-104L,

/* x = 5.15625000000000000000000000000000000e-01 3ffe0800000000000000000000000000 */
/* cos(x) = 0.deb7518814a7a931bbcc88c109 cd41c50bf8bb48f20ae8c36628 d1d3d57574f7dc58f27d91c */
 0x0.deb7518814a7a931bbcc88c109p0L,
 0x0.cd41c50bf8bb48f20ae8c36628p-104L,
/* sin(x) = 0.7e3a679daaf25c676542bcb402 8d0964172961c921823a4ef0c3 a9070d886dbd073f6283699 */
 0x0.7e3a679daaf25c676542bcb402p0L,
 0x0.8d0964172961c921823a4ef0c3p-104L,

/* x = 5.23437500000000000000000000000000000e-01 3ffe0c00000000000000000000000000 */
/* cos(x) = 0.ddb91ff318799172bd2452d0a3 889f5169c64a0094bcf0b8aa7d cf0d7640a2eba68955a80be */
 0x0.ddb91ff318799172bd2452d0a3p0L,
 0x0.889f5169c64a0094bcf0b8aa7dp-104L,
/* sin(x) = 0.7ff6d8a34bd5e8fa54c97482db 5159df1f24e8038419c0b448b9 eea8939b5d4dfcf40900257 */
 0x0.7ff6d8a34bd5e8fa54c97482dbp0L,
 0x0.5159df1f24e8038419c0b448b9p-104L,

/* x = 5.31250000000000000000000000000000000e-01 3ffe1000000000000000000000000000 */
/* cos(x) = 0.dcb7777ac420705168f31e3eb7 80ce9c939ecada62843b54522f 5407eb7f21e556059fcd734 */
 0x0.dcb7777ac420705168f31e3eb7p0L,
 0x0.80ce9c939ecada62843b54522fp-104L,
/* sin(x) = 0.81b149ce34caa5a4e650f8d09f d4d6aa74206c32ca951a93074c 83b2d294d25dbb0f7fdfad2 */
 0x0.81b149ce34caa5a4e650f8d09fp0L,
 0x0.d4d6aa74206c32ca951a93074cp-104L,

/* x = 5.39062500000000000000000000000000000e-01 3ffe1400000000000000000000000000 */
/* cos(x) = 0.dbb25c25b8260c14f6e7bc98ec 991b70c65335198b0ab628bad2 0cc7b229d4dd62183cfa055 */
 0x0.dbb25c25b8260c14f6e7bc98ecp0L,
 0x0.991b70c65335198b0ab628bad2p-104L,
/* sin(x) = 0.8369b434a372da7eb5c8a71fe3 6ce1e0b2b493f6f5cb2e38bcae c2a556b3678c401940d1c3c */
 0x0.8369b434a372da7eb5c8a71fe3p0L,
 0x0.6ce1e0b2b493f6f5cb2e38bcaep-104L,

/* x = 5.46875000000000000000000000000000000e-01 3ffe1800000000000000000000000000 */
/* cos(x) = 0.daa9d20860827063fde51c09e8 55e9932e1b17143e7244fd267a 899d41ae1f3bc6a0ec42e27 */
 0x0.daa9d20860827063fde51c09e8p0L,
 0x0.55e9932e1b17143e7244fd267ap-104L,
/* sin(x) = 0.852010f4f0800521378bd8dd61 4753d080c2e9e0775ffc609947 b9132f5357404f464f06a58 */
 0x0.852010f4f0800521378bd8dd61p0L,
 0x0.4753d080c2e9e0775ffc609947p-104L,

/* x = 5.54687500000000000000000000000000000e-01 3ffe1c00000000000000000000000000 */
/* cos(x) = 0.d99ddd44e44a43d4d4a3a3ed95 204106fd54d78e8c7684545c0d a0b7c2c72be7a89b7c182ad */
 0x0.d99ddd44e44a43d4d4a3a3ed95p0L,
 0x0.204106fd54d78e8c7684545c0dp-104L,
/* sin(x) = 0.86d45935ab396cb4e421e822de e54f3562dfcefeaa782184c234 01d231f5ad981a1cc195b18 */
 0x0.86d45935ab396cb4e421e822dep0L,
 0x0.e54f3562dfcefeaa782184c234p-104L,

/* x = 5.62500000000000000000000000000000000e-01 3ffe2000000000000000000000000000 */
/* cos(x) = 0.d88e820b1526311dd561efbc0c 1a9a5375eb26f65d246c5744b1 3ca26a7e0fd42556da843c8 */
 0x0.d88e820b1526311dd561efbc0cp0L,
 0x0.1a9a5375eb26f65d246c5744b1p-104L,
/* sin(x) = 0.88868625b4e1dbb23133101330 22527200c143a5cb16637cb7da f8ade82459ff2e98511f40f */
 0x0.88868625b4e1dbb23133101330p0L,
 0x0.22527200c143a5cb16637cb7dap-104L,

/* x = 5.70312500000000000000000000000000000e-01 3ffe2400000000000000000000000000 */
/* cos(x) = 0.d77bc4985e93a607c9d868b906 bbc6bbe3a04258814acb035846 8b826fc91bd4d814827f65e */
 0x0.d77bc4985e93a607c9d868b906p0L,
 0x0.bbc6bbe3a04258814acb035846p-104L,
/* sin(x) = 0.8a3690fc5bfc11bf9535e2739a 8512f448a41251514bbed7fc18 d530f9b4650fcbb2861b0aa */
 0x0.8a3690fc5bfc11bf9535e2739ap0L,
 0x0.8512f448a41251514bbed7fc18p-104L,

/* x = 5.78125000000000000000000000000000000e-01 3ffe2800000000000000000000000000 */
/* cos(x) = 0.d665a937b4ef2b1f6d51bad6d9 88a4419c1d7051faf31a9efa15 1d7631117efac03713f950a */
 0x0.d665a937b4ef2b1f6d51bad6d9p0L,
 0x0.88a4419c1d7051faf31a9efa15p-104L,
/* sin(x) = 0.8be472f9776d809af2b8817124 3d63d66dfceeeb739cc894e023 fbc165a0e3f26ff729c5d57 */
 0x0.8be472f9776d809af2b8817124p0L,
 0x0.3d63d66dfceeeb739cc894e023p-104L,

/* x = 5.85937500000000000000000000000000000e-01 3ffe2c00000000000000000000000000 */
/* cos(x) = 0.d54c3441844897fc8f853f0655 f1ba695eba9fbfd7439dbb1171 d862d9d9146ca5136f825ac */
 0x0.d54c3441844897fc8f853f0655p0L,
 0x0.f1ba695eba9fbfd7439dbb1171p-104L,
/* sin(x) = 0.8d902565817ee7839bce3cd128 060119492cd36d42d82ada30d7 f8bde91324808377ddbf5d4 */
 0x0.8d902565817ee7839bce3cd128p0L,
 0x0.060119492cd36d42d82ada30d7p-104L,

/* x = 5.93750000000000000000000000000000000e-01 3ffe3000000000000000000000000000 */
/* cos(x) = 0.d42f6a1b9f0168cdf031c2f63c 8d9304d86f8d34cb1d5fccb68c a0f2241427fc18d1fd5bbdf */
 0x0.d42f6a1b9f0168cdf031c2f63cp0L,
 0x0.8d9304d86f8d34cb1d5fccb68cp-104L,
/* sin(x) = 0.8f39a191b2ba6122a3fa4f41d5 a3ffd421417d46f19a22230a14 f7fcc8fce5c75b4b28b29d1 */
 0x0.8f39a191b2ba6122a3fa4f41d5p0L,
 0x0.a3ffd421417d46f19a22230a14p-104L,

/* x = 6.01562500000000000000000000000000000e-01 3ffe3400000000000000000000000000 */
/* cos(x) = 0.d30f4f392c357ab0661c5fa8a7 d9b26627846fef214b1d19a223 79ff9eddba087cf410eb097 */
 0x0.d30f4f392c357ab0661c5fa8a7p0L,
 0x0.d9b26627846fef214b1d19a223p-104L,
/* sin(x) = 0.90e0e0d81ca678796cc92c8ea8 c2815bc72ca78abe571bfa8576 aacc571e096a33237e0e830 */
 0x0.90e0e0d81ca678796cc92c8ea8p0L,
 0x0.c2815bc72ca78abe571bfa8576p-104L,

/* x = 6.09375000000000000000000000000000000e-01 3ffe3800000000000000000000000000 */
/* cos(x) = 0.d1ebe81a95ee752e48a26bcd32 d6e922d7eb44b8ad2232f69307 95e84b56317269b9dd1dfa6 */
 0x0.d1ebe81a95ee752e48a26bcd32p0L,
 0x0.d6e922d7eb44b8ad2232f69307p-104L,
/* sin(x) = 0.9285dc9bc45dd9ea3d02457bcc e59c4175aab6ff7929a8d28719 5525fdace200dba032874fb */
 0x0.9285dc9bc45dd9ea3d02457bccp0L,
 0x0.e59c4175aab6ff7929a8d28719p-104L,

/* x = 6.17187500000000000000000000000000000e-01 3ffe3c00000000000000000000000000 */
/* cos(x) = 0.d0c5394d772228195e25736c03 574707de0af1ca344b13bd3914 bfe27518e9e426f5deff1e1 */
 0x0.d0c5394d772228195e25736c03p0L,
 0x0.574707de0af1ca344b13bd3914p-104L,
/* sin(x) = 0.94288e48bd0335fc41c4cbd292 0497a8f5d1d8185c99fa0081f9 0c27e2a53ffdd208a0dbe69 */
 0x0.94288e48bd0335fc41c4cbd292p0L,
 0x0.0497a8f5d1d8185c99fa0081f9p-104L,

/* x = 6.25000000000000000000000000000000000e-01 3ffe4000000000000000000000000000 */
/* cos(x) = 0.cf9b476c897c25c5bfe750dd3f 308eaf7bcc1ed00179a256870f 4200445043dcdb1974b5878 */
 0x0.cf9b476c897c25c5bfe750dd3fp0L,
 0x0.308eaf7bcc1ed00179a256870fp-104L,
/* sin(x) = 0.95c8ef544210ec0b91c49bd2aa 09e8515fa61a156ebb10f5f8c2 32a6445b61ebf3c2ec268f9 */
 0x0.95c8ef544210ec0b91c49bd2aap0L,
 0x0.09e8515fa61a156ebb10f5f8c2p-104L,

/* x = 6.32812500000000000000000000000000000e-01 3ffe4400000000000000000000000000 */
/* cos(x) = 0.ce6e171f92f2e27f32225327ec 440ddaefae248413efc0e58cee e1ae369aabe73f88c87ed1a */
 0x0.ce6e171f92f2e27f32225327ecp0L,
 0x0.440ddaefae248413efc0e58ceep-104L,
/* sin(x) = 0.9766f93cd18413a6aafc1cfc6f c28abb6817bf94ce349901ae3f 48c3215d3eb60acc5f78903 */
 0x0.9766f93cd18413a6aafc1cfc6fp0L,
 0x0.c28abb6817bf94ce349901ae3fp-104L,

/* x = 6.40625000000000000000000000000000000e-01 3ffe4800000000000000000000000000 */
/* cos(x) = 0.cd3dad1b5328a2e459f993f4f5 108819faccbc4eeba9604e81c7 adad51cc8a2561631a06826 */
 0x0.cd3dad1b5328a2e459f993f4f5p0L,
 0x0.108819faccbc4eeba9604e81c7p-104L,
/* sin(x) = 0.9902a58a45e27bed68412b426b 675ed503f54d14c8172e0d373f 42cadf04daf67319a7f94be */
 0x0.9902a58a45e27bed68412b426bp0L,
 0x0.675ed503f54d14c8172e0d373fp-104L,

/* x = 6.48437500000000000000000000000000000e-01 3ffe4c00000000000000000000000000 */
/* cos(x) = 0.cc0a0e21709883a3ff00911e11 a07ee3bd7ea2b04e081be99be0 264791170761ae64b8b744a */
 0x0.cc0a0e21709883a3ff00911e11p0L,
 0x0.a07ee3bd7ea2b04e081be99be0p-104L,
/* sin(x) = 0.9a9bedcdf01b38d993f3d78207 81de292033ead73b89e28f3931 3dbe3a6e463f845b5fa8490 */
 0x0.9a9bedcdf01b38d993f3d78207p0L,
 0x0.81de292033ead73b89e28f3931p-104L,

/* x = 6.56250000000000000000000000000000000e-01 3ffe5000000000000000000000000000 */
/* cos(x) = 0.cad33f00658fe5e8204bbc0f3a 66a0e6a773f87987a780b243d7 be83b3db1448ca0e0e62787 */
 0x0.cad33f00658fe5e8204bbc0f3ap0L,
 0x0.66a0e6a773f87987a780b243d7p-104L,
/* sin(x) = 0.9c32cba2b14156ef05256c4f85 7991ca6a547cd7ceb1ac8a8e62 a282bd7b9183648a462bd04 */
 0x0.9c32cba2b14156ef05256c4f85p0L,
 0x0.7991ca6a547cd7ceb1ac8a8e62p-104L,

/* x = 6.64062500000000000000000000000000000e-01 3ffe5400000000000000000000000000 */
/* cos(x) = 0.c99944936cf48c8911ff93fe64 b3ddb7981e414bdaf6aae12035 77de44878c62bc3bc9cf7b9 */
 0x0.c99944936cf48c8911ff93fe64p0L,
 0x0.b3ddb7981e414bdaf6aae12035p-104L,
/* sin(x) = 0.9dc738ad14204e689ac582d0f8 5826590feece34886cfefe2e08 cf2bb8488d55424dc9d3525 */
 0x0.9dc738ad14204e689ac582d0f8p0L,
 0x0.5826590feece34886cfefe2e08p-104L,

/* x = 6.71875000000000000000000000000000000e-01 3ffe5800000000000000000000000000 */
/* cos(x) = 0.c85c23c26ed7b6f014ef546c47 929682122876bfbf157de0aff3 c4247d820c746e32cd4174f */
 0x0.c85c23c26ed7b6f014ef546c47p0L,
 0x0.929682122876bfbf157de0aff3p-104L,
/* sin(x) = 0.9f592e9b66a9cf906a3c7aa3c1 0199849040c45ec3f0a7475973 11038101780c5f266059dbf */
 0x0.9f592e9b66a9cf906a3c7aa3c1p0L,
 0x0.0199849040c45ec3f0a7475973p-104L,

/* x = 6.79687500000000000000000000000000000e-01 3ffe5c00000000000000000000000000 */
/* cos(x) = 0.c71be181ecd6875ce2da5615a0 3cca207d9adcb9dfb0a1d6c40a 4f0056437f1a59ccddd06ee */
 0x0.c71be181ecd6875ce2da5615a0p0L,
 0x0.3cca207d9adcb9dfb0a1d6c40ap-104L,
/* sin(x) = 0.a0e8a725d33c828c11fa50fd9e 9a15ffecfad43f3e534358076b 9b0f6865694842b1e8c67dc */
 0x0.a0e8a725d33c828c11fa50fd9ep0L,
 0x0.9a15ffecfad43f3e534358076bp-104L,

/* x = 6.87500000000000000000000000000000000e-01 3ffe6000000000000000000000000000 */
/* cos(x) = 0.c5d882d2ee48030c7c07d28e98 1e34804f82ed4cf93655d23653 89b716de6ad44676a1cc5da */
 0x0.c5d882d2ee48030c7c07d28e98p0L,
 0x0.1e34804f82ed4cf93655d23653p-104L,
/* sin(x) = 0.a2759c0e79c35582527c32b55f 5405c182c66160cb1d9eb7bb0b 7cdf4ad66f317bda4332914 */
 0x0.a2759c0e79c35582527c32b55fp0L,
 0x0.5405c182c66160cb1d9eb7bb0bp-104L,

/* x = 6.95312500000000000000000000000000000e-01 3ffe6400000000000000000000000000 */
/* cos(x) = 0.c4920cc2ec38fb891b38827db0 8884fc66371ac4c2052ca8885b 981bbcfd3bb7b093ee31515 */
 0x0.c4920cc2ec38fb891b38827db0p0L,
 0x0.8884fc66371ac4c2052ca8885bp-104L,
/* sin(x) = 0.a400072188acf49cd6b173825e 038346f105e1301afe642bcc36 4cea455e21e506e3e927ed8 */
 0x0.a400072188acf49cd6b173825ep0L,
 0x0.038346f105e1301afe642bcc36p-104L,

/* x = 7.03125000000000000000000000000000000e-01 3ffe6800000000000000000000000000 */
/* cos(x) = 0.c348846bbd3631338ffe2bfe9d d1381a35b4e9c0c51b4c13fe37 6bad1bf5caacc4542be0aa9 */
 0x0.c348846bbd3631338ffe2bfe9dp0L,
 0x0.d1381a35b4e9c0c51b4c13fe37p-104L,
/* sin(x) = 0.a587e23555bb08086d02b9c662 cdd29316c3e9bd08d93793634a 21b1810cce73bdb97a99b9e */
 0x0.a587e23555bb08086d02b9c662p0L,
 0x0.cdd29316c3e9bd08d93793634ap-104L,

/* x = 7.10937500000000000000000000000000000e-01 3ffe6c00000000000000000000000000 */
/* cos(x) = 0.c1fbeef380e4ffdd5a613ec872 2f643ffe814ec2343e53adb549 627224fdc9f2a7b77d3d69f */
 0x0.c1fbeef380e4ffdd5a613ec872p0L,
 0x0.2f643ffe814ec2343e53adb549p-104L,
/* sin(x) = 0.a70d272a76a8d4b6da0ec90712 bb748b96dabf88c3079246f3db 7eea6e58ead4ed0e2843303 */
 0x0.a70d272a76a8d4b6da0ec90712p0L,
 0x0.bb748b96dabf88c3079246f3dbp-104L,

/* x = 7.18750000000000000000000000000000000e-01 3ffe7000000000000000000000000000 */
/* cos(x) = 0.c0ac518c8b6ae710ba37a3eeb9 0cb15aebcb8bed4356fb507a48 a6e97de9aa6d9660116b436 */
 0x0.c0ac518c8b6ae710ba37a3eeb9p0L,
 0x0.0cb15aebcb8bed4356fb507a48p-104L,
/* sin(x) = 0.a88fcfebd9a8dd47e2f3c76ef9 e2439920f7e7fbe735f8bcc985 491ec6f12a2d4214f8cfa99 */
 0x0.a88fcfebd9a8dd47e2f3c76ef9p0L,
 0x0.e2439920f7e7fbe735f8bcc985p-104L,

/* x = 7.26562500000000000000000000000000000e-01 3ffe7400000000000000000000000000 */
/* cos(x) = 0.bf59b17550a440687596929656 7cf3e3b4e483061877c02811c6 cae85fad5a6c3da58f49292 */
 0x0.bf59b17550a440687596929656p0L,
 0x0.7cf3e3b4e483061877c02811c6p-104L,
/* sin(x) = 0.aa0fd66eddb921232c28520d39 11b8a03193b47f187f1471ac21 6fbcd5bb81029294d3a73f1 */
 0x0.aa0fd66eddb921232c28520d39p0L,
 0x0.11b8a03193b47f187f1471ac21p-104L,

/* x = 7.34375000000000000000000000000000000e-01 3ffe7800000000000000000000000000 */
/* cos(x) = 0.be0413f84f2a771c614946a88c bf4da1d75a5560243de8f2283f efa0ea4a48468a52d51d8b3 */
 0x0.be0413f84f2a771c614946a88cp0L,
 0x0.bf4da1d75a5560243de8f2283fp-104L,
/* sin(x) = 0.ab8d34b36acd987210ed343ec6 5d7e3adc2e7109fce43d55c8d5 7dfdf55b9e01d2cc1f1b9ec */
 0x0.ab8d34b36acd987210ed343ec6p0L,
 0x0.5d7e3adc2e7109fce43d55c8d5p-104L,

/* x = 7.42187500000000000000000000000000000e-01 3ffe7c00000000000000000000000000 */
/* cos(x) = 0.bcab7e6bfb2a14a9b122c574a3 76bec98ab14808c64a4e731b34 047e217611013ac99c0f25d */
 0x0.bcab7e6bfb2a14a9b122c574a3p0L,
 0x0.76bec98ab14808c64a4e731b34p-104L,
/* sin(x) = 0.ad07e4c409d08c4fa3a9057bb0 ac24b8636e74e76f51e09bd6b2 319707cbd9f5e254643897a */
 0x0.ad07e4c409d08c4fa3a9057bb0p0L,
 0x0.ac24b8636e74e76f51e09bd6b2p-104L,

/* x = 7.50000000000000000000000000000000000e-01 3ffe8000000000000000000000000000 */
/* cos(x) = 0.bb4ff632a908f73ec151839cb9 d993b4e0bfb8f20e7e44e6e4ae e845e35575c3106dbe6fd06 */
 0x0.bb4ff632a908f73ec151839cb9p0L,
 0x0.d993b4e0bfb8f20e7e44e6e4aep-104L,
/* sin(x) = 0.ae7fe0b5fc786b2d966e1d6af1 40a488476747c2646425fc7533 f532cd044cb10a971a49a6a */
 0x0.ae7fe0b5fc786b2d966e1d6af1p0L,
 0x0.40a488476747c2646425fc7533p-104L,

/* x = 7.57812500000000000000000000000000000e-01 3ffe8400000000000000000000000000 */
/* cos(x) = 0.b9f180ba77dd0751628e135a95 08299012230f14becacdd14c3f 8862d122de5b56d55b53360 */
 0x0.b9f180ba77dd0751628e135a95p0L,
 0x0.08299012230f14becacdd14c3fp-104L,
/* sin(x) = 0.aff522a954f2ba16d9defdc416 e33f5e9a5dfd5a6c228e0abc4d 521327ff6e2517a7b3851dd */
 0x0.aff522a954f2ba16d9defdc416p0L,
 0x0.e33f5e9a5dfd5a6c228e0abc4dp-104L,

/* x = 7.65625000000000000000000000000000000e-01 3ffe8800000000000000000000000000 */
/* cos(x) = 0.b890237d3bb3c284b614a05390 16bfa1053730bbdf940fa895e1 85f8e58884d3dda15e63371 */
 0x0.b890237d3bb3c284b614a05390p0L,
 0x0.16bfa1053730bbdf940fa895e1p-104L,
/* sin(x) = 0.b167a4c90d63c4244cf5493b7c c23bd3c3c1225e078baa0c53d6 d400b926281f537a1a260e6 */
 0x0.b167a4c90d63c4244cf5493b7cp0L,
 0x0.c23bd3c3c1225e078baa0c53d6p-104L,

/* x = 7.73437500000000000000000000000000000e-01 3ffe8c00000000000000000000000000 */
/* cos(x) = 0.b72be40067aaf2c050dbdb7a14 c3d7d4f203f6b3f0224a4afe55 d6ec8e92b508fd5c5984b3b */
 0x0.b72be40067aaf2c050dbdb7a14p0L,
 0x0.c3d7d4f203f6b3f0224a4afe55p-104L,
/* sin(x) = 0.b2d7614b1f3aaa24df2d6e20a7 7e1ca3e6d838c03e29c1bcb026 e6733324815fadc9eb89674 */
 0x0.b2d7614b1f3aaa24df2d6e20a7p0L,
 0x0.7e1ca3e6d838c03e29c1bcb026p-104L,

/* x = 7.81250000000000000000000000000000000e-01 3ffe9000000000000000000000000000 */
/* cos(x) = 0.b5c4c7d4f7dae915ac786ccf4b 1a498d3e73b6e5e74fe7519d9c 53ee6d6b90e881bddfc33e1 */
 0x0.b5c4c7d4f7dae915ac786ccf4bp0L,
 0x0.1a498d3e73b6e5e74fe7519d9cp-104L,
/* sin(x) = 0.b44452709a5975290591376543 4a59d111f0433eb2b133f7d103 207e2aeb4aae111ddc385b3 */
 0x0.b44452709a5975290591376543p0L,
 0x0.4a59d111f0433eb2b133f7d103p-104L,

/* x = 7.89062500000000000000000000000000000e-01 3ffe9400000000000000000000000000 */
/* cos(x) = 0.b45ad4975b1294cadca4cf40ec 8f22a68cd14b175835239a37e6 3acb85e8e9505215df18140 */
 0x0.b45ad4975b1294cadca4cf40ecp0L,
 0x0.8f22a68cd14b175835239a37e6p-104L,
/* sin(x) = 0.b5ae7285bc10cf515753847e8f 8b7a30e0a580d929d770103509 880680f7b8b0e8ad23b65d8 */
 0x0.b5ae7285bc10cf515753847e8fp0L,
 0x0.8b7a30e0a580d929d770103509p-104L
};
