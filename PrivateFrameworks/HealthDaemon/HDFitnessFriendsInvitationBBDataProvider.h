//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/BBRemoteDataProvider-Protocol.h>

@class BBDataProviderConnection, BBDataProviderProxy, NSMutableDictionary, NSString;
@protocol HDFitnessFriendsBBDataProviderDelegate, OS_dispatch_queue;

@interface HDFitnessFriendsInvitationBBDataProvider : NSObject <BBRemoteDataProvider>
{
    BBDataProviderConnection *_dataProviderConnection;
    BBDataProviderProxy *_dataProviderProxy;
    NSMutableDictionary *_currentBulletinRequestsByRequestID;
    NSObject<OS_dispatch_queue> *_bulletinQueue;
    int notifyInviteRequestToken;
    int notifyInviteResponseToken;
    int notifyOfInviteToken;
    id <HDFitnessFriendsBBDataProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <HDFitnessFriendsBBDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleBulletinActionResponse:(id)arg1;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (id)sortDescriptors;
- (void)_queue_removeBulletins:(id)arg1;
- (id)defaultSectionInfo;
- (id)sectionDisplayName;
- (id)universalSectionIdentifier;
- (id)sectionIdentifier;
- (void)withdrawInviteRequestFrom:(id)arg1;
- (void)showInviteAcceptResponseFrom:(id)arg1;
- (void)_showInvitationResponseFromPerson:(id)arg1;
- (void)showInviteRequestFrom:(id)arg1;
- (void)_notifyOfInvitationFromPerson:(id)arg1;
- (void)_showInvitationRequestFromPerson:(id)arg1;
- (id)_bulletinForInvitationFromPerson:(id)arg1;
- (void)_queue_removeBulletinRequestsWithType:(id)arg1 fromPerson:(id)arg2;
- (void)_queue_addBulletinRequest:(id)arg1;
- (id)_newPrepopulatedBulletinRequest;
- (void)_notifyOfFakeInvitationRequest;
- (void)_showFakeInvitationResponse;
- (void)_showFakeInvitationRequest;
- (id)_fakePerson;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

