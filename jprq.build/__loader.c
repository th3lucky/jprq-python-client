
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 164 > 0
static unsigned char *bytecode_data[164];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"_bz2", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_codecs_cn", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_codecs_hk", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_codecs_iso2022", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_codecs_jp", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_codecs_kr", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_codecs_tw", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_multibytecodec", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_opcode", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_collections_abc", NULL, 0, 31701, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_compression", NULL, 1, 4161, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_weakrefset", NULL, 2, 7687, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"abc", NULL, 3, 5738, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ast", NULL, 4, 52269, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"base64", NULL, 5, 16418, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"bz2", NULL, 6, 11508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"codecs", NULL, 7, 33851, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"collections", NULL, 8, 48055, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"collections.abc", NULL, 9, 31700, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"contextlib", NULL, 10, 19501, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"copyreg", NULL, 11, 4393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dis", NULL, 12, 15783, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings", NULL, 13, 3851, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"encodings.aliases", NULL, 14, 6293, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.ascii", NULL, 15, 1846, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.base64_codec", NULL, 16, 2333, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.big5", NULL, 17, 1374, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.big5hkscs", NULL, 18, 1384, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.bz2_codec", NULL, 19, 3222, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.charmap", NULL, 20, 2856, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp037", NULL, 21, 2387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1006", NULL, 22, 2463, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1026", NULL, 23, 2391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1125", NULL, 24, 8094, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1140", NULL, 25, 2377, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1250", NULL, 26, 2414, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1251", NULL, 27, 2411, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1252", NULL, 28, 2414, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1253", NULL, 29, 2427, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1254", NULL, 30, 2416, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1255", NULL, 31, 2435, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1256", NULL, 32, 2413, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1257", NULL, 33, 2421, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1258", NULL, 34, 2419, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp273", NULL, 35, 2373, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp424", NULL, 36, 2417, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp437", NULL, 37, 7811, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp500", NULL, 38, 2387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp720", NULL, 39, 2484, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp737", NULL, 40, 8133, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp775", NULL, 41, 7841, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp850", NULL, 42, 7472, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp852", NULL, 43, 7849, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp855", NULL, 44, 8102, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp856", NULL, 45, 2449, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp857", NULL, 46, 7452, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp858", NULL, 47, 7442, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp860", NULL, 48, 7790, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp861", NULL, 49, 7805, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp862", NULL, 50, 7994, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp863", NULL, 51, 7805, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp864", NULL, 52, 7949, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp865", NULL, 53, 7805, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp866", NULL, 54, 8138, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp869", NULL, 55, 7829, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp874", NULL, 56, 2515, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp875", NULL, 57, 2384, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp932", NULL, 58, 1376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp949", NULL, 59, 1376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp950", NULL, 60, 1376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jis_2004", NULL, 61, 1390, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jisx0213", NULL, 62, 1390, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jp", NULL, 63, 1378, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.euc_kr", NULL, 64, 1378, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.gb18030", NULL, 65, 1380, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.gb2312", NULL, 66, 1378, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.gbk", NULL, 67, 1372, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.hex_codec", NULL, 68, 2320, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.hp_roman8", NULL, 69, 2588, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.hz", NULL, 70, 1370, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.idna", NULL, 71, 5562, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp", NULL, 72, 1391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_1", NULL, 73, 1395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_2", NULL, 74, 1395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_2004", NULL, 75, 1401, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_3", NULL, 76, 1395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_ext", NULL, 77, 1399, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_kr", NULL, 78, 1391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_1", NULL, 79, 2386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_10", NULL, 80, 2391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_11", NULL, 81, 2485, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_13", NULL, 82, 2394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_14", NULL, 83, 2412, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_15", NULL, 84, 2391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_16", NULL, 85, 2393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_2", NULL, 86, 2386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_3", NULL, 87, 2393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_4", NULL, 88, 2386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_5", NULL, 89, 2387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_6", NULL, 90, 2431, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_7", NULL, 91, 2394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_8", NULL, 92, 2425, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_9", NULL, 93, 2386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.johab", NULL, 94, 1376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_r", NULL, 95, 2438, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_t", NULL, 96, 2349, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_u", NULL, 97, 2424, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.kz1048", NULL, 98, 2401, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.latin_1", NULL, 99, 1858, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_arabic", NULL, 100, 7705, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_croatian", NULL, 101, 2433, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_cyrillic", NULL, 102, 2423, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_farsi", NULL, 103, 2367, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_greek", NULL, 104, 2407, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_iceland", NULL, 105, 2426, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_latin2", NULL, 106, 2567, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_roman", NULL, 107, 2424, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_romanian", NULL, 108, 2434, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_turkish", NULL, 109, 2427, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.palmos", NULL, 110, 2414, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.ptcp154", NULL, 111, 2508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.punycode", NULL, 112, 6272, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.quopri_codec", NULL, 113, 2359, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.raw_unicode_escape", NULL, 114, 1938, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.rot_13", NULL, 115, 2966, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jis", NULL, 116, 1384, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jis_2004", NULL, 117, 1394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jisx0213", NULL, 118, 1394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.tis_620", NULL, 119, 2476, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.undefined", NULL, 120, 2060, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.unicode_escape", NULL, 121, 1918, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16", NULL, 122, 4835, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16_be", NULL, 123, 1615, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16_le", NULL, 124, 1615, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32", NULL, 125, 4728, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32_be", NULL, 126, 1508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32_le", NULL, 127, 1508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_7", NULL, 128, 1536, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_8", NULL, 129, 1595, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_8_sig", NULL, 130, 4507, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.uu_codec", NULL, 131, 3195, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.zlib_codec", NULL, 132, 3043, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"enum", NULL, 133, 25983, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"functools", NULL, 134, 28393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"genericpath", NULL, 135, 3987, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"heapq", NULL, 136, 14003, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib", NULL, 137, 3787, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"importlib._bootstrap", NULL, 138, 28931, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib._bootstrap_external", NULL, 139, 45133, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.machinery", NULL, 140, 927, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"inspect", NULL, 141, 81435, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"io", NULL, 142, 3371, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"keyword", NULL, 143, 879, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"linecache", NULL, 144, 3991, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"locale", NULL, 145, 34644, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"opcode", NULL, 146, 5186, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"operator", NULL, 147, 13747, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"os", NULL, 148, 31609, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"posixpath", NULL, 149, 10292, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"quopri", NULL, 150, 5710, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"re", NULL, 151, 14325, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"reprlib", NULL, 152, 5270, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sre_compile", NULL, 153, 15016, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sre_constants", NULL, 154, 6280, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sre_parse", NULL, 155, 21566, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"stat", NULL, 156, 4335, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"stringprep", NULL, 157, 9949, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"struct", NULL, 158, 269, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"threading", NULL, 159, 42141, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"token", NULL, 160, 2459, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tokenize", NULL, 161, 17128, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"types", NULL, 162, 9184, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"warnings", NULL, 163, 13568, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob()
{
    static bool init_done = false;

    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob();
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }


}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {
    {"_collections_abc", 0, 31701},
    {"_compression", 1, 4161},
    {"_weakrefset", 2, 7687},
    {"abc", 3, 5738},
    {"ast", 4, 52269},
    {"base64", 5, 16418},
    {"bz2", 6, 11508},
    {"codecs", 7, 33851},
    {"collections", 8, -48055},
    {"collections.abc", 9, 31700},
    {"contextlib", 10, 19501},
    {"copyreg", 11, 4393},
    {"dis", 12, 15783},
    {"encodings", 13, -3851},
    {"encodings.aliases", 14, 6293},
    {"encodings.ascii", 15, 1846},
    {"encodings.base64_codec", 16, 2333},
    {"encodings.big5", 17, 1374},
    {"encodings.big5hkscs", 18, 1384},
    {"encodings.bz2_codec", 19, 3222},
    {"encodings.charmap", 20, 2856},
    {"encodings.cp037", 21, 2387},
    {"encodings.cp1006", 22, 2463},
    {"encodings.cp1026", 23, 2391},
    {"encodings.cp1125", 24, 8094},
    {"encodings.cp1140", 25, 2377},
    {"encodings.cp1250", 26, 2414},
    {"encodings.cp1251", 27, 2411},
    {"encodings.cp1252", 28, 2414},
    {"encodings.cp1253", 29, 2427},
    {"encodings.cp1254", 30, 2416},
    {"encodings.cp1255", 31, 2435},
    {"encodings.cp1256", 32, 2413},
    {"encodings.cp1257", 33, 2421},
    {"encodings.cp1258", 34, 2419},
    {"encodings.cp273", 35, 2373},
    {"encodings.cp424", 36, 2417},
    {"encodings.cp437", 37, 7811},
    {"encodings.cp500", 38, 2387},
    {"encodings.cp720", 39, 2484},
    {"encodings.cp737", 40, 8133},
    {"encodings.cp775", 41, 7841},
    {"encodings.cp850", 42, 7472},
    {"encodings.cp852", 43, 7849},
    {"encodings.cp855", 44, 8102},
    {"encodings.cp856", 45, 2449},
    {"encodings.cp857", 46, 7452},
    {"encodings.cp858", 47, 7442},
    {"encodings.cp860", 48, 7790},
    {"encodings.cp861", 49, 7805},
    {"encodings.cp862", 50, 7994},
    {"encodings.cp863", 51, 7805},
    {"encodings.cp864", 52, 7949},
    {"encodings.cp865", 53, 7805},
    {"encodings.cp866", 54, 8138},
    {"encodings.cp869", 55, 7829},
    {"encodings.cp874", 56, 2515},
    {"encodings.cp875", 57, 2384},
    {"encodings.cp932", 58, 1376},
    {"encodings.cp949", 59, 1376},
    {"encodings.cp950", 60, 1376},
    {"encodings.euc_jis_2004", 61, 1390},
    {"encodings.euc_jisx0213", 62, 1390},
    {"encodings.euc_jp", 63, 1378},
    {"encodings.euc_kr", 64, 1378},
    {"encodings.gb18030", 65, 1380},
    {"encodings.gb2312", 66, 1378},
    {"encodings.gbk", 67, 1372},
    {"encodings.hex_codec", 68, 2320},
    {"encodings.hp_roman8", 69, 2588},
    {"encodings.hz", 70, 1370},
    {"encodings.idna", 71, 5562},
    {"encodings.iso2022_jp", 72, 1391},
    {"encodings.iso2022_jp_1", 73, 1395},
    {"encodings.iso2022_jp_2", 74, 1395},
    {"encodings.iso2022_jp_2004", 75, 1401},
    {"encodings.iso2022_jp_3", 76, 1395},
    {"encodings.iso2022_jp_ext", 77, 1399},
    {"encodings.iso2022_kr", 78, 1391},
    {"encodings.iso8859_1", 79, 2386},
    {"encodings.iso8859_10", 80, 2391},
    {"encodings.iso8859_11", 81, 2485},
    {"encodings.iso8859_13", 82, 2394},
    {"encodings.iso8859_14", 83, 2412},
    {"encodings.iso8859_15", 84, 2391},
    {"encodings.iso8859_16", 85, 2393},
    {"encodings.iso8859_2", 86, 2386},
    {"encodings.iso8859_3", 87, 2393},
    {"encodings.iso8859_4", 88, 2386},
    {"encodings.iso8859_5", 89, 2387},
    {"encodings.iso8859_6", 90, 2431},
    {"encodings.iso8859_7", 91, 2394},
    {"encodings.iso8859_8", 92, 2425},
    {"encodings.iso8859_9", 93, 2386},
    {"encodings.johab", 94, 1376},
    {"encodings.koi8_r", 95, 2438},
    {"encodings.koi8_t", 96, 2349},
    {"encodings.koi8_u", 97, 2424},
    {"encodings.kz1048", 98, 2401},
    {"encodings.latin_1", 99, 1858},
    {"encodings.mac_arabic", 100, 7705},
    {"encodings.mac_croatian", 101, 2433},
    {"encodings.mac_cyrillic", 102, 2423},
    {"encodings.mac_farsi", 103, 2367},
    {"encodings.mac_greek", 104, 2407},
    {"encodings.mac_iceland", 105, 2426},
    {"encodings.mac_latin2", 106, 2567},
    {"encodings.mac_roman", 107, 2424},
    {"encodings.mac_romanian", 108, 2434},
    {"encodings.mac_turkish", 109, 2427},
    {"encodings.palmos", 110, 2414},
    {"encodings.ptcp154", 111, 2508},
    {"encodings.punycode", 112, 6272},
    {"encodings.quopri_codec", 113, 2359},
    {"encodings.raw_unicode_escape", 114, 1938},
    {"encodings.rot_13", 115, 2966},
    {"encodings.shift_jis", 116, 1384},
    {"encodings.shift_jis_2004", 117, 1394},
    {"encodings.shift_jisx0213", 118, 1394},
    {"encodings.tis_620", 119, 2476},
    {"encodings.undefined", 120, 2060},
    {"encodings.unicode_escape", 121, 1918},
    {"encodings.utf_16", 122, 4835},
    {"encodings.utf_16_be", 123, 1615},
    {"encodings.utf_16_le", 124, 1615},
    {"encodings.utf_32", 125, 4728},
    {"encodings.utf_32_be", 126, 1508},
    {"encodings.utf_32_le", 127, 1508},
    {"encodings.utf_7", 128, 1536},
    {"encodings.utf_8", 129, 1595},
    {"encodings.utf_8_sig", 130, 4507},
    {"encodings.uu_codec", 131, 3195},
    {"encodings.zlib_codec", 132, 3043},
    {"enum", 133, 25983},
    {"functools", 134, 28393},
    {"genericpath", 135, 3987},
    {"heapq", 136, 14003},
    {"importlib", 137, -3787},
    {"importlib._bootstrap", 138, 28931},
    {"importlib._bootstrap_external", 139, 45133},
    {"importlib.machinery", 140, 927},
    {"inspect", 141, 81435},
    {"io", 142, 3371},
    {"keyword", 143, 879},
    {"linecache", 144, 3991},
    {"locale", 145, 34644},
    {"opcode", 146, 5186},
    {"operator", 147, 13747},
    {"os", 148, 31609},
    {"posixpath", 149, 10292},
    {"quopri", 150, 5710},
    {"re", 151, 14325},
    {"reprlib", 152, 5270},
    {"sre_compile", 153, 15016},
    {"sre_constants", 154, 6280},
    {"sre_parse", 155, 21566},
    {"stat", 156, 4335},
    {"stringprep", 157, 9949},
    {"struct", 158, 269},
    {"threading", 159, 42141},
    {"token", 160, 2459},
    {"tokenize", 161, 17128},
    {"types", 162, 9184},
    {"warnings", 163, 13568},
    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    _loadBytesCodesBlob();

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}


