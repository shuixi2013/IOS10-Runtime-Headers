//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOServiceRequester.h>

__attribute__((visibility("hidden")))
@interface GEOPlaceDataRequester : GEOServiceRequester
{
}

+ (id)sharedInstance;
+ (unsigned char)_requestCounterInfoTypeForRequest:(id)arg1;
+ (int)_experimentDispatcherRequestTypeForRequest:(id)arg1;
+ (long long)_experimentType;
+ (id)_serviceTypeNumber;
+ (_Bool)_shouldThrottleRequests;
+ (unsigned long long)_urlType;
- (id)_validateResponse:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)startWithRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

