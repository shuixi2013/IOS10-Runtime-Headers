//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumberFormatter;
@protocol OS_dispatch_queue;

@interface MCFormatterVendor : NSObject
{
    NSNumberFormatter *_numberFormatter;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)_localeDidChange:(id)arg1;
- (id)numberFormatter;

@end

