//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/NSObject-Protocol.h>

@class CoreDAVTask, NSError;

@protocol CoreDAVTaskDelegate <NSObject>

@optional
- (void)task:(CoreDAVTask *)arg1 didFinishWithError:(NSError *)arg2;
@end

