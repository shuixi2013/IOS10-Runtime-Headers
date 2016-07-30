//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ToneKit/NSObject-Protocol.h>

@class TKVibrationRecorderView;

@protocol TKVibrationRecorderViewDelegate <NSObject>
- (void)vibrationRecorderViewDidReachVibrationRecordingMaximumDuration:(TKVibrationRecorderView *)arg1;
- (void)vibrationRecorderView:(TKVibrationRecorderView *)arg1 didExitRecordingModeWithContextObject:(id)arg2;
- (_Bool)vibrationRecorderViewDidEnterRecordingMode:(TKVibrationRecorderView *)arg1;
- (void)vibrationRecorderViewDidFinishReplayingVibration:(TKVibrationRecorderView *)arg1;
- (void)vibrationRecorderView:(TKVibrationRecorderView *)arg1 buttonTappedWithIdentifier:(int)arg2;
- (void)vibrationComponentDidEndForVibrationRecorderView:(TKVibrationRecorderView *)arg1;
- (void)vibrationComponentDidStartForVibrationRecorderView:(TKVibrationRecorderView *)arg1;
@end

