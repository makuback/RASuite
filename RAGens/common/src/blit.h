#ifndef _BLIT_H_
#define _BLIT_H_

#ifdef __cplusplus
extern "C" {
#endif

void Blit_X1(unsigned char *Dest, int pitch, int x, int y, int offset);
void Blit_X2(unsigned char *Dest, int pitch, int x, int y, int offset);
void Blit_X2_Int(unsigned char *Dest, int pitch, int x, int y, int offset);
void Blit_Scanline(unsigned char *Dest, int pitch, int x, int y, int offset);
void Blit_Scanline_Int(unsigned char *Dest, int pitch, int x, int y, int offset);

void Blit_X1_MMX(unsigned char *Dest, int pitch, int x, int y, int offset);
void Blit_X2_MMX(unsigned char *Dest, int pitch, int x, int y, int offset);
void Blit_X2_Int_MMX(unsigned char *Dest, int pitch, int x, int y, int offset);
void Blit_Scanline_MMX(unsigned char *Dest, int pitch, int x, int y, int offset);
void Blit_Scanline_Int_MMX(unsigned char *Dest, int pitch, int x, int y, int offset);
void Blit_Scanline_50_MMX(unsigned char *Dest, int pitch, int x, int y, int offset);
void Blit_Scanline_50_Int_MMX(unsigned char *Dest, int pitch, int x, int y, int offset);
void Blit_Scanline_25_MMX(unsigned char *Dest, int pitch, int x, int y, int offset);
void Blit_Scanline_25_Int_MMX(unsigned char *Dest, int pitch, int x, int y, int offset);

void Blit_2xSAI_MMX(unsigned char *Dest, int pitch, int x, int y, int offset);

#ifdef __cplusplus
};
#endif

#endif