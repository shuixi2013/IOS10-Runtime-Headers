//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/MTLCommandQueueDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLCommandQueueDescriptorInternal : MTLCommandQueueDescriptor
{
    unsigned long long _maxCommandBufferCount;
    unsigned long long _qosClass;
    long long _qosRelativePriority;
    _Bool _openGLQueue;
}

@property _Bool isOpenGLQueue; // @synthesize isOpenGLQueue=_openGLQueue;
- (void)setQosRelativePriority:(long long)arg1;
- (long long)qosRelativePriority;
- (void)setQosClass:(unsigned long long)arg1;
- (unsigned long long)qosClass;
- (void)setMaxCommandBufferCount:(unsigned long long)arg1;
- (unsigned long long)maxCommandBufferCount;
- (id)description;
- (id)init;

@end

