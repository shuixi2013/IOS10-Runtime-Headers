//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVCaptureDeviceFormat.h>

@interface AVCaptureDeviceFormat (CAMCaptureEngine)
- (long long)cam_compareUsingDimensions:(id)arg1;
- (_Bool)cam_supportsPanoramaConfiguration:(id)arg1;
- (CDStruct_1b6d18a9)cam_frameDurationForVideoConfiguration:(long long)arg1;
- (_Bool)cam_supportsVideoConfiguration:(long long)arg1;
- (CDStruct_1ef3fb1f)_expectedVideoDimensionsForVideoConfiguration:(long long)arg1;
- (double)_framesPerSecondForVideoConfiguration:(long long)arg1;
@end

