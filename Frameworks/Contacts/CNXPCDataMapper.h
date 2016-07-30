//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Contacts/CNDataMapper-Protocol.h>

@class NSString, NSXPCConnection;

@interface CNXPCDataMapper : NSObject <CNDataMapper>
{
    NSXPCConnection *_connection;
}

+ (void)configureInterface:(id)arg1;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (_Bool)clearChangeHistoryForClient:(id)arg1 toSequenceNumber:(long long)arg2 error:(id *)arg3;
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id *)arg2;
- (_Bool)unregisterClientForChangeHistory:(id)arg1 error:(id *)arg2;
- (_Bool)registerClientForChangeHistory:(id)arg1 error:(id *)arg2;
- (id)userActivityUserInfoForContact:(id)arg1;
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
- (_Bool)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id *)arg4;
- (_Bool)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id *)arg3;
- (_Bool)setMeContact:(id)arg1 error:(id *)arg2;
- (id)defaultContainerIdentifier;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)groupsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)accountsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)containersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)executeFetchRequest:(id)arg1 progressiveResults:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)executeSaveRequest:(id)arg1 response:(id *)arg2 error:(id *)arg3;
- (_Bool)executeSaveRequest:(id)arg1 error:(id *)arg2;
- (id)meContactIdentifierWithError:(id *)arg1;
- (id)identifierWithError:(id *)arg1;
- (id)contactsForFetchRequest:(id)arg1 matchInfos:(id *)arg2 error:(id *)arg3;
- (id)contactsForFetchRequest:(id)arg1 error:(id *)arg2;
- (id)unifiedContactCountWithError:(id *)arg1;
- (id)remoteResultForSelector:(SEL)arg1 parameters:(id)arg2 error:(id *)arg3;
- (id)remoteResultForSelector:(SEL)arg1 query:(id)arg2 queryParameter:(id)arg3 error:(id *)arg4;
- (id)remoteResultForSelector:(SEL)arg1 query:(id)arg2 error:(id *)arg3;
- (id)remoteResultForSelector:(SEL)arg1 error:(id *)arg2;
- (_Bool)requestAccessForEntityType:(long long)arg1 error:(id *)arg2;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithContactsEnvironment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

