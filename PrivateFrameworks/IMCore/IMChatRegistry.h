//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMCore/NSFastEnumeration-Protocol.h>

@class IMTimer, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSUserActivity;

@interface IMChatRegistry : NSObject <NSFastEnumeration>
{
    NSMutableArray *_allChats;
    NSMutableDictionary *_chatGUIDToCurrentThreadMap;
    NSMutableDictionary *_chatGUIDToInfoMap;
    NSMutableDictionary *_chatGUIDToChatMap;
    NSMutableDictionary *_threadNameToChatMap;
    NSMutableDictionary *_chatGUIDToiMessageSentOrReceivedMap;
    NSMutableArray *_allChatsInThreadNameMap;
    NSMutableArray *_pendingQueries;
    NSMutableArray *_waitingForQueries;
    NSString *_historyModificationStamp;
    IMTimer *_markAsReadTimer;
    NSMutableDictionary *_queryCompletionBlocks;
    double _timerStartTimeInterval;
    _Bool _firstLoad;
    _Bool _loading;
    _Bool _daemonHadTerminated;
    _Bool _wantsHistoryReload;
    _Bool _postMessageSentNotifications;
    _Bool _isInternalInstall;
    unsigned long long _defaultNumberOfMessagesToLoad;
    unsigned long long _daemonUnreadCount;
    long long _daemonLastFailedMessageID;
    NSUserActivity *_userActivity;
    NSMutableDictionary *_chatsBeingLoadedMap;
    _Bool _personaKitRetriveAPITimedOut;
    NSArray *_simulatedChats;
}

+ (Class)messageClass;
+ (void)setMessageClass:(Class)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic, setter=_setSimulatedChats:) NSArray *simulatedChats; // @synthesize simulatedChats=_simulatedChats;
@property(nonatomic) _Bool personaKitRetriveAPITimedOut; // @synthesize personaKitRetriveAPITimedOut=_personaKitRetriveAPITimedOut;
@property(nonatomic, setter=_setPostMessageSentNotifications:) _Bool _postMessageSentNotifications; // @synthesize _postMessageSentNotifications;
@property(readonly, nonatomic) _Bool _isLoading; // @synthesize _isLoading=_loading;
@property(nonatomic, setter=_setDefaultNumberOfMessagesToLoad:) unsigned long long _defaultNumberOfMessagesToLoad; // @synthesize _defaultNumberOfMessagesToLoad;
- (void).cxx_destruct;
- (_Bool)_firstLoad;
- (void)systemApplicationDidResume;
- (void)_clearMarkAsReadTimerIfNecessary;
- (void)_startMarkAsReadTimerIfNecessary;
- (void)_registerCompletion:(CDUnknownBlockType)arg1 forQueryID:(id)arg2;
- (void)_chat:(id)arg1 handleCompletionOfQuery:(id)arg2 withUserInfo:(id)arg3 success:(_Bool)arg4 error:(id)arg5;
- (void)_blockUntilQueriesComplete:(id)arg1;
- (void)__blockUntilQueriesComplete;
- (id)_chatsWithMessageGUID:(id)arg1;
- (id)_chatsWithMessage:(id)arg1;
- (id)_allGUIDsForChat:(id)arg1;
- (void)handleIMChatParticipantsDidChange:(id)arg1;
- (id)loadChatFromDaemonWithChatIdentifier:(id)arg1;
- (id)_chatForChatDictionary:(id)arg1 items:(id)arg2 allowCreate:(_Bool)arg3 createdChat:(_Bool *)arg4 outGUID:(id *)arg5;
- (id)existingChatForRoom:(id)arg1 onAccount:(id)arg2 allowRetargeting:(_Bool)arg3;
- (id)existingChatForIMHandles:(id)arg1 allowRetargeting:(_Bool)arg2;
- (id)existingChatForIMHandles:(id)arg1 allowRetargeting:(_Bool)arg2 groupID:(id)arg3 displayName:(id)arg4 joinedChatsOnly:(_Bool)arg5;
- (id)existingChatForIMHandles:(id)arg1 allowRetargeting:(_Bool)arg2 groupID:(id)arg3 displayName:(id)arg4 ignoresDisplayName:(_Bool)arg5 joinedChatsOnly:(_Bool)arg6;
- (id)existingChatForIMHandles:(id)arg1 allowRetargeting:(_Bool)arg2 groupID:(id)arg3;
- (id)existingChatForIMHandle:(id)arg1 allowRetargeting:(_Bool)arg2;
- (id)existingChatForRoom:(id)arg1 onAccount:(id)arg2;
- (id)existingChatForIMHandles:(id)arg1;
- (id)existingChatForIMHandle:(id)arg1;
- (id)existingChatWithGUID:(id)arg1;
- (id)existingChatWithChatIdentifier:(id)arg1;
- (id)existingChatWithGroupID:(id)arg1;
- (id)_lookupExistingChatWithIMHandle:(id)arg1;
- (id)_existingChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 account:(id)arg3;
- (id)_existingChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 service:(id)arg3;
@property(readonly, nonatomic) NSArray *allExistingChats;
@property(readonly, nonatomic) unsigned long long numberOfExistingChats;
- (void)_setChatHasCommunicatedOveriMessage:(id)arg1;
- (_Bool)_hasChat:(id)arg1 forService:(id)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (long long)lastFailedMessageID;
- (unsigned long long)unreadCount;
- (id)_createdChatForRoom:(id)arg1 onAccount:(id)arg2;
- (id)_createdChatForIMHandles:(id)arg1 style:(unsigned char)arg2 groupID:(id)arg3 displayName:(id)arg4 joinedChatsOnly:(_Bool)arg5;
- (id)_createdChatForIMHandle:(id)arg1;
- (id)_createdChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 account:(id)arg3;
- (id)_allCreatedChats;
- (void)setUserActivityForChat:(id)arg1 message:(id)arg2 orHandles:(id)arg3 title:(id)arg4;
- (void)setUserActivityForChat:(id)arg1 orHandles:(id)arg2 title:(id)arg3;
- (void)setActiveChatURL:(id)arg1;
- (id)chatForURL:(id)arg1 outMessageText:(id *)arg2 outRecipientIDs:(id *)arg3 outService:(id *)arg4 outMessageGUID:(id *)arg5;
- (id)messagesURLWithChat:(id)arg1 orHandles:(id)arg2 withMessageText:(id)arg3;
- (id)chatForRoom:(id)arg1 onAccount:(id)arg2;
- (id)chatForIMHandles:(id)arg1 chatName:(id)arg2;
- (id)chatForIMHandles:(id)arg1 displayName:(id)arg2 joinedChatsOnly:(_Bool)arg3;
- (id)chatForIMHandles:(id)arg1;
- (id)chatForIMHandle:(id)arg1;
- (void)_unregisterChatWithGUID:(id)arg1;
- (void)_unregisterChat:(id)arg1;
- (void)unregisterChatWithGUID:(id)arg1;
- (void)unregisterChat:(id)arg1;
- (void)_registerChat:(id)arg1 isIncoming:(_Bool)arg2 guid:(id)arg3;
- (void)_registerChatDictionary:(id)arg1 forChat:(id)arg2 isIncoming:(_Bool)arg3 newGUID:(id)arg4;
- (void)dealloc;
- (id)init;
- (id)_chatInstanceForGUID:(id)arg1;
- (void)_noteChatDealloc:(id)arg1;
- (void)_noteChatInit:(id)arg1;
- (void)_chat_loadAttachments:(id)arg1 queryID:(id)arg2;
- (void)_chat_loadUnreadMessages:(id)arg1 limit:(unsigned long long)arg2 fallbackGUID:(id)arg3 queryId:(id)arg4;
- (void)_chat_loadFrequentReplies:(id)arg1 limit:(unsigned long long)arg2 queryID:(id)arg3;
- (void)_chat_markAsSpam:(id)arg1 queryID:(id)arg2 autoReport:(_Bool)arg3;
- (void)_chat_markAsSpamAutomatically:(id)arg1;
- (void)_chat_markAsSpam:(id)arg1 queryID:(id)arg2;
- (void)_chat_clearHistory:(id)arg1 beforeGUID:(id)arg2 afterGUID:(id)arg3 queryID:(id)arg4;
- (void)_chat_loadHistory:(id)arg1 limit:(unsigned long long)arg2 beforeGUID:(id)arg3 afterGUID:(id)arg4 queryID:(id)arg5;
- (void)_chat:(id)arg1 updateIsFiltered:(_Bool)arg2;
- (void)_chat:(id)arg1 updateDisplayName:(id)arg2;
- (void)_chat:(id)arg1 setValue:(id)arg2 forChatProperty:(id)arg3;
- (void)_chat:(id)arg1 setProperties:(id)arg2 ofParticipant:(id)arg3;
- (void)_chat_declineInvitation:(id)arg1;
- (void)_chat_remove:(id)arg1;
- (void)_chat_leave:(id)arg1;
- (void)_chat:(id)arg1 joinWithProperties:(id)arg2;
- (void)_chat:(id)arg1 removeParticipants:(id)arg2 reason:(id)arg3;
- (void)_chat:(id)arg1 inviteParticipants:(id)arg2 reason:(id)arg3;
- (void)_chat:(id)arg1 sendMessage:(id)arg2;
- (void)_trackUsageForMessage:(id)arg1;
- (id)_eventForMessage:(id)arg1;
- (void)_markHasHadSuccessfulQueryForChat:(id)arg1;
- (void)_chat:(id)arg1 sendSavedReceiptForMessage:(id)arg2;
- (void)_chat:(id)arg1 setPlayedExpressiveSendForMessage:(id)arg2;
- (void)_chat:(id)arg1 sendPlayedReceiptForMessage:(id)arg2;
- (void)_chat_storeItem:(id)arg1 inChat:(id)arg2;
- (void)_chat_sendReadReceiptForAllMessages:(id)arg1;
- (void)_chat:(id)arg1 sendReadReceiptForMessages:(id)arg2;
- (void)chatLoadedWithChatIdentifier:(id)arg1 chats:(id)arg2;
- (void)_chatLoadedWithChatIdentifier:(id)arg1 chats:(id)arg2;
- (void)setupComplete;
- (void)_daemonReallyDied:(id)arg1;
- (void)setupComplete:(_Bool)arg1 info:(id)arg2;
- (void)__handleChatReconstructions:(id)arg1;
- (void)_handleChatReconstructions:(id)arg1;
- (void)frequentRepliesQuery:(id)arg1 finishedWithResult:(id)arg2 limit:(unsigned long long)arg3;
- (void)frequentRepliesQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4 limit:(unsigned long long)arg5;
- (void)markAsSpamQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4;
- (void)attachmentQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4;
- (void)historyQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4 limit:(unsigned long long)arg5;
- (void)historicalMessageGUIDsDeleted:(id)arg1 chatGUIDs:(id)arg2 queryID:(id)arg3;
- (void)lastFailedMessageIDChanged:(long long)arg1;
- (void)unreadCountChanged:(long long)arg1;
- (void)chat:(id)arg1 updated:(id)arg2;
- (void)_updateInfo:(id)arg1 forGUID:(id)arg2 updatingUnreadCount:(_Bool)arg3;
- (void)_updateUnreadCountForChat:(id)arg1;
- (void)chat:(id)arg1 isFilteredUpdated:(_Bool)arg2;
- (void)chat:(id)arg1 displayNameUpdated:(id)arg2;
- (void)chat:(id)arg1 propertiesUpdated:(id)arg2;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 member:(id)arg5 statusChanged:(int)arg6;
- (void)leftChat:(id)arg1;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 statusChanged:(int)arg5 handleInfo:(id)arg6;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 error:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 updateProperties:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 invitationReceived:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messagesReceived:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageReceived:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 notifySentMessage:(id)arg5 sendTime:(id)arg6;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageSent:(id)arg5;
- (void)_processMessageForAccount:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 message:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageUpdated:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messagesUpdated:(id)arg5;
- (void)_account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messagesUpdated:(id)arg5;

@end

