//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/NSObject-Protocol.h>

@class BSSettings, NSString;

@protocol BSSettingDescriptionProvider <NSObject>

@optional
- (NSString *)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (NSString *)keyDescriptionForSetting:(unsigned long long)arg1;
- (NSString *)settings:(BSSettings *)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;
- (NSString *)settings:(BSSettings *)arg1 keyDescriptionForSetting:(unsigned long long)arg2;
@end

