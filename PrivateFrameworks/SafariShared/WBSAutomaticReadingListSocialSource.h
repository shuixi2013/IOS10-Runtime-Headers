//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, NSTimer, NSXPCConnection, WBSAutomaticReadingListTrackedRecordsInfo;

@interface WBSAutomaticReadingListSocialSource : NSObject
{
    id _serviceImage;
    NSMutableDictionary *_accountsToNumberOfRequestsInProgressForOlderItems;
    NSArray *_accounts;
    NSArray *_activeAccounts;
    WBSAutomaticReadingListTrackedRecordsInfo *_recordsInfo;
    Class _fallbackIconProviderClass;
    NSDictionary *_accountsToTrackedRecordsInfoMap;
    NSTimer *_minimumTimeBetweenRequestsTimer;
    unsigned long long _numberOfRequestsInProgressForNewerItems;
    NSXPCConnection *_socialHelperConnection;
}

+ (id)itemsFromAllSocialSourcesByDate;
+ (void)refreshAllSocialSources;
+ (id)allSocialSources;
@property(retain, nonatomic) NSXPCConnection *socialHelperConnection; // @synthesize socialHelperConnection=_socialHelperConnection;
@property(nonatomic) unsigned long long numberOfRequestsInProgressForNewerItems; // @synthesize numberOfRequestsInProgressForNewerItems=_numberOfRequestsInProgressForNewerItems;
@property(retain, nonatomic) NSTimer *minimumTimeBetweenRequestsTimer; // @synthesize minimumTimeBetweenRequestsTimer=_minimumTimeBetweenRequestsTimer;
@property(retain, nonatomic) NSDictionary *accountsToTrackedRecordsInfoMap; // @synthesize accountsToTrackedRecordsInfoMap=_accountsToTrackedRecordsInfoMap;
@property(retain, nonatomic) Class fallbackIconProviderClass; // @synthesize fallbackIconProviderClass=_fallbackIconProviderClass;
@property(readonly, nonatomic) WBSAutomaticReadingListTrackedRecordsInfo *recordsInfo; // @synthesize recordsInfo=_recordsInfo;
@property(readonly, copy, nonatomic) NSArray *activeAccounts; // @synthesize activeAccounts=_activeAccounts;
@property(copy, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
- (void).cxx_destruct;
- (void)repostItem:(id)arg1 fromAccountWithIdentifier:(id)arg2;
- (id)repostResourceURLStringForItem:(id)arg1;
@property(readonly, nonatomic) id serviceImage;
@property(readonly, nonatomic) NSString *serviceName;
@property(readonly, nonatomic) NSString *serviceType;
@property(readonly, nonatomic) NSString *accountTypeIdentifier;
- (void)setShouldHideItems:(_Bool)arg1 forAccount:(id)arg2;
- (_Bool)shouldHideItemsFromAccount:(id)arg1;
- (Class)itemClass;
- (id)recordRange:(id)arg1 withOldestFromItem:(id)arg2;
- (long long)compareItem:(id)arg1 toItem:(id)arg2;
- (long long)compareOldestRecordInRange:(id)arg1 toOldestRecordInRange:(id)arg2;
- (long long)compareNewestRecordInRange:(id)arg1 toNewestRecordInRange:(id)arg2;
- (long long)compareNewestRecordInRange:(id)arg1 toOldestRecordInRange:(id)arg2;
- (void)updateMinimumTimeBetweenRequestsFromResponseHeaders:(id)arg1;
- (double)minimumTimeBetweenRequests;
- (id)requestParametersForRecordsWithAge:(int)arg1 relativeTo:(id)arg2;
- (id)resourceURLString;
- (void)_didAddItemsForAccountWithIdentifier:(id)arg1;
- (void)_addItems:(id)arg1 withAge:(int)arg2 inRange:(id)arg3 rangeOfTrackedRecordsAtTimeOfRequest:(id)arg4 forAccountWithIdentifier:(id)arg5;
- (void)_accountsChanged:(id)arg1;
- (id)_activeAccountsFromAccountList:(id)arg1;
- (id)_findAccounts;
- (void)_didCompleteRequestForItemsWithAge:(int)arg1 accountIdentifier:(id)arg2;
- (void)_didStartRequestForItemsWithAge:(int)arg1 accountIdentifier:(id)arg2;
- (void)_requestOlderItemsIfNecessaryToReachMaximumForAccountWithIdentifier:(id)arg1;
- (void)requestMaximumNumberOfOlderItems;
- (void)_performRequestForMoreItemsWithAge:(int)arg1 accountIdentifier:(id)arg2 successHandler:(CDUnknownBlockType)arg3;
- (void)requestMoreItemsWithAge:(int)arg1;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (void)_invalidateSocialHelperConnectionIfPossible;
- (id)_existingSocialHelperConnection;
- (void)_minimumTimeBetweenRequestsTimerFired:(id)arg1;
- (void)dealloc;
- (id)init;

@end

