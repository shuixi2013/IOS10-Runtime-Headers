//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNVirtualSchedulerJob : NSObject
{
    unsigned long long _time;
    CDUnknownBlockType _block;
}

+ (id)jobWithTime:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
@property(readonly, copy) CDUnknownBlockType block; // @synthesize block=_block;
@property unsigned long long time; // @synthesize time=_time;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTime:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;

@end

