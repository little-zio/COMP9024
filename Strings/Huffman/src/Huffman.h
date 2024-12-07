#ifndef HUFFMAN_H
#define HUFFMAN_H


struct HuffmanInfo;

struct HuffmanInfo *CreateHuffmanInfoFromText(char *text);

/*
    The caller is responsible for releasing the heap space.
 */
char *HuffmanEncode(struct HuffmanInfo *pHuffmanInfo, char *text);

/*
    The caller is responsible for releasing the heap space.
 */
char *HuffmanDecode(struct HuffmanInfo *pHuffmanInfo, char *encodedStr);


void ReleaseHuffmanInfo(struct HuffmanInfo *pHuffmanInfo);


struct BiTreeNode *GetHuffmanTree(struct HuffmanInfo *pHuffmanInfo);

#endif
