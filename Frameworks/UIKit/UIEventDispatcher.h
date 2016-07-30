//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIEventFetcherSink-Protocol.h>

@class UIEventEnvironment, UIEventFetcher;

__attribute__((visibility("hidden")))
@interface UIEventDispatcher : NSObject <UIEventFetcherSink>
{
    UIEventEnvironment *_mainEnvironment;
    UIEventFetcher *_eventFetcher;
    struct __CFRunLoopSource *_handleEventQueueRunLoopSource;
    struct __CFRunLoopSource *_collectHIDEventsRunLoopSource;
    struct __CFRunLoop *_runLoop;
}

@property(retain, nonatomic) UIEventEnvironment *mainEnvironment; // @synthesize mainEnvironment=_mainEnvironment;
- (void).cxx_destruct;
- (void)dealloc;
- (void)eventFetcherDidReceiveEvents:(id)arg1;
- (void)signalNextDelivery;
- (void)_installEventRunLoopSources:(struct __CFRunLoop *)arg1;
- (id)initWithApplication:(id)arg1;

@end

