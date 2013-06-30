/****************************************************************************
 Copyright (c) 2013 cocos2d-x.org
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#include "UITextArea.h"

NS_CC_EXT_BEGIN

UITextArea::UITextArea()
{
    
}

UITextArea::~UITextArea()
{
    
}

UITextArea* UITextArea::create()
{
    UITextArea* widget = new UITextArea();
    if (widget && widget->init())
    {
        return widget;
    }
    CC_SAFE_DELETE(widget);
    return NULL;
}

void UITextArea::initNodes()
{
    UIWidget::initNodes();
    m_pRenderLabel = cocos2d::CCLabelTTF::create();
    this->m_pCCRenderNode->addChild(m_pRenderLabel);
}

void UITextArea::setText(const char* text)
{
    m_pRenderLabel->setString(text);
}

void UITextArea::setTextAreaSize(const cocos2d::CCSize &size)
{
    m_pRenderLabel->setDimensions(size);
}

void UITextArea::setTextHorizontalAlignment(cocos2d::CCTextAlignment alignment)
{
    m_pRenderLabel->setHorizontalAlignment(alignment);
}

void UITextArea::setTextVerticalAlignment(cocos2d::CCVerticalTextAlignment alignment)
{
    m_pRenderLabel->setVerticalAlignment(alignment);
}

int UITextArea::getStringLength()
{
    const char* str = m_pRenderLabel->getString();
    return strlen(str);
}

const char* UITextArea::getStringValue()
{
    return m_pRenderLabel->getString();
}

void UITextArea::setTextColor(int r,int g,int b)
{
    m_pRenderLabel->setColor(cocos2d::ccc3(r, g, b));
}

void UITextArea::setFontSize(int size)
{
    m_pRenderLabel->setFontSize(size);
}

void UITextArea::setFontName(const char *fontName)
{
    m_pRenderLabel->setFontName(fontName);
}

void UITextArea::setFlipX(bool flipX)
{
    m_pRenderLabel->setFlipX(flipX);
}

void UITextArea::setFlipY(bool flipY)
{
    m_pRenderLabel->setFlipY(flipY);
}

CCNode* UITextArea::getValidNode()
{
    return this->m_pRenderLabel;
}

void UITextArea::setAnchorPoint(const cocos2d::CCPoint &pt)
{
    UIWidget::setAnchorPoint(pt);
    this->m_pRenderLabel->setAnchorPoint(pt);
}

NS_CC_EXT_END