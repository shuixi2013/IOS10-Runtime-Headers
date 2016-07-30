//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LinkPresentation/LPComponentView.h>

#import <LinkPresentation/UIGestureRecognizerDelegate-Protocol.h>

@class LPImage, LPImageViewStyle, LPVideo, LPVideoViewStyle, NSString, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface LPVideoView : LPComponentView <UIGestureRecognizerDelegate>
{
    LPVideo *_video;
    LPVideoViewStyle *_style;
    LPImage *_posterFrame;
    LPImageViewStyle *_posterFrameStyle;
    UIView *_playButtonContainerView;
    UIView *_playButtonView;
    UIImageView *_muteButtonView;
    UIView *_videoPlaceholderView;
    UIView *_videoView;
    UIView *_visualEffectView;
    UIView *_pulsingLoadView;
    _Bool _playing;
    _Bool _hasBuilt;
    _Bool _wasPlayingWhenUnparented;
    _Bool _disablePlayback;
}

@property(readonly, nonatomic) LPVideo *video; // @synthesize video=_video;
- (void).cxx_destruct;
- (void)_muteButtonTapRecognized:(id)arg1;
- (void)_muteButtonHighlightLongPressRecognized:(id)arg1;
- (void)tapRecognized:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_buildVideoPlaceholderView;
- (id)_createPosterFrameView;
@property(nonatomic, getter=isMuted) _Bool muted;
@property(readonly, nonatomic) _Bool shouldShowMuteButton;
- (void)showMuteButton;
- (void)playingStateDidChange:(_Bool)arg1;
- (id)createVideoPlayerView;
- (void)setPlaying:(_Bool)arg1;
- (void)_swapVideoPlaceholderForVideo;
- (id)_createPulsingLoadIndicator;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutComponentView;
- (_Bool)shouldAutoPlay;
- (void)componentViewWillMoveToWindow:(id)arg1;
- (id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 disablePlayback:(_Bool)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

