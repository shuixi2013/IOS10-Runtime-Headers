//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIFoundation/NSATSTypesetter.h>

@interface NSSingleLineTypesetter : NSATSTypesetter
{
    double _lineWidth;
    struct _NSRange _currentBufferRange;
    unsigned short *_glyphs;
    long long *_props;
    unsigned long long *_charIndexes;
    struct {
        unsigned int _usesScreenFonts:1;
        unsigned int _syncAlignmentToDirection:1;
        unsigned int _mirrorsTextAlignment:1;
        unsigned int _reserved:29;
    } _slFlags;
}

+ (_Bool)_validateAttributes:(id)arg1 measuringOnly:(_Bool)arg2;
+ (void)initialize;
+ (id)singleLineTypesetter;
- (void)setBidiLevels:(const char *)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)setAttachmentSize:(struct CGSize)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)setLocation:(struct CGPoint)arg1 withAdvancements:(const double *)arg2 forStartOfGlyphRange:(struct _NSRange)arg3;
- (void)setDrawsOutsideLineFragment:(_Bool)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)setNotShownAttribute:(_Bool)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)deleteGlyphsInRange:(struct _NSRange)arg1;
- (void)insertGlyph:(unsigned int)arg1 atGlyphIndex:(unsigned long long)arg2 characterIndex:(unsigned long long)arg3;
- (void)substituteGlyphsInRange:(struct _NSRange)arg1 withGlyphs:(unsigned int *)arg2;
- (void)setLineFragmentRect:(struct CGRect)arg1 forGlyphRange:(struct _NSRange)arg2 usedRect:(struct CGRect)arg3 baselineOffset:(double)arg4;
- (id)substituteFontForFont:(id)arg1;
- (void)getLineFragmentRect:(struct CGRect *)arg1 usedRect:(struct CGRect *)arg2 remainingRect:(struct CGRect *)arg3 forStartingGlyphAtIndex:(unsigned long long)arg4 proposedRect:(struct CGRect)arg5 lineSpacing:(double)arg6 paragraphSpacingBefore:(double)arg7 paragraphSpacingAfter:(double)arg8;
- (unsigned long long)getGlyphsInRange:(struct _NSRange)arg1 glyphs:(unsigned short *)arg2 properties:(long long *)arg3 characterIndexes:(unsigned long long *)arg4 bidiLevels:(char *)arg5;
- (struct _NSRange)glyphRangeForCharacterRange:(struct _NSRange)arg1 actualCharacterRange:(struct _NSRange *)arg2;
- (struct _NSRange)characterRangeForGlyphRange:(struct _NSRange)arg1 actualGlyphRange:(struct _NSRange *)arg2;
- (id)attributedString;
- (unsigned long long)layoutOptions;
- (void)setIntAttribute:(long long)arg1 value:(long long)arg2 forGlyphAtIndex:(unsigned long long)arg3;
- (void)insertGlyphs:(const unsigned int *)arg1 length:(unsigned long long)arg2 forStartingGlyphAtIndex:(unsigned long long)arg3 characterIndex:(unsigned long long)arg4;
- (void)setGlyphs:(const unsigned short *)arg1 properties:(const long long *)arg2 characterIndexes:(const unsigned long long *)arg3 font:(id)arg4 forGlyphRange:(struct _NSRange)arg5;
- (id)createRenderingContextForCharacterRange:(struct _NSRange)arg1 typesetterBehavior:(long long)arg2 usesScreenFonts:(_Bool)arg3 hasStrongRight:(_Bool)arg4 syncDirection:(_Bool)arg5 mirrorsTextAlignment:(_Bool)arg6 maximumWidth:(double)arg7;
- (id)createRenderingContextForCharacterRange:(struct _NSRange)arg1 typesetterBehavior:(long long)arg2 usesScreenFonts:(_Bool)arg3 hasStrongRight:(_Bool)arg4 maximumWidth:(double)arg5;
- (id)init;
- (_Bool)synchronizesAlignmentToDirection;
- (_Bool)_mirrorsTextAlignment;
- (_Bool)_allowsEllipsisGlyphSubstitution;
- (_Bool)_usesScreenFonts;
- (void)done;

@end

