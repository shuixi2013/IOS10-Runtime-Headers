//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SBSApplicationClient;
@protocol OS_dispatch_queue;

@interface SBSApplicationService : NSObject
{
    SBSApplicationClient *_client;
}

- (void).cxx_destruct;
- (void)invalidate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property(readonly, nonatomic) SBSApplicationClient *client;
- (void)dealloc;
- (id)init;

@end

