//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/NSCopying-Protocol.h>
#import <AVFoundation/NSMutableCopying-Protocol.h>

@class AVScheduledAudioParametersInternal, NSArray;

@interface AVScheduledAudioParameters : NSObject <NSCopying, NSMutableCopying>
{
    AVScheduledAudioParametersInternal *_scheduledParametersInternal;
}

- (void)_setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (_Bool)getVolumeRampForTime:(CDStruct_1b6d18a9)arg1 startVolume:(float *)arg2 endVolume:(float *)arg3 timeRange:(CDStruct_e83c9415 *)arg4;
@property(copy, nonatomic, getter=_ramps, setter=_setRamps:) NSArray *ramps;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)_volumeCurveAsString;
- (id)_audioVolumeCurve;

@end

