//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSKCommandTrace : NSObject
{
    NSMutableArray *_items;
}

+ (unsigned long long)commandTraceLimit;
+ (void)initialize;
- (id)descriptionMarkingCommandsThatReferenceUUIDs:(id)arg1;
- (id)description;
- (void)addCommandTraceItem:(id)arg1;
- (void)didExecuteCommand:(id)arg1 phase:(long long)arg2;
- (void)endMarkWithDescription:(id)arg1;
- (void)beginMarkWithDescription:(id)arg1;
- (void)dealloc;
- (id)init;

@end
