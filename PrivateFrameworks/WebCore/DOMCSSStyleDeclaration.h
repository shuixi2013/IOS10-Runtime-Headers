//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebCore/DOMObject.h>

@class DOMCSSRule, NSString;

@interface DOMCSSStyleDeclaration : DOMObject
{
}

- (_Bool)isPropertyImplicit:(id)arg1;
- (id)getPropertyShorthand:(id)arg1;
- (id)item:(unsigned int)arg1;
- (void)setProperty:(id)arg1:(id)arg2:(id)arg3;
- (void)setProperty:(id)arg1 value:(id)arg2 priority:(id)arg3;
- (id)getPropertyPriority:(id)arg1;
- (id)removeProperty:(id)arg1;
- (id)getPropertyCSSValue:(id)arg1;
- (id)getPropertyValue:(id)arg1;
@property(readonly) DOMCSSRule *parentRule;
@property(readonly) unsigned int length;
@property(copy) NSString *cssText;
- (void)dealloc;
- (void)setZIndex:(id)arg1;
- (id)zIndex;
- (void)setWordSpacing:(id)arg1;
- (id)wordSpacing;
- (void)setWidth:(id)arg1;
- (id)width;
- (void)setWidows:(id)arg1;
- (id)widows;
- (void)setWhiteSpace:(id)arg1;
- (id)whiteSpace;
- (void)setVolume:(id)arg1;
- (id)volume;
- (void)setVoiceFamily:(id)arg1;
- (id)voiceFamily;
- (void)setVisibility:(id)arg1;
- (id)visibility;
- (void)setVerticalAlign:(id)arg1;
- (id)verticalAlign;
- (void)setUnicodeBidi:(id)arg1;
- (id)unicodeBidi;
- (void)setTop:(id)arg1;
- (id)top;
- (void)setTextTransform:(id)arg1;
- (id)textTransform;
- (void)setTextShadow:(id)arg1;
- (id)textShadow;
- (void)setTextIndent:(id)arg1;
- (id)textIndent;
- (void)setTextDecoration:(id)arg1;
- (id)textDecoration;
- (void)setTextAlign:(id)arg1;
- (id)textAlign;
- (void)setTableLayout:(id)arg1;
- (id)tableLayout;
- (void)setStress:(id)arg1;
- (id)stress;
- (void)setSpeechRate:(id)arg1;
- (id)speechRate;
- (void)setSpeakPunctuation:(id)arg1;
- (id)speakPunctuation;
- (void)setSpeakNumeral:(id)arg1;
- (id)speakNumeral;
- (void)setSpeakHeader:(id)arg1;
- (id)speakHeader;
- (void)setSpeak:(id)arg1;
- (id)speak;
- (void)setSize:(id)arg1;
- (id)size;
- (void)setRight:(id)arg1;
- (id)right;
- (void)setRichness:(id)arg1;
- (id)richness;
- (void)setQuotes:(id)arg1;
- (id)quotes;
- (void)setPosition:(id)arg1;
- (id)position;
- (void)setPlayDuring:(id)arg1;
- (id)playDuring;
- (void)setPitchRange:(id)arg1;
- (id)pitchRange;
- (void)setPitch:(id)arg1;
- (id)pitch;
- (void)setPauseBefore:(id)arg1;
- (id)pauseBefore;
- (void)setPauseAfter:(id)arg1;
- (id)pauseAfter;
- (void)setPause:(id)arg1;
- (id)pause;
- (void)setPageBreakInside:(id)arg1;
- (id)pageBreakInside;
- (void)setPageBreakBefore:(id)arg1;
- (id)pageBreakBefore;
- (void)setPageBreakAfter:(id)arg1;
- (id)pageBreakAfter;
- (void)setPage:(id)arg1;
- (id)page;
- (void)setPaddingLeft:(id)arg1;
- (id)paddingLeft;
- (void)setPaddingBottom:(id)arg1;
- (id)paddingBottom;
- (void)setPaddingRight:(id)arg1;
- (id)paddingRight;
- (void)setPaddingTop:(id)arg1;
- (id)paddingTop;
- (void)setPadding:(id)arg1;
- (id)padding;
- (void)setOverflow:(id)arg1;
- (id)overflow;
- (void)setOutlineWidth:(id)arg1;
- (id)outlineWidth;
- (void)setOutlineStyle:(id)arg1;
- (id)outlineStyle;
- (void)setOutlineColor:(id)arg1;
- (id)outlineColor;
- (void)setOutline:(id)arg1;
- (id)outline;
- (void)setOrphans:(id)arg1;
- (id)orphans;
- (void)setMinWidth:(id)arg1;
- (id)minWidth;
- (void)setMinHeight:(id)arg1;
- (id)minHeight;
- (void)setMaxWidth:(id)arg1;
- (id)maxWidth;
- (void)setMaxHeight:(id)arg1;
- (id)maxHeight;
- (void)setMarks:(id)arg1;
- (id)marks;
- (void)setMarkerOffset:(id)arg1;
- (id)markerOffset;
- (void)setMarginLeft:(id)arg1;
- (id)marginLeft;
- (void)setMarginBottom:(id)arg1;
- (id)marginBottom;
- (void)setMarginRight:(id)arg1;
- (id)marginRight;
- (void)setMarginTop:(id)arg1;
- (id)marginTop;
- (void)setMargin:(id)arg1;
- (id)margin;
- (void)setListStyleType:(id)arg1;
- (id)listStyleType;
- (void)setListStylePosition:(id)arg1;
- (id)listStylePosition;
- (void)setListStyleImage:(id)arg1;
- (id)listStyleImage;
- (void)setListStyle:(id)arg1;
- (id)listStyle;
- (void)setLineHeight:(id)arg1;
- (id)lineHeight;
- (void)setLetterSpacing:(id)arg1;
- (id)letterSpacing;
- (void)setLeft:(id)arg1;
- (id)left;
- (void)setHeight:(id)arg1;
- (id)height;
- (void)setFontWeight:(id)arg1;
- (id)fontWeight;
- (void)setFontVariant:(id)arg1;
- (id)fontVariant;
- (void)setFontStyle:(id)arg1;
- (id)fontStyle;
- (void)setFontStretch:(id)arg1;
- (id)fontStretch;
- (void)_setFontSizeDelta:(id)arg1;
- (id)_fontSizeDelta;
- (void)setFontSizeAdjust:(id)arg1;
- (id)fontSizeAdjust;
- (void)setFontSize:(id)arg1;
- (id)fontSize;
- (void)setFontFamily:(id)arg1;
- (id)fontFamily;
- (void)setFont:(id)arg1;
- (id)font;
- (void)setCssFloat:(id)arg1;
- (id)cssFloat;
- (void)setEmptyCells:(id)arg1;
- (id)emptyCells;
- (void)setElevation:(id)arg1;
- (id)elevation;
- (void)setDisplay:(id)arg1;
- (id)display;
- (void)setDirection:(id)arg1;
- (id)direction;
- (void)setCursor:(id)arg1;
- (id)cursor;
- (void)setCueBefore:(id)arg1;
- (id)cueBefore;
- (void)setCueAfter:(id)arg1;
- (id)cueAfter;
- (void)setCue:(id)arg1;
- (id)cue;
- (void)setCounterReset:(id)arg1;
- (id)counterReset;
- (void)setCounterIncrement:(id)arg1;
- (id)counterIncrement;
- (void)setContent:(id)arg1;
- (id)content;
- (void)setColor:(id)arg1;
- (id)color;
- (void)setClip:(id)arg1;
- (id)clip;
- (void)setClear:(id)arg1;
- (id)clear;
- (void)setCaptionSide:(id)arg1;
- (id)captionSide;
- (void)setBottom:(id)arg1;
- (id)bottom;
- (void)setBorderWidth:(id)arg1;
- (id)borderWidth;
- (void)setBorderLeftWidth:(id)arg1;
- (id)borderLeftWidth;
- (void)setBorderBottomWidth:(id)arg1;
- (id)borderBottomWidth;
- (void)setBorderRightWidth:(id)arg1;
- (id)borderRightWidth;
- (void)setBorderTopWidth:(id)arg1;
- (id)borderTopWidth;
- (void)setBorderLeftStyle:(id)arg1;
- (id)borderLeftStyle;
- (void)setBorderBottomStyle:(id)arg1;
- (id)borderBottomStyle;
- (void)setBorderRightStyle:(id)arg1;
- (id)borderRightStyle;
- (void)setBorderTopStyle:(id)arg1;
- (id)borderTopStyle;
- (void)setBorderLeftColor:(id)arg1;
- (id)borderLeftColor;
- (void)setBorderBottomColor:(id)arg1;
- (id)borderBottomColor;
- (void)setBorderRightColor:(id)arg1;
- (id)borderRightColor;
- (void)setBorderTopColor:(id)arg1;
- (id)borderTopColor;
- (void)setBorderLeft:(id)arg1;
- (id)borderLeft;
- (void)setBorderBottom:(id)arg1;
- (id)borderBottom;
- (void)setBorderRight:(id)arg1;
- (id)borderRight;
- (void)setBorderTop:(id)arg1;
- (id)borderTop;
- (void)setBorderStyle:(id)arg1;
- (id)borderStyle;
- (void)setBorderSpacing:(id)arg1;
- (id)borderSpacing;
- (void)setBorderColor:(id)arg1;
- (id)borderColor;
- (void)setBorderCollapse:(id)arg1;
- (id)borderCollapse;
- (void)setBorder:(id)arg1;
- (id)border;
- (void)setBackgroundRepeat:(id)arg1;
- (id)backgroundRepeat;
- (void)setBackgroundPosition:(id)arg1;
- (id)backgroundPosition;
- (void)setBackgroundImage:(id)arg1;
- (id)backgroundImage;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundAttachment:(id)arg1;
- (id)backgroundAttachment;
- (void)setBackground:(id)arg1;
- (id)background;
- (void)setAzimuth:(id)arg1;
- (id)azimuth;

@end

