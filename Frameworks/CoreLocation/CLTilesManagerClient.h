//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLTilesManagerClientInternal;

@interface CLTilesManagerClient : NSObject
{
    CLTilesManagerClientInternal *_internal;
}

+ (id)sharedClient;
+ (void)initialize;
- (_Bool)unregisterFrom:(id)arg1;
- (_Bool)registerTo:(id)arg1 onQueue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)sendNotificationRegistrationMessage:(id)arg1 isRegister:(_Bool)arg2;
- (_Bool)precacheHint:(id)arg1 onQueue:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;
- (_Bool)executeAsynchronousQuery:(id)arg1 onQueue:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;
- (void)onNotificationReceived:(id)arg1;
- (void)reconnect;

@end

