//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMCore/IMChat.h>

#import <ChatKit/CKIMSimulatedChatDelegate-Protocol.h>
#import <ChatKit/IMSimulatedDaemonListener-Protocol.h>

@class CKIMSimulatedAccount, IMHandle, NSString;
@protocol CKIMSimulatedChatDelegate;

@interface CKIMSimulatedChat : IMChat <CKIMSimulatedChatDelegate, IMSimulatedDaemonListener>
{
    id <CKIMSimulatedChatDelegate> _delegate;
    CKIMSimulatedAccount *_simulatedAccount;
    NSString *_simulatedGUID;
    IMHandle *_incomingHandle;
    IMHandle *_outgoingHandle;
    unsigned long long _currentMessageID;
}

@property(readonly, nonatomic) unsigned long long currentMessageID; // @synthesize currentMessageID=_currentMessageID;
@property(readonly, nonatomic) IMHandle *outgoingHandle; // @synthesize outgoingHandle=_outgoingHandle;
@property(readonly, nonatomic) IMHandle *incomingHandle; // @synthesize incomingHandle=_incomingHandle;
@property(readonly, nonatomic) NSString *simulatedGUID; // @synthesize simulatedGUID=_simulatedGUID;
@property(readonly, nonatomic) CKIMSimulatedAccount *simulatedAccount; // @synthesize simulatedAccount=_simulatedAccount;
@property(nonatomic) __weak id <CKIMSimulatedChatDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_messageWithGUID:(id)arg1;
- (void)simulatedDaemon:(id)arg1 willSendBalloonPayload:(id)arg2 attachments:(id)arg3 messageGUID:(id)arg4 bundleID:(id)arg5;
- (void)chat:(id)arg1 didSendMessage:(id)arg2;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 loadImmediately:(_Bool)arg3;
- (id)displayName;
- (id)recipient;
- (id)participants;
- (id)guid;
- (id)account;
- (id)chatIdentifier;
- (_Bool)_handleIncomingItem:(id)arg1;
- (void)sendMessage:(id)arg1;
- (id)initWithIncomingID:(id)arg1 outgoingID:(id)arg2 messageIDOffset:(unsigned long long)arg3;

@end

