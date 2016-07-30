//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LinkPresentation/LPComponentView.h>

@class LPCaptionBarPresentationProperties, LPCaptionBarStyle, LPVerticalTextStackView, LPiTunesPlayButtonView, NSString, UIView;
@protocol LPTextStyleable;

__attribute__((visibility("hidden")))
@interface LPCaptionBarView : LPComponentView
{
    LPCaptionBarStyle *_style;
    LPCaptionBarPresentationProperties *_presentationProperties;
    UIView *_leftIconView;
    UIView *_rightIconView;
    LPiTunesPlayButtonView *_playButton;
    LPComponentView<LPTextStyleable> *_aboveTopCaptionView;
    LPComponentView<LPTextStyleable> *_topCaptionView;
    LPComponentView<LPTextStyleable> *_bottomCaptionView;
    LPComponentView<LPTextStyleable> *_belowBottomCaptionView;
    LPVerticalTextStackView *_textStackView;
    _Bool _hasEverBuilt;
    _Bool _useProgressSpinner;
    NSString *_storeIdentifierForPlayback;
}

@property(copy, nonatomic) NSString *storeIdentifierForPlayback; // @synthesize storeIdentifierForPlayback=_storeIdentifierForPlayback;
@property(nonatomic) _Bool useProgressSpinner; // @synthesize useProgressSpinner=_useProgressSpinner;
- (void).cxx_destruct;
- (void)_buildViewsForCaptionBarIfNeeded;
- (struct CGSize)_layoutCaptionBarForSize:(struct CGSize)arg1 applyingLayout:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutComponentView;
- (id)_createIndeterminateProgressIndicator;
- (id)bottomCaptionView;
- (id)topCaptionView;
- (id)progressIndicatorView;
- (id)initWithStyle:(id)arg1 presentationProperties:(id)arg2;
- (id)init;

@end

