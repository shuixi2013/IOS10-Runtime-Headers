//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSKCOIntermediateOperationEnumerator-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSKCOOperationArrayEnumerator : NSObject <TSKCOIntermediateOperationEnumerator>
{
    NSMutableArray *mOperationArray;
    unsigned long long mNextIndex;
}

- (id)description;
@property(readonly, nonatomic) _Bool hasOperations;
- (void)reset;
- (void)appendOperation:(id)arg1;
- (void)replaceOperation:(id)arg1;
- (id)nextOperationOnAddress:(id)arg1;
- (id)nextOperation;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOperationEnumerator:(id)arg1;

@end

