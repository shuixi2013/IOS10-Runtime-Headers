//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BLTSectionInfoListProviderDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol BLTSectionInfoListDelegate, BLTSectionInfoListProvider;

@interface BLTSectionInfoList : NSObject <BLTSectionInfoListProviderDelegate>
{
    NSMutableDictionary *_sectionInfoListItemsBySectionID;
    struct _opaque_pthread_mutex_t _lock;
    NSMutableArray *_loadingCompletionHandlers;
    _Bool _loading;
    _Bool _loaded;
    id <BLTSectionInfoListDelegate> _delegate;
    id <BLTSectionInfoListProvider> _overrideProvider;
    id <BLTSectionInfoListProvider> _sectionInfoProvider;
}

@property(readonly, nonatomic, getter=hasLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) id <BLTSectionInfoListProvider> sectionInfoProvider; // @synthesize sectionInfoProvider=_sectionInfoProvider;
@property(retain, nonatomic) id <BLTSectionInfoListProvider> overrideProvider; // @synthesize overrideProvider=_overrideProvider;
@property(nonatomic) __weak id <BLTSectionInfoListDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_migrateFromExternalDeviceSwitchToOverrides:(id)arg1;
- (id)overriddenSettings;
- (id)originalSettings;
- (id)overrides;
- (void)updateSectionInfo:(id)arg1 withUniversalSectionID:(id)arg2 displayName:(id)arg3;
- (void)updateOverrides:(id)arg1 forSectionID:(id)arg2;
- (id)universalSectionIDForSectionID:(id)arg1;
- (id)effectiveSectionInfoForSectionID:(id)arg1;
- (id)overriddenSectionInfoForSectionID:(id)arg1;
- (void)reloadWithCompletion:(CDUnknownBlockType)arg1;
- (id)sectionIDs;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

