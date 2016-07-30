//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface HMCharacteristicBatchRequest : NSObject
{
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _completionHandler;
    NSArray *_requests;
}

+ (id)characteristicBatchRequestWithWriteRequests:(id)arg1;
+ (id)characteristicBatchRequestWithReadRequests:(id)arg1;
+ (_Bool)validateRequestTypes:(id)arg1 requestClass:(Class)arg2;
@property(retain, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
- (void).cxx_destruct;
- (id)initWithRequests:(id)arg1 requestClass:(Class)arg2;

@end

