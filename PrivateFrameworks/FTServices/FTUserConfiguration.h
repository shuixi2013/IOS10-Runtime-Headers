//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FTUserConfiguration : NSObject
{
}

+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool _nonWifiFaceTimeEntitled;
@property(nonatomic) _Bool allowAnyNetwork;
@property(nonatomic) _Bool cellularFaceTimeEnabled;
- (_Bool)wifiAllowedForBundleId:(id)arg1;
- (_Bool)cellularDataEnabledForBundleId:(id)arg1;
- (_Bool)_adequateInternalOrCarrierInstall;

@end

