//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMSensorRecorder : NSObject
{
}

+ (_Bool)isAuthorizedForRecording;
+ (_Bool)isAccelerometerRecordingAvailable;
- (id)accelerometerDataSince:(unsigned long long)arg1;
- (void)recordAccelerometerFor:(double)arg1;
- (id)accelerometerDataFrom:(id)arg1 to:(id)arg2;
- (void)recordAccelerometerForDuration:(double)arg1;
- (id)accelerometerDataFromDate:(id)arg1 toDate:(id)arg2;
- (id)accelerometerDataSinceId:(unsigned long long)arg1;

@end
