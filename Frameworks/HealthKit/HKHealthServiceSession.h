//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKHealthService, NSArray, NSLock;

@interface HKHealthServiceSession : NSObject
{
    NSArray *_interestedTransitoryKeys;
    CDUnknownBlockType _transitoryDataHandler;
    HKHealthService *_service;
    NSLock *_propertyLock;
    unsigned long long _sessionIdentifier;
    CDUnknownBlockType _sessionHandler;
    CDUnknownBlockType _characteristicsHandler;
}

@property(copy, nonatomic) CDUnknownBlockType characteristicsHandler; // @synthesize characteristicsHandler=_characteristicsHandler;
@property(copy, nonatomic) CDUnknownBlockType sessionHandler; // @synthesize sessionHandler=_sessionHandler;
@property(nonatomic) unsigned long long sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain, nonatomic) NSLock *propertyLock; // @synthesize propertyLock=_propertyLock;
@property(readonly, nonatomic) HKHealthService *service; // @synthesize service=_service;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType transitoryDataHandler;
@property(retain) NSArray *interestedTransitoryKeys;
- (id)initWithService:(id)arg1;

@end

