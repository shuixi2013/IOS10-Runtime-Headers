//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface WFAggregateDictionary : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_domain;
    unsigned long long _requestFailures;
    unsigned long long _requestSuccesses;
}

+ (id)defaultAggregateDictionary;
@property(nonatomic) unsigned long long requestSuccesses; // @synthesize requestSuccesses=_requestSuccesses;
@property(nonatomic) unsigned long long requestFailures; // @synthesize requestFailures=_requestFailures;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)_queue_addValueForScalarKey:(id)arg1 value:(long long)arg2;
- (void)logRequestSuccess;
- (void)logRequestFailure;
- (id)init;

@end

