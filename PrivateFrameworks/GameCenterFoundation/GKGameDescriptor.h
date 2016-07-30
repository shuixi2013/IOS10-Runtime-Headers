//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSNumber, NSString;

@interface GKGameDescriptor : GKInternalRepresentation
{
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSNumber *_adamID;
    NSNumber *_externalVersion;
    NSString *_shortBundleVersion;
}

+ (_Bool)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;
+ (id)gameDescriptorWithBundleID:(id)arg1 bundleVersion:(id)arg2 shortBundleVersion:(id)arg3 adamID:(id)arg4;
+ (id)gameDescriptorWithBundleID:(id)arg1 bundleVersion:(id)arg2 adamID:(id)arg3;
+ (id)gameDescriptorWithBundleID:(id)arg1 adamID:(id)arg2;
+ (id)gameDescriptorWithBundleID:(id)arg1;
@property(copy, nonatomic) NSString *shortBundleVersion; // @synthesize shortBundleVersion=_shortBundleVersion;
@property(retain, nonatomic) NSNumber *externalVersion; // @synthesize externalVersion=_externalVersion;
@property(retain, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)description;
- (void)setDictionary:(id)arg1;
- (id)dictionary;
- (void)dealloc;
- (id)initWithPushDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

