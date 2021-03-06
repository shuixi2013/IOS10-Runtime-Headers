//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface TLFileLoggingController : NSObject
{
    NSObject<OS_dispatch_queue> *_serialLoggingQueue;
}

+ (id)sharedFileLoggingController;
- (void).cxx_destruct;
- (void)_registerLoggingConfiguration;
- (id)_loggingDirectory;
- (void)logMessage:(id)arg1 fileName:(const char *)arg2 functionName:(const char *)arg3 lineNumber:(unsigned long long)arg4;
- (id)init;

@end

