//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@class NSArray;
@protocol CNForkJoinResultReportingStrategy;

__attribute__((visibility("hidden")))
@interface _CNForkJoinObservable : CNObservable
{
    NSArray *_observables;
    id <CNForkJoinResultReportingStrategy> _resultReportingStrategy;
}

+ (id)progressiveForkJoin:(id)arg1;
+ (id)forkJoin:(id)arg1;
- (void).cxx_destruct;
- (id)subscribe:(id)arg1;
- (id)initWithObservables:(id)arg1 reportingStrategy:(id)arg2;

@end

