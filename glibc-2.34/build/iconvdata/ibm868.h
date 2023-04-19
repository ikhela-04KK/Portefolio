static const uint32_t to_ucs4[256] = {
  [0x01] = 0x0001,
  [0x02] = 0x0002,
  [0x03] = 0x0003,
  [0x04] = 0x0004,
  [0x05] = 0x0005,
  [0x06] = 0x0006,
  [0x07] = 0x0007,
  [0x08] = 0x0008,
  [0x09] = 0x0009,
  [0x0a] = 0x000A,
  [0x0b] = 0x000B,
  [0x0c] = 0x000C,
  [0x0d] = 0x000D,
  [0x0e] = 0x000E,
  [0x0f] = 0x000F,
  [0x10] = 0x0010,
  [0x11] = 0x0011,
  [0x12] = 0x0012,
  [0x13] = 0x0013,
  [0x14] = 0x0014,
  [0x15] = 0x0015,
  [0x16] = 0x0016,
  [0x17] = 0x0017,
  [0x18] = 0x0018,
  [0x19] = 0x0019,
  [0x1a] = 0x001A,
  [0x1b] = 0x001B,
  [0x1c] = 0x001C,
  [0x1d] = 0x001D,
  [0x1e] = 0x001E,
  [0x1f] = 0x001F,
  [0x20] = 0x0020,
  [0x21] = 0x0021,
  [0x22] = 0x0022,
  [0x23] = 0x0023,
  [0x24] = 0x0024,
  [0x25] = 0x0025,
  [0x26] = 0x0026,
  [0x27] = 0x0027,
  [0x28] = 0x0028,
  [0x29] = 0x0029,
  [0x2a] = 0x002A,
  [0x2b] = 0x002B,
  [0x2c] = 0x002C,
  [0x2d] = 0x002D,
  [0x2e] = 0x002E,
  [0x2f] = 0x002F,
  [0x30] = 0x0030,
  [0x31] = 0x0031,
  [0x32] = 0x0032,
  [0x33] = 0x0033,
  [0x34] = 0x0034,
  [0x35] = 0x0035,
  [0x36] = 0x0036,
  [0x37] = 0x0037,
  [0x38] = 0x0038,
  [0x39] = 0x0039,
  [0x3a] = 0x003A,
  [0x3b] = 0x003B,
  [0x3c] = 0x003C,
  [0x3d] = 0x003D,
  [0x3e] = 0x003E,
  [0x3f] = 0x003F,
  [0x40] = 0x0040,
  [0x41] = 0x0041,
  [0x42] = 0x0042,
  [0x43] = 0x0043,
  [0x44] = 0x0044,
  [0x45] = 0x0045,
  [0x46] = 0x0046,
  [0x47] = 0x0047,
  [0x48] = 0x0048,
  [0x49] = 0x0049,
  [0x4a] = 0x004A,
  [0x4b] = 0x004B,
  [0x4c] = 0x004C,
  [0x4d] = 0x004D,
  [0x4e] = 0x004E,
  [0x4f] = 0x004F,
  [0x50] = 0x0050,
  [0x51] = 0x0051,
  [0x52] = 0x0052,
  [0x53] = 0x0053,
  [0x54] = 0x0054,
  [0x55] = 0x0055,
  [0x56] = 0x0056,
  [0x57] = 0x0057,
  [0x58] = 0x0058,
  [0x59] = 0x0059,
  [0x5a] = 0x005A,
  [0x5b] = 0x005B,
  [0x5c] = 0x005C,
  [0x5d] = 0x005D,
  [0x5e] = 0x005E,
  [0x5f] = 0x005F,
  [0x60] = 0x0060,
  [0x61] = 0x0061,
  [0x62] = 0x0062,
  [0x63] = 0x0063,
  [0x64] = 0x0064,
  [0x65] = 0x0065,
  [0x66] = 0x0066,
  [0x67] = 0x0067,
  [0x68] = 0x0068,
  [0x69] = 0x0069,
  [0x6a] = 0x006A,
  [0x6b] = 0x006B,
  [0x6c] = 0x006C,
  [0x6d] = 0x006D,
  [0x6e] = 0x006E,
  [0x6f] = 0x006F,
  [0x70] = 0x0070,
  [0x71] = 0x0071,
  [0x72] = 0x0072,
  [0x73] = 0x0073,
  [0x74] = 0x0074,
  [0x75] = 0x0075,
  [0x76] = 0x0076,
  [0x77] = 0x0077,
  [0x78] = 0x0078,
  [0x79] = 0x0079,
  [0x7a] = 0x007A,
  [0x7b] = 0x007B,
  [0x7c] = 0x007C,
  [0x7d] = 0x007D,
  [0x7e] = 0x007E,
  [0x7f] = 0x007F,
  [0x80] = 0x0660,
  [0x81] = 0x0661,
  [0x82] = 0x0662,
  [0x83] = 0x0663,
  [0x84] = 0x0664,
  [0x85] = 0x0665,
  [0x86] = 0x0666,
  [0x87] = 0x0667,
  [0x88] = 0x0668,
  [0x89] = 0x0669,
  [0x8a] = 0x060C,
  [0x8b] = 0x061B,
  [0x8c] = 0x061F,
  [0x8d] = 0x0622,
  [0x8e] = 0x0627,
  [0x8f] = 0xFE8E,
  [0x90] = 0xE016,
  [0x91] = 0x0628,
  [0x92] = 0xFE91,
  [0x93] = 0x067E,
  [0x95] = 0x0629,
  [0x96] = 0x062A,
  [0x97] = 0xFE97,
  [0x9a] = 0x062B,
  [0x9b] = 0xFE9B,
  [0x9c] = 0x062C,
  [0x9d] = 0xFE9F,
  [0xa0] = 0x062D,
  [0xa1] = 0xFEA3,
  [0xa2] = 0x062E,
  [0xa3] = 0xFEA7,
  [0xa4] = 0x062F,
  [0xa6] = 0x0630,
  [0xa7] = 0x0631,
  [0xa9] = 0x0632,
  [0xab] = 0x0633,
  [0xac] = 0xFEB3,
  [0xad] = 0x0634,
  [0xae] = 0x00AB,
  [0xaf] = 0x00BB,
  [0xb0] = 0xFEB7,
  [0xb1] = 0x0635,
  [0xb2] = 0x2591,
  [0xb3] = 0x2592,
  [0xb4] = 0x2593,
  [0xb5] = 0x2502,
  [0xb6] = 0x2524,
  [0xb7] = 0xFEBB,
  [0xb8] = 0x0636,
  [0xb9] = 0xFEBF,
  [0xba] = 0x0637,
  [0xbb] = 0x2563,
  [0xbc] = 0x2551,
  [0xbd] = 0x2557,
  [0xbe] = 0x255D,
  [0xbf] = 0x0638,
  [0xc0] = 0x0639,
  [0xc1] = 0x2510,
  [0xc2] = 0x2514,
  [0xc3] = 0x2534,
  [0xc4] = 0x252C,
  [0xc5] = 0x251C,
  [0xc6] = 0x2500,
  [0xc7] = 0x253C,
  [0xc8] = 0xFECA,
  [0xc9] = 0xFECB,
  [0xca] = 0x255A,
  [0xcb] = 0x2554,
  [0xcc] = 0x2569,
  [0xcd] = 0x2566,
  [0xce] = 0x2560,
  [0xcf] = 0x2550,
  [0xd0] = 0x256C,
  [0xd1] = 0xFECC,
  [0xd2] = 0x063A,
  [0xd3] = 0xFECE,
  [0xd4] = 0xFECF,
  [0xd5] = 0xFED0,
  [0xd6] = 0x0641,
  [0xd7] = 0xFED3,
  [0xd8] = 0x0642,
  [0xd9] = 0xFED7,
  [0xda] = 0xFEDA,
  [0xdb] = 0x2518,
  [0xdc] = 0x250C,
  [0xdd] = 0x2588,
  [0xde] = 0x2580,
  [0xdf] = 0xFEDB,
  [0xe1] = 0x2584,
  [0xe3] = 0x0644,
  [0xe4] = 0xFEDE,
  [0xe5] = 0xFEE0,
  [0xe6] = 0x0645,
  [0xe7] = 0xFEE3,
  [0xe9] = 0x0646,
  [0xea] = 0xFEE7,
  [0xec] = 0x0648,
  [0xf1] = 0x0621,
  [0xf2] = 0x00AD,
  [0xfb] = 0x0651,
  [0xfc] = 0xFE7D,
  [0xfe] = 0x25A0,
  [0xff] = 0x00A0,
};
static const struct gap from_idx[] = {
  { .start = 0x0000, .end = 0x007f, .idx =     0 },
  { .start = 0x00a0, .end = 0x00a0, .idx =   -32 },
  { .start = 0x00ab, .end = 0x00ad, .idx =   -42 },
  { .start = 0x00bb, .end = 0x00bb, .idx =   -55 },
  { .start = 0x060c, .end = 0x060c, .idx = -1415 },
  { .start = 0x061b, .end = 0x063a, .idx = -1429 },
  { .start = 0x0641, .end = 0x0648, .idx = -1435 },
  { .start = 0x0651, .end = 0x0651, .idx = -1443 },
  { .start = 0x0660, .end = 0x0669, .idx = -1457 },
  { .start = 0x067e, .end = 0x067e, .idx = -1477 },
  { .start = 0x2500, .end = 0x2502, .idx = -9286 },
  { .start = 0x250c, .end = 0x251c, .idx = -9295 },
  { .start = 0x2524, .end = 0x2524, .idx = -9302 },
  { .start = 0x252c, .end = 0x252c, .idx = -9309 },
  { .start = 0x2534, .end = 0x2534, .idx = -9316 },
  { .start = 0x253c, .end = 0x253c, .idx = -9323 },
  { .start = 0x2550, .end = 0x256c, .idx = -9342 },
  { .start = 0x2580, .end = 0x2588, .idx = -9361 },
  { .start = 0x2591, .end = 0x2593, .idx = -9369 },
  { .start = 0x25a0, .end = 0x25a0, .idx = -9381 },
  { .start = 0xe016, .end = 0xe016, .idx = -57114 },
  { .start = 0xfe7d, .end = 0xfe7d, .idx = -64896 },
  { .start = 0xfe8e, .end = 0xfea7, .idx = -64912 },
  { .start = 0xfeb3, .end = 0xfebf, .idx = -64923 },
  { .start = 0xfeca, .end = 0xfee7, .idx = -64933 },
  { .start = 0xffff, .end = 0xffff, .idx =     0 }
};
static const char from_ucs4[] = {

  '\x00', '\x01', '\x02', '\x03', '\x04', '\x05', '\x06', '\x07',
  '\x08', '\x09', '\x0a', '\x0b', '\x0c', '\x0d', '\x0e', '\x0f',
  '\x10', '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17',
  '\x18', '\x19', '\x1a', '\x1b', '\x1c', '\x1d', '\x1e', '\x1f',
  '\x20', '\x21', '\x22', '\x23', '\x24', '\x25', '\x26', '\x27',
  '\x28', '\x29', '\x2a', '\x2b', '\x2c', '\x2d', '\x2e', '\x2f',
  '\x30', '\x31', '\x32', '\x33', '\x34', '\x35', '\x36', '\x37',
  '\x38', '\x39', '\x3a', '\x3b', '\x3c', '\x3d', '\x3e', '\x3f',
  '\x40', '\x41', '\x42', '\x43', '\x44', '\x45', '\x46', '\x47',
  '\x48', '\x49', '\x4a', '\x4b', '\x4c', '\x4d', '\x4e', '\x4f',
  '\x50', '\x51', '\x52', '\x53', '\x54', '\x55', '\x56', '\x57',
  '\x58', '\x59', '\x5a', '\x5b', '\x5c', '\x5d', '\x5e', '\x5f',
  '\x60', '\x61', '\x62', '\x63', '\x64', '\x65', '\x66', '\x67',
  '\x68', '\x69', '\x6a', '\x6b', '\x6c', '\x6d', '\x6e', '\x6f',
  '\x70', '\x71', '\x72', '\x73', '\x74', '\x75', '\x76', '\x77',
  '\x78', '\x79', '\x7a', '\x7b', '\x7c', '\x7d', '\x7e', '\x7f',
  '\xff', '\xae', '\x00', '\xf2', '\xaf', '\x8a', '\x8b', '\x00',
  '\x00', '\x00', '\x8c', '\x00', '\xf1', '\x8d', '\x00', '\x00',
  '\x00', '\x00', '\x8e', '\x91', '\x95', '\x96', '\x9a', '\x9c',
  '\xa0', '\xa2', '\xa4', '\xa6', '\xa7', '\xa9', '\xab', '\xad',
  '\xb1', '\xb8', '\xba', '\xbf', '\xc0', '\xd2', '\xd6', '\xd8',
  '\x00', '\xe3', '\xe6', '\xe9', '\x00', '\xec', '\xfb', '\x80',
  '\x81', '\x82', '\x83', '\x84', '\x85', '\x86', '\x87', '\x88',
  '\x89', '\x93', '\xc6', '\x00', '\xb5', '\xdc', '\x00', '\x00',
  '\x00', '\xc1', '\x00', '\x00', '\x00', '\xc2', '\x00', '\x00',
  '\x00', '\xdb', '\x00', '\x00', '\x00', '\xc5', '\xb6', '\xc4',
  '\xc3', '\xc7', '\xcf', '\xbc', '\x00', '\x00', '\xcb', '\x00',
  '\x00', '\xbd', '\x00', '\x00', '\xca', '\x00', '\x00', '\xbe',
  '\x00', '\x00', '\xce', '\x00', '\x00', '\xbb', '\x00', '\x00',
  '\xcd', '\x00', '\x00', '\xcc', '\x00', '\x00', '\xd0', '\xde',
  '\x00', '\x00', '\x00', '\xe1', '\x00', '\x00', '\x00', '\xdd',
  '\xb2', '\xb3', '\xb4', '\xfe', '\x90', '\xfc', '\x8f', '\x00',
  '\x00', '\x92', '\x00', '\x00', '\x00', '\x00', '\x00', '\x97',
  '\x00', '\x00', '\x00', '\x9b', '\x00', '\x00', '\x00', '\x9d',
  '\x00', '\x00', '\x00', '\xa1', '\x00', '\x00', '\x00', '\xa3',
  '\xac', '\x00', '\x00', '\x00', '\xb0', '\x00', '\x00', '\x00',
  '\xb7', '\x00', '\x00', '\x00', '\xb9', '\xc8', '\xc9', '\xd1',
  '\x00', '\xd3', '\xd4', '\xd5', '\x00', '\x00', '\xd7', '\x00',
  '\x00', '\x00', '\xd9', '\x00', '\x00', '\xda', '\xdf', '\x00',
  '\x00', '\xe4', '\x00', '\xe5', '\x00', '\x00', '\xe7', '\x00',
  '\x00', '\x00', '\xea',
};