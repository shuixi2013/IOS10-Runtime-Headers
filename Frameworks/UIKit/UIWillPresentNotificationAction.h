//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/BSAction.h>

@class NSObject, UNNotification;
@protocol OS_dispatch_semaphore;

@interface UIWillPresentNotificationAction : BSAction
{
    NSObject<OS_dispatch_semaphore> *_decodeSemaphore;
    UNNotification *_cachedNotification;
}

- (void).cxx_destruct;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (long long)UIActionType;
- (id)_trigger;
@property(readonly, nonatomic) _Bool isRemote;
@property(readonly, nonatomic) _Bool isLocal;
@property(readonly, retain, nonatomic) UNNotification *notification;
- (id)initWithNotification:(id)arg1 timeout:(double)arg2 withHandler:(CDUnknownBlockType)arg3;

@end

