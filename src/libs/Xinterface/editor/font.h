#ifndef _GI_EDITOR_FONT_H
#define _GI_EDITOR_FONT_H

#include "../inode.h"

class GIEditor;

class GIFont
{
  public:
    GIFont(GIFont &&) = delete;
    GIFont(const GIFont &) = delete;
    GIFont(GIEditor *pEditor, const char *pcFontName);
    ~GIFont();

    void Release() const;

    void Print(float x, float y, const char *pcFormat, ...) const;
    void PrintIntoWindow(const char *pcFormat, ...);

    void SetHeight(float fHeight);
    float GetHeight() const
    {
        return m_fHeight;
    }

    void SetColor(uint32_t dwColor);
    void SetBackColor(uint32_t dwColor);

  protected:
    GIEditor *m_pEditor;
    long m_nFontID;

    uint32_t m_dwColor;
    uint32_t m_dwBackColor;

    float m_fScale;
    float m_fHeight;
};

#endif
