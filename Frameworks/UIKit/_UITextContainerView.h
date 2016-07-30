//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/NSUITextViewCommonMethods-Protocol.h>

@class NSDictionary, NSLayoutManager, NSString, NSTextContainer, NSTextStorage;
@protocol _UITextContainerViewDelegate;

__attribute__((visibility("hidden")))
@interface _UITextContainerView : UIView <NSUITextViewCommonMethods>
{
    struct UIEdgeInsets _textContainerInset;
    struct CGPoint _textContainerOrigin;
    struct CGSize _minSize;
    struct CGSize _maxSize;
    NSTextContainer *_textContainer;
    NSDictionary *_linkTextAttributes;
    unsigned long long _invalidationSeqNo;
    struct {
        unsigned int textContainerOriginInvalid:1;
        unsigned int verticalLayout:2;
        unsigned int horizontallyResizable:1;
        unsigned int verticallyResizable:1;
    } _tcvFlags;
    id <_UITextContainerViewDelegate> _delegate;
}

+ (Class)layerClass;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) struct CGSize minSize; // @synthesize minSize=_minSize;
@property(nonatomic) __weak id <_UITextContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NSTextContainer *textContainer; // @synthesize textContainer=_textContainer;
- (void).cxx_destruct;
@property(nonatomic) _Bool usesTiledViews;
- (struct CGRect)visibleRect;
@property(readonly, copy) NSString *description;
@property(nonatomic) struct _NSRange markedRange;
- (void)setLayoutOrientation:(long long)arg1;
@property(readonly, nonatomic) long long layoutOrientation;
- (id)layoutManager:(id)arg1 effectiveCUICatalogForTextEffect:(id)arg2;
- (struct _NSRange)_extendedGlyphRangeForRange:(struct _NSRange)arg1 maxGlyphIndex:(unsigned long long)arg2 drawingToScreen:(_Bool)arg3;
- (_Bool)_ensureLayoutCompleteForRect:(struct CGRect)arg1 withExtension:(_Bool)arg2;
- (_Bool)_ensureLayoutCompleteForRect:(struct CGRect)arg1 withExtensionFactor:(double)arg2 minimumExtensionDistance:(double)arg3 repetitions:(unsigned long long)arg4;
- (void)_ensureLayoutCompleteToEndOfCharacterRange:(struct _NSRange)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 avoidAdditionalLayout:(_Bool)arg2;
- (void)updateInsertionPointStateAndRestartTimer:(_Bool)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_didScroll;
- (void)sizeToFit;
- (void)_sizeToConstrainedContainerUsedRect;
@property(nonatomic, getter=isVerticallyResizable) _Bool verticallyResizable;
@property(nonatomic, getter=isHorizontallyResizable) _Bool horizontallyResizable;
- (void)setConstrainedFrameSize:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)_setFrameOrBounds:(struct CGRect)arg1 oldRect:(struct CGRect)arg2 settingAction:(CDUnknownBlockType)arg3;
- (void)_ensureMinAndMaxSizesConsistentWithBounds;
- (void)invalidateTextContainerOrigin;
- (struct CGPoint)textContainerOrigin;
@property(nonatomic) struct UIEdgeInsets textContainerInset;
- (void)tintColorDidChange;
- (id)linkAttributesForLink:(id)arg1 forCharacterAtIndex:(unsigned long long)arg2;
- (id)linkTextAttributes;
@property(readonly, nonatomic) NSTextStorage *textStorage;
@property(readonly, nonatomic) NSLayoutManager *layoutManager;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

