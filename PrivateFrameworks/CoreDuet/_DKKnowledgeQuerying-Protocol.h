//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSObject, _DKQuery;
@protocol OS_dispatch_queue;

@protocol _DKKnowledgeQuerying
- (void)executeQuery:(_DKQuery *)arg1 responseQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)executeQuery:(_DKQuery *)arg1 responseQueue:(NSObject<OS_dispatch_queue> *)arg2 withCompletion:(void (^)(NSObject *, NSError *))arg3;
- (NSObject *)executeQuery:(_DKQuery *)arg1 error:(id *)arg2;
@end

