//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <UIKit/UIKBCacheableView-Protocol.h>

@class NSString, UIKBThemedView, UILabel;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateBarCell : UICollectionViewCell <UIKBCacheableView>
{
    _Bool _beginsFirstPage;
    _Bool _endsLastPage;
    _Bool _isAtLeftEdge;
    _Bool _isAutocorrectionCandidate;
    UIKBThemedView *_themedView;
    UILabel *_label;
    UILabel *_annotationLabel;
    NSString *_candidateText;
    NSString *_annotationText;
}

+ (_Bool)highlightAffectsBackground;
+ (double)widthForCandidate:(id)arg1;
+ (_Bool)drawsSideBorders;
+ (struct UIEdgeInsets)cacheInsets;
+ (id)textColorWithHighlight:(_Bool)arg1 whiteText:(_Bool)arg2;
+ (id)annotationFont;
+ (id)font;
+ (id)reuseIdentifier;
@property(nonatomic) _Bool isAutocorrectionCandidate; // @synthesize isAutocorrectionCandidate=_isAutocorrectionCandidate;
@property(nonatomic) _Bool isAtLeftEdge; // @synthesize isAtLeftEdge=_isAtLeftEdge;
@property(nonatomic) _Bool endsLastPage; // @synthesize endsLastPage=_endsLastPage;
@property(nonatomic) _Bool beginsFirstPage; // @synthesize beginsFirstPage=_beginsFirstPage;
@property(copy, nonatomic) NSString *annotationText; // @synthesize annotationText=_annotationText;
@property(copy, nonatomic) NSString *candidateText; // @synthesize candidateText=_candidateText;
@property(retain, nonatomic) UILabel *annotationLabel; // @synthesize annotationLabel=_annotationLabel;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIKBThemedView *themedView; // @synthesize themedView=_themedView;
- (void)drawRect:(struct CGRect)arg1;
@property(readonly, nonatomic) _Bool keepNonPersistent;
@property(readonly, nonatomic) double cachedWidth;
@property(readonly, nonatomic) _Bool cacheDeferable;
- (void)displayLayer:(id)arg1;
- (id)cacheKeysForRenderFlags:(id)arg1;
@property(readonly, nonatomic) NSString *cacheKey;
- (void)updateIsAtLeftEdgeState;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)updateLabels;
- (void)_setRenderConfig:(id)arg1;
- (void)didMoveToWindow;
- (void)setCandidate:(id)arg1;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

