//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSSceneClientSettings.h>

@class NSSet, NSString;

@interface FBSMutableSceneClientSettings : FBSSceneClientSettings
{
}

+ (_Bool)_isMutable;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)otherSettings;
@property(copy, nonatomic) NSString *preferredSceneHostIdentifier; // @dynamic preferredSceneHostIdentifier;
@property(copy, nonatomic) NSSet *occlusions; // @dynamic occlusions;
@property(nonatomic) long long preferredInterfaceOrientation; // @dynamic preferredInterfaceOrientation;
@property(nonatomic) double preferredLevel; // @dynamic preferredLevel;

@end

