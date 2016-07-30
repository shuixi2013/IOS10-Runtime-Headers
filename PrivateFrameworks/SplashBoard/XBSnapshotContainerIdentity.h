//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SplashBoard/NSCopying-Protocol.h>

@class NSString;

@interface XBSnapshotContainerIdentity : NSObject <NSCopying>
{
    NSString *_bundleIdentifier;
    NSString *_bundlePath;
    NSString *_dataContainerPath;
    NSString *_bundleContainerPath;
    NSString *_snapshotContainerPath;
}

+ (id)identityForCompatibilityInfo:(id)arg1;
+ (id)identityForApplicationInfo:(id)arg1;
+ (id)identityForBundleProxy:(id)arg1;
@property(readonly, copy, nonatomic) NSString *snapshotContainerPath; // @synthesize snapshotContainerPath=_snapshotContainerPath;
@property(readonly, copy, nonatomic) NSString *bundleContainerPath; // @synthesize bundleContainerPath=_bundleContainerPath;
@property(readonly, copy, nonatomic) NSString *dataContainerPath; // @synthesize dataContainerPath=_dataContainerPath;
@property(readonly, copy, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)snapshotContainerPathForSnapshot:(id)arg1;
- (id)snapshotContainerPathForGroupID:(id)arg1;
- (void)dealloc;
- (id)_initWithBundleIdentifier:(id)arg1 bundlePath:(id)arg2 dataContainerPath:(id)arg3 bundleContainerPath:(id)arg4;
- (id)init;

@end

