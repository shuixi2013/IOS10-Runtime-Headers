//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _HKAchievementLocalizationContext : NSObject
{
    _Bool _isWheelchairUser;
    NSString *_keyPrefix;
    long long _timesEarned;
    NSString *_userName;
}

+ (id)contextWithKeyPrefix:(id)arg1 timesEarned:(long long)arg2 userName:(id)arg3 isWheelchairUser:(_Bool)arg4;
@property(readonly, nonatomic) _Bool isWheelchairUser; // @synthesize isWheelchairUser=_isWheelchairUser;
@property(readonly, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(readonly, nonatomic) long long timesEarned; // @synthesize timesEarned=_timesEarned;
@property(readonly, nonatomic) NSString *keyPrefix; // @synthesize keyPrefix=_keyPrefix;
- (void).cxx_destruct;

@end

