//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface DDScannerList : NSObject
{
    int _type;
    NSMutableArray *_waitQueue;
    NSMutableArray *_scannerCache;
    NSMutableArray *_activeScanners;
}

- (_Bool)full;
- (CDUnknownBlockType)dequeueJob;
- (void)enqueueJob:(CDUnknownBlockType)arg1;
- (void)pushBackScanner:(id)arg1;
- (id)scanner;
- (void)activateScanner:(id)arg1;
- (id)getCachedScanner;
- (void)dealloc;
- (id)initWithType:(int)arg1;

@end

