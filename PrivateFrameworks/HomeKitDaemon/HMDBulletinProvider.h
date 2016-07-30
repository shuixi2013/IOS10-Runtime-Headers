//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/BBRemoteDataProvider-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class BBDataProviderProxy, HMDHomeManager, NSMutableDictionary, NSString;

@interface HMDBulletinProvider : NSObject <NSSecureCoding, BBRemoteDataProvider>
{
    BBDataProviderProxy *_proxy;
    NSMutableDictionary *_bulletins;
    HMDHomeManager *_homeManager;
}

+ (struct CGImage *)resizeImage:(struct CGImage *)arg1 width:(float)arg2 height:(float)arg3;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) NSMutableDictionary *bulletins; // @synthesize bulletins=_bulletins;
@property(nonatomic) BBDataProviderProxy *proxy; // @synthesize proxy=_proxy;
- (void).cxx_destruct;
- (id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2;
- (_Bool)syncsBulletinDismissal;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (id)displayNameForSubsectionID:(id)arg1;
- (id)defaultSubsectionInfos;
- (id)defaultSectionInfo;
- (id)sectionParameters;
- (id)sectionDisplayName;
- (id)sectionIdentifier;
- (id)sortDescriptors;
- (id)sortedBulletinsByDate;
- (void)removeBulletinWithRecordID:(id)arg1;
- (void)removeBulletin:(id)arg1;
- (void)cullBulletinsToCount:(unsigned long long)arg1;
- (void)updateBulletin:(id)arg1;
- (void)insertBulletinWithTitle:(id)arg1 imageURL:(id)arg2 message:(id)arg3 recordID:(id)arg4 bulletinContext:(struct NSDictionary *)arg5 actionContext:(struct NSDictionary *)arg6;
- (void)insertBulletinWithTitle:(id)arg1 imageURL:(id)arg2 message:(id)arg3 recordID:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)reloadDefaultSectionInfo;
- (void)configureHomeManager:(id)arg1;
- (void)configure:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

