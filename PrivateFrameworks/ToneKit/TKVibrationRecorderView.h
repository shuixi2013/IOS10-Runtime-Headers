//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ToneKit/TKVibrationRecorderTouchSurfaceDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, TKVibrationRecorderProgressView, TKVibrationRecorderTouchSurface, UILabel, UIToolbar;
@protocol NSCopying, TKVibrationRecorderStyleProvider, TKVibrationRecorderViewDelegate, UILayoutSupport;

@interface TKVibrationRecorderView : UIView <TKVibrationRecorderTouchSurfaceDelegate>
{
    id <TKVibrationRecorderStyleProvider> _styleProvider;
    UILabel *_instructionsLabel;
    UIToolbar *_controlsToolbar;
    TKVibrationRecorderProgressView *_progressView;
    TKVibrationRecorderTouchSurface *_touchSurface;
    NSLayoutConstraint *_controlsToolbarTopConstraint;
    NSLayoutConstraint *_progressToolbarBottomConstraint;
    NSLayoutConstraint *_touchSurfaceTopConstraint;
    _Bool _isReplayModeEnabled;
    int _leftButtonIdentifier;
    int _rightButtonIdentifier;
    double _vibrationPatternMaximumDuration;
    double _currentVibrationProgressDidStartTimestamp;
    double _currentVibrationComponentDidStartTimestamp;
    _Bool _isWaitingForEndOfCurrentVibrationComponent;
    _Bool _isAnimatingProgress;
    id <NSCopying> _displayLinkManagerObserverToken;
    id <TKVibrationRecorderViewDelegate> _delegate;
    id <UILayoutSupport> _topLayoutGuide;
}

@property(retain, nonatomic) id <UILayoutSupport> topLayoutGuide; // @synthesize topLayoutGuide=_topLayoutGuide;
@property(nonatomic) __weak id <TKVibrationRecorderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)vibrationRecorderTouchSurface:(id)arg1 didExitRecordingModeWithContextObject:(id)arg2;
- (_Bool)vibrationRecorderTouchSurfaceDidEnterRecordingMode:(id)arg1;
- (void)vibrationRecorderTouchSurfaceDidFinishReplayingVibration:(id)arg1;
- (void)vibrationComponentDidEndForVibrationRecorderTouchSurface:(id)arg1;
- (void)vibrationComponentDidStartForVibrationRecorderTouchSurface:(id)arg1;
- (void)didMoveToWindow;
- (void)_updateProgress:(id)arg1;
- (void)stopAnimatingProgress;
- (void)startAnimatingProgress;
- (void)exitReplayMode;
- (void)enterReplayModeWithVibrationPattern:(id)arg1;
- (void)exitRecordingModeWithPlayButtonEnabled:(_Bool)arg1;
- (void)enterRecordingMode;
- (void)_exitWaitingModeWithAnimation:(_Bool)arg1;
- (void)_enterWaitingModeWithAnimation:(_Bool)arg1 enablePlayButton:(_Bool)arg2;
- (void)_handleRightButtonTapped:(id)arg1;
- (void)_handleLeftButtonTapped:(id)arg1;
- (void)_setLeftButtonIdentifier:(int)arg1 enabled:(_Bool)arg2 rightButtonIdentifier:(int)arg3 enabled:(_Bool)arg4 animated:(_Bool)arg5;
- (id)_titleForControlsToolbarButtonWithIdentifier:(int)arg1;
- (void)dealloc;
- (id)initWithVibrationPatternMaximumDuration:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

