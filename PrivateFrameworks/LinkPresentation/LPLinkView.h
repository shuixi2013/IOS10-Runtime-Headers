//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <LinkPresentation/LPTapToLoadViewDelegate-Protocol.h>
#import <LinkPresentation/LPThemeClient-Protocol.h>
#import <LinkPresentation/UIGestureRecognizerDelegate-Protocol.h>

@class LPCaptionBarPresentationProperties, LPCaptionBarView, LPComponentView, LPImage, LPLinkMetadata, LPMetadataProvider, LPTextView, LPTheme, LPVideo, NSMutableArray, NSString, NSURL, UIColor;
@protocol LPLinkViewDelegate;

@interface LPLinkView : UIView <UIGestureRecognizerDelegate, LPTapToLoadViewDelegate, LPThemeClient>
{
    LPMetadataProvider *_pendingMetadataProvider;
    _Bool _mayReceiveAdditionalMetadata;
    _Bool _usesComputedPresentationProperties;
    LPTheme *_theme;
    NSMutableArray *_tapGestureRecognizers;
    NSMutableArray *_highlightGestureRecognizers;
    UIView *_highlightView;
    _Bool _isPreliminary;
    long long _style;
    LPCaptionBarPresentationProperties *_captionBar;
    LPCaptionBarPresentationProperties *_mediaTopCaptionBar;
    LPCaptionBarPresentationProperties *_mediaBottomCaptionBar;
    NSString *_quotedText;
    LPImage *_image;
    LPVideo *_video;
    UIColor *_backgroundColor;
    NSString *_storeIdentifier;
    _Bool _supportsiTunesPlayback;
    UIView *_contentView;
    UIView *_animationView;
    LPCaptionBarView *_captionBarView;
    LPComponentView *_mediaView;
    LPCaptionBarView *_mediaTopCaptionBarView;
    LPCaptionBarView *_mediaBottomCaptionBarView;
    LPTextView *_quoteView;
    LPCaptionBarView *_oldCaptionBar;
    _Bool _hasEverBuilt;
    _Bool _needsRebuild;
    _Bool _usesDeferredLayout;
    _Bool _shouldAnimateDuringNextBuild;
    _Bool _disableAnimations;
    _Bool _disableTapGesture;
    _Bool _disablePlayback;
    _Bool _allowsTapToLoad;
    _Bool _forceFlexibleWidth;
    long long _animationOrigin;
    id <LPLinkViewDelegate> _delegate;
    LPLinkMetadata *_metadata;
    NSURL *_URL;
    struct UIEdgeInsets _contentInset;
}

@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) LPLinkMetadata *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) __weak id <LPLinkViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=_setForceFlexibleWidth:) _Bool _forceFlexibleWidth; // @synthesize _forceFlexibleWidth;
@property(nonatomic, setter=_setUsesDeferredLayout:) _Bool _usesDeferredLayout; // @synthesize _usesDeferredLayout;
@property(nonatomic, setter=_setAllowsTapToLoad:) _Bool _allowsTapToLoad; // @synthesize _allowsTapToLoad;
@property(nonatomic, setter=_setAnimationOrigin:) long long _animationOrigin; // @synthesize _animationOrigin;
@property(nonatomic, setter=_setDisablePlayback:) _Bool _disablePlayback; // @synthesize _disablePlayback;
@property(nonatomic, setter=_setDisableTapGesture:) _Bool _disableTapGesture; // @synthesize _disableTapGesture;
@property(nonatomic, setter=_setDisableAnimations:) _Bool _disableAnimations; // @synthesize _disableAnimations;
- (void).cxx_destruct;
- (void)_setupInteraction;
- (void)tapToLoadViewWasTapped:(id)arg1;
- (void)_tapRecognized:(id)arg1;
- (void)_highlightLongPressRecognized:(id)arg1;
- (void)_didScroll;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_addHighlightRecognizersToView:(id)arg1;
- (void)_addTapRecognizerToView:(id)arg1;
- (void)_installTapGestureRecognizers;
- (struct CGSize)_layoutLinkViewForSize:(struct CGSize)arg1 applyingLayout:(_Bool)arg2;
- (double)_aspectRatioSnappedToSquareIfNeeded:(struct CGSize)arg1;
- (id)_createQuotedTextView;
- (id)_createMediaView;
- (id)_createTapToLoadView;
- (id)_createMediaBottomCaptionBarView;
- (id)_createMediaTopCaptionBarView;
- (id)_createCaptionBar;
- (void)_performDeferredLayout;
- (void)_invalidateLayout;
- (void)_layoutLinkView;
- (void)_rebuildSubviewsWithAnimation:(_Bool)arg1;
- (void)animateFromFrame:(struct CGRect)arg1 toFrame:(struct CGRect)arg2;
- (void)_animateInViews;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_animateOutAndRemoveViews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
@property(readonly, copy, nonatomic) NSString *_storeIdentifier;
- (void)_setPresentationProperties:(id)arg1;
- (void)_computePresentationPropertiesFromMetadata;
- (void)_setMetadata:(id)arg1 isFinal:(_Bool)arg2;
- (void)themeDidChange;
- (void)_setupView;
- (void)_fetchMetadata;
- (id)initWithPresentationProperties:(id)arg1 URL:(id)arg2;
- (id)initWithPresentationProperties:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithMetadataLoadedFromURL:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

