//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface BLTBlockHolder : NSObject
{
    CDUnknownBlockType _completion;
    NSObject<OS_dispatch_source> *_fileMonitor;
}

@property(retain, nonatomic) NSObject<OS_dispatch_source> *fileMonitor; // @synthesize fileMonitor=_fileMonitor;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)dealloc;

@end

