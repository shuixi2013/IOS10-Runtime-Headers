//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FAFamilyCircle, NSCache, NSNumber, SKUIClientContext, SSFamilyCircle;

@interface SKUIFamilyCircleController : NSObject
{
    NSCache *_imageCache;
    _Bool _hasLoaded;
    SSFamilyCircle *_iTunesFamily;
    SKUIClientContext *_clientContext;
    FAFamilyCircle *_iCloudFamily;
    NSNumber *_lastAccountID;
    long long _reloadPromptStyle;
}

+ (id)sharedController;
@property long long reloadPromptStyle; // @synthesize reloadPromptStyle=_reloadPromptStyle;
@property(retain) NSNumber *lastAccountID; // @synthesize lastAccountID=_lastAccountID;
@property(readonly, nonatomic) FAFamilyCircle *iCloudFamily; // @synthesize iCloudFamily=_iCloudFamily;
@property(readonly, nonatomic) _Bool hasLoaded; // @synthesize hasLoaded=_hasLoaded;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(readonly, nonatomic) SSFamilyCircle *familyCircle; // @synthesize familyCircle=_iTunesFamily;
- (void).cxx_destruct;
- (void)_setProfilePicture:(id)arg1 forMember:(id)arg2;
- (void)_setITunesFamily:(id)arg1 error:(id)arg2 iCloudFamily:(id)arg3 error:(id)arg4;
- (void)_reloadDataWithPromptStyle:(long long)arg1;
- (void)_accountStoreDidChange:(id)arg1;
- (id)profilePictureForFamilyMember:(id)arg1;
- (void)reloadData;
- (void)dealloc;
- (id)init;

@end

