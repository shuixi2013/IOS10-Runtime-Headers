//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface __NSCFURLLocalStreamTaskFromDataTaskDataBlobby : NSObject
{
    NSObject<OS_dispatch_data> *_remainingData;
    CDUnknownBlockType _completion;
}

- (void)callCompletion;
- (int)drain:(struct __CFWriteStream *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

