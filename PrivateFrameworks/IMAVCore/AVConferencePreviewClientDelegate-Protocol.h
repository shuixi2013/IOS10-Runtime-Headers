//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSError, VideoAttributes;

@protocol AVConferencePreviewClientDelegate

@optional
- (void)cameraDidBecomeAvailable:(unsigned int)arg1;
- (void)didGetSnapshot:(NSData *)arg1;
- (void)didReceiveCommError;
- (void)didReceiveErrorFromCamera:(unsigned int)arg1 error:(NSError *)arg2;
- (void)didChangeLocalScreenAttributes:(VideoAttributes *)arg1;
- (void)didChangeLocalVideoAttributes:(VideoAttributes *)arg1;
- (void)didReceiveFirstPreviewFrameFromCamera:(unsigned int)arg1;
- (void)didStopPreview;
- (void)didPausePreview;
- (void)didStartPreview;
@end

