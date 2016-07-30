//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CNObserver;

__attribute__((visibility("hidden")))
@interface _CNKeyValueObserverHandler : NSObject
{
    id _object;
    NSString *_keyPath;
    id <CNObserver> _observer;
}

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObserving;
- (void)startObservingWithOptions:(unsigned long long)arg1;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 observer:(id)arg3;

@end
