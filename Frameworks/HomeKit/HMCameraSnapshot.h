//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/HMCameraSource.h>

@class NSDate, _HMCameraSnapshot;

@interface HMCameraSnapshot : HMCameraSource
{
    _HMCameraSnapshot *_snapshot;
}

@property(retain, nonatomic) _HMCameraSnapshot *snapshot; // @synthesize snapshot=_snapshot;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDate *captureDate;
- (id)initWithSnapshot:(id)arg1;

@end

