//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDuet/NSObject-Protocol.h>

@class NSArray;

@protocol _CDPModel <NSObject>
- (void)makePredictionForGroup:(NSArray *)arg1 clientType:(long long)arg2 limit:(long long)arg3 completionHandler:(void (^)(_CDPPredictionResult *))arg4;
- (void)loadModel:(void (^)(NSError *))arg1;
@end

