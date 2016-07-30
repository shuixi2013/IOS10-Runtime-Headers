//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@class CNCancelationToken;
@protocol CNScheduler;

__attribute__((visibility("hidden")))
@interface _CNGeneratorObservable : CNObservable
{
    id _state;
    CDUnknownBlockType _condition;
    CDUnknownBlockType _nextState;
    CDUnknownBlockType _resultSelector;
    CDUnknownBlockType _delay;
    id <CNScheduler> _scheduler;
    CNCancelationToken *_cancelable;
}

- (void).cxx_destruct;
- (void)updateState;
- (void)sendCurrentStateToObserver:(id)arg1;
- (_Bool)isFinished;
- (void)scheduleNextResultForObserver:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)initWithInitialState:(id)arg1 condition:(CDUnknownBlockType)arg2 nextState:(CDUnknownBlockType)arg3 resultSelector:(CDUnknownBlockType)arg4 delay:(CDUnknownBlockType)arg5 scheduler:(id)arg6;

@end

