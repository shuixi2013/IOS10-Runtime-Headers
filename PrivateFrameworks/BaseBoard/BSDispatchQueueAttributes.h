//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue_attr;

@interface BSDispatchQueueAttributes : NSObject
{
    NSObject<OS_dispatch_queue_attr> *_attrs;
}

+ (id)concurrent;
+ (id)serial;
+ (id)_attributesWithAttributes:(id)arg1;
@property(nonatomic) NSObject<OS_dispatch_queue_attr> *attributes; // @synthesize attributes=_attrs;
- (id)inactive;
- (id)autoreleaseFrequency:(unsigned long long)arg1;
- (id)serviceClass:(unsigned int)arg1;

@end

