//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FFReachabilityStatusCache, NSOperationQueue, NSString;

@interface FFReachabilityManager : NSObject
{
    FFReachabilityStatusCache *_statusCache;
    NSOperationQueue *_queryOperationQueue;
    NSString *_serviceIdentifier;
}

+ (id)sharedInstanceForServiceIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (void).cxx_destruct;
- (long long)numberOfScheduledQueries;
- (void)queryDestinations:(id)arg1 updateHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_addDestinationsToQuery:(id)arg1 updateHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_initWithServiceIdentifer:(id)arg1;
- (id)init;

@end

