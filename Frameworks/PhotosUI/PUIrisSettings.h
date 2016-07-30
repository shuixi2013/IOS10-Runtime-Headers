//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUSettings.h>

@interface PUIrisSettings : PUSettings
{
    _Bool _showStatusBorder;
    _Bool _audioEnabled;
    _Bool _vitalityAllowed;
    _Bool _useVitalityBuffer;
    _Bool _shouldAlwaysBadge;
    _Bool _useTransition;
    _Bool _useForceTouchInitiatedPlayback;
    _Bool _showDebugInfo;
    _Bool _showVideoBorder;
    _Bool _showCrossfadeBorder;
    float _playbackPreDuration;
    float _playbackPostDuration;
    float _transitionBlurRadius;
    float _transitionScale;
    double _transitionDuration;
    double _playbackTransitionCrossfadeDelay;
    double _settleTransitionDuration;
}

+ (id)settingsControllerModule;
+ (id)_photosPlayerRootSettings;
+ (id)sharedInstance;
@property(nonatomic) _Bool showCrossfadeBorder; // @synthesize showCrossfadeBorder=_showCrossfadeBorder;
@property(nonatomic) _Bool showVideoBorder; // @synthesize showVideoBorder=_showVideoBorder;
@property(nonatomic) _Bool showDebugInfo; // @synthesize showDebugInfo=_showDebugInfo;
@property(nonatomic) double settleTransitionDuration; // @synthesize settleTransitionDuration=_settleTransitionDuration;
@property(nonatomic) double playbackTransitionCrossfadeDelay; // @synthesize playbackTransitionCrossfadeDelay=_playbackTransitionCrossfadeDelay;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(nonatomic) float transitionScale; // @synthesize transitionScale=_transitionScale;
@property(nonatomic) float transitionBlurRadius; // @synthesize transitionBlurRadius=_transitionBlurRadius;
@property(nonatomic) _Bool useForceTouchInitiatedPlayback; // @synthesize useForceTouchInitiatedPlayback=_useForceTouchInitiatedPlayback;
@property(nonatomic) _Bool useTransition; // @synthesize useTransition=_useTransition;
@property(nonatomic) _Bool shouldAlwaysBadge; // @synthesize shouldAlwaysBadge=_shouldAlwaysBadge;
@property(nonatomic) _Bool useVitalityBuffer; // @synthesize useVitalityBuffer=_useVitalityBuffer;
@property(nonatomic, getter=isVitalityAllowed) _Bool vitalityAllowed; // @synthesize vitalityAllowed=_vitalityAllowed;
@property(nonatomic) float playbackPostDuration; // @synthesize playbackPostDuration=_playbackPostDuration;
@property(nonatomic) float playbackPreDuration; // @synthesize playbackPreDuration=_playbackPreDuration;
@property(nonatomic, getter=isAudioEnabled) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(nonatomic, getter=showStatusBorder) _Bool showStatusBorder; // @synthesize showStatusBorder=_showStatusBorder;
- (void)performPostSaveActions;
- (void)restoreDefaultValues;
- (void)setDefaultValues;

@end

