//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoard/FBSystemServiceFacility.h>

@class NSMutableDictionary;
@protocol FBDisplayLayoutServiceServerDelegate;

@interface FBDisplayLayoutServiceServer : FBSystemServiceFacility
{
    id <FBDisplayLayoutServiceServerDelegate> _delegate;
    NSMutableDictionary *_calloutQueuesByQOS;
    NSMutableDictionary *_defaultQOSClientsByDisplayType;
    NSMutableDictionary *_utilityQOSClientsByDisplayType;
}

@property(nonatomic) id <FBDisplayLayoutServiceServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)noteClientDidDisconnect:(id)arg1;
- (void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2;
- (id)prerequisiteMilestones;
- (void)_sendDisplayLayout:(id)arg1 toClients:(id)arg2 withQualityOfService:(unsigned long long)arg3;
- (id)_utilityQOSClientsForDisplayType:(unsigned long long)arg1;
- (id)_defaultQOSClientsForDisplayType:(unsigned long long)arg1;
- (id)_calloutQueueForQOS:(unsigned long long)arg1;
- (void)publishDisplayLayout:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2 clientAuthenticator:(id)arg3;

@end

