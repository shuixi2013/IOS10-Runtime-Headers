//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SCNBufferBinding : NSObject
{
    NSString *_name;
    long long _frequency;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) long long frequency; // @synthesize frequency=_frequency;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;

@end

