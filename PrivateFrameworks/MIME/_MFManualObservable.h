//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MIME/MFObservable.h>

#import <MIME/MFObserver-Protocol.h>

@class MFPromise, NSArray, NSLock, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _MFManualObservable : MFObservable <MFObserver>
{
    NSLock *_lock;
    MFPromise *_promise;
    NSMutableArray *_observers;
}

@property(readonly, getter=_observers) NSArray *observers;
- (void)_removeObserver:(id)arg1;
- (id)_addObserver:(id)arg1;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

