//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PHAJobWorkInfoReader : NSObject
{
    NSMutableArray *_workInfosQueue;
    unsigned long long _fetchLimit;
}

@property(nonatomic) unsigned long long fetchLimit; // @synthesize fetchLimit=_fetchLimit;
- (void).cxx_destruct;
- (id)workInfoWithCount:(unsigned long long)arg1 fetchBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) unsigned long long queueCount;
- (id)init;

@end

