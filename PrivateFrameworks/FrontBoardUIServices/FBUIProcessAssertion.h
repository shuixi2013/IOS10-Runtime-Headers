//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, NSString;
@protocol FBUIProcess;

@interface FBUIProcessAssertion : NSObject
{
    BKSProcessAssertion *_assertion;
    id <FBUIProcess> _process;
    long long _type;
    unsigned long long _flags;
    NSString *_name;
    _Bool _invalidated;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) __weak id <FBUIProcess> process; // @synthesize process=_process;
- (void)invalidate;
- (void)relinquish;
- (void)acquireWithFlags:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithProcess:(id)arg1 type:(long long)arg2 name:(id)arg3;

@end

