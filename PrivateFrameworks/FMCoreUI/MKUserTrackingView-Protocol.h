//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FMCoreUI/NSObject-Protocol.h>

@protocol MKUserTrackingView <NSObject>
- (_Bool)canRotateForHeading;
- (_Bool)hasUserLocation;
- (void)_setUserTrackingMode:(long long)arg1 animated:(_Bool)arg2 fromTrackingButton:(_Bool)arg3;
- (long long)userTrackingMode;

@optional
- (_Bool)hasRenderedSomething;
@end
