//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CUIStyleEffectConfiguration, NSLayoutManagerTextBlockRowArrayCache, NSLock, NSMutableArray, NSParagraphArbitrator, NSRunStorage, NSTextContainer;

@interface NSExtraLMData : NSObject
{
    NSRunStorage *_attachmentSizesRun;
    struct CGRect _currentAttachmentRect;
    unsigned long long _currentAttachmentIndex;
    NSLock *_fillHoleLock;
    NSRunStorage *_fragmentRunsExtras;
    id _temporaryAttributes;
    NSTextContainer *_firstTextContainer;
    struct __CFDictionary *_textContainerIndexes;
    struct __CFDictionary *_textContainerGlyphIndexes;
    long long _typesetterBehavior;
    struct CGRect _cachedFontBounds;
    double _cachedUnderlineThickness;
    double _cachedUnderlinePosition;
    double _cachedUnderlineAdjustment;
    struct _NSRange _cachedUnderlineRange;
    NSMutableArray *_blockRunsArray;
    double _hyphenationFactor;
    NSMutableArray *_insertionPointCache;
    struct _NSGlyphTree _glyphTree;
    struct _NSLayoutTree _layoutTree;
    struct _NSRange _firstTextViewVisibleCharRange;
    struct CGSize _firstTextViewVisibleOffset;
    struct _NSRange _lastInvalidatedCharRange;
    double _lastInvalidatedLongitudinalPosition;
    NSTextContainer *_lastInvalidatedTextContainer;
    NSLayoutManagerTextBlockRowArrayCache *_rowArrayCache;
    NSParagraphArbitrator *_paragraphArbitrator;
    CUIStyleEffectConfiguration *_styleEffectConfig;
    struct __lmFlags2 {
        unsigned int glyphCause:6;
        unsigned int layoutCause:6;
        unsigned int delegateRespondsToTempAttrs:1;
        unsigned int processingFirstTextViewVisible:1;
        unsigned int temporarySpacingChange:1;
        unsigned int alwaysDrawsActive:1;
        unsigned int usesOldShowPackedGlyphs:1;
        unsigned int drawsUnderlinesLikeWebKit:1;
        unsigned int drawsDebugBaselines:1;
        unsigned int mirrorsTextAlignment:1;
        unsigned int reserved:12;
    } _lmFlags2;
}

@end

