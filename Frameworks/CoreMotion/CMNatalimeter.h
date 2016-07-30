//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMNatalimeterInternal;

@interface CMNatalimeter : NSObject
{
    CMNatalimeterInternal *_internal;
}

+ (id)computeRestingCaloriesAtRate:(unsigned long long)arg1 user:(id)arg2 duration:(double)arg3;
+ (id)maxNatalieEntries;
+ (_Bool)isNatalimeterAvailable;
+ (_Bool)resetCalibrationDataWithError:(id *)arg1;
+ (_Bool)setUserInfo:(id)arg1 error:(id *)arg2;
+ (_Bool)setUserProfile:(id)arg1 error:(id *)arg2;
+ (id)defaultUserProfile;
+ (id)userProfile;
+ (double)activeMetsThreshold;
+ (double)briskMinuteMetsThreshold;
@property(readonly, nonatomic) CMNatalimeterInternal *_internal; // @synthesize _internal;
- (unsigned long long)promptsNeededForSession:(long long)arg1;
- (_Bool)_shouldAllowMotionCalibrationPromptsForSession:(long long)arg1;
- (unsigned long long)getSupportedMetricsForSession:(long long)arg1;
- (void)stopAbsoluteNatalimetryDataUpdates;
- (void)startAbsoluteNatalimetryDataUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)queryAbsoluteNatalimetryDataSinceRecord:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)setSession:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end
