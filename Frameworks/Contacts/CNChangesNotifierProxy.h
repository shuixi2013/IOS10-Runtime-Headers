//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Contacts/CNChangeNotificationReceiver-Protocol.h>

@class NSCountedSet, NSMapTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CNChangesNotifierProxy : NSObject <CNChangeNotificationReceiver>
{
    NSMapTable *_removalBlocks;
    NSMapTable *_notifyingBlocks;
    NSMutableDictionary *_notificationForwardingMapping;
    NSCountedSet *_supressedNotificationNames;
    NSMutableDictionary *_notificationsToBeSentOnceAllowed;
    NSObject<OS_dispatch_queue> *_notifierQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notifierQueue; // @synthesize notifierQueue=_notifierQueue;
@property(retain, nonatomic) NSMutableDictionary *notificationsToBeSentOnceAllowed; // @synthesize notificationsToBeSentOnceAllowed=_notificationsToBeSentOnceAllowed;
@property(retain, nonatomic) NSCountedSet *supressedNotificationNames; // @synthesize supressedNotificationNames=_supressedNotificationNames;
@property(readonly, nonatomic) NSMutableDictionary *notificationForwardingMapping; // @synthesize notificationForwardingMapping=_notificationForwardingMapping;
@property(retain, nonatomic) NSMapTable *notifyingBlocks; // @synthesize notifyingBlocks=_notifyingBlocks;
@property(retain, nonatomic) NSMapTable *removalBlocks; // @synthesize removalBlocks=_removalBlocks;
- (void)waitForCurrentTasksToFinish;
- (void)receiveNotificationName:(id)arg1 fromSender:(id)arg2 userInfo:(id)arg3 calledFromNotifierQueue:(_Bool)arg4;
- (void)receiveNotificationName:(id)arg1 fromSender:(id)arg2 userInfo:(id)arg3;
- (void)stopSupressionOfNotificationName:(id)arg1;
- (void)supressNotificationName:(id)arg1;
- (void)removeAllRegisteredNotificationSources;
- (void)forwardNotificationName:(id)arg1 asNotificationName:(id)arg2;
- (void)postNotificationName:(id)arg1 fromSender:(id)arg2 userInfo:(id)arg3 shouldForwardExternally:(_Bool)arg4 calledFromNotifierQueue:(_Bool)arg5;
- (void)postNotificationName:(id)arg1 fromSender:(id)arg2;
- (void)addNotificationPoster:(CDUnknownBlockType)arg1 forNotificationName:(id)arg2;
- (void)addListenerForNotificationName:(id)arg1 registration:(CDUnknownBlockType)arg2 removal:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

