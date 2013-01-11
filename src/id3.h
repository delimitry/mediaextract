#ifndef MEDIAEXTRACT_ID3_H__
#define MEDIAEXTRACT_ID3_H__

#include "mediaextract.h"

#define ID3_MASK    MAGIC("\xff\xff\xff\x00")
#define ID3v1_MAGIC MAGIC("TAG\0")
#define ID3v2_MAGIC MAGIC("ID3\0")

#define IS_ID3v1_MAGIC(hdr) ((MAGIC(hdr) & ID3_MASK) == ID3v1_MAGIC)
#define IS_ID3v2_MAGIC(hdr) ((MAGIC(hdr) & ID3_MASK) == ID3v2_MAGIC)
#define ID3v1_TAG_SIZE 128
#define ID3v2_HEADER_SIZE 10
#define ID3v2_FOOTER_SIZE 10

int id3v1_istag(const uint8_t *data, size_t input_len, size_t *lengthptr);
int id3v2_istag(const uint8_t *data, size_t input_len, int appended, size_t *lengthptr);

#endif /* MEDIAEXTRACT_ID3_H__ */
