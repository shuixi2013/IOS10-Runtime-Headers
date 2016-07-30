//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMEffectsRenderer;

@protocol CAMEffectsRendererDelegate <NSObject>
- (void)cameraEffectsRenderer:(CAMEffectsRenderer *)arg1 didSelectFilterType:(long long)arg2;
- (void)cameraEffectsRenderer:(CAMEffectsRenderer *)arg1 didFinishTransitionToShowGrid:(_Bool)arg2;
- (void)cameraEffectsRenderer:(CAMEffectsRenderer *)arg1 didStartTransitionToShowGrid:(_Bool)arg2 animated:(_Bool)arg3;
- (void)cameraEffectsRenderer:(CAMEffectsRenderer *)arg1 willTransitionToShowGrid:(_Bool)arg2;
- (void)cameraEffectsRenderer:(CAMEffectsRenderer *)arg1 requestsVideoDataOutputEnabled:(_Bool)arg2;
- (void)cameraEffectsRenderer:(CAMEffectsRenderer *)arg1 requestsPreviewLayerEnabled:(_Bool)arg2;
- (void)cameraEffectsRendererDidStartPreview:(CAMEffectsRenderer *)arg1;
@end
