//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface CalStopwatch : NSObject
{
    _Bool _isRunning;
    unsigned long long _lastStartTime;
    unsigned long long _elapsedTime;
    _Bool _hasValidElapsedTime;
    NSMutableDictionary *_events;
    _Bool _usesSignalFlags;
}

@property _Bool usesSignalFlags; // @synthesize usesSignalFlags=_usesSignalFlags;
- (void).cxx_destruct;
- (double)markEventEnd:(id)arg1;
- (double)markEventSplit:(id)arg1;
- (void)markEventStart:(id)arg1;
- (id)elapsedTimeAsString:(int)arg1;
- (unsigned long long)elapsedTimeAsNumber:(int)arg1;
- (unsigned long long)elapsedTimeInNanoseconds;
- (void)reset;
- (void)stop;
- (void)start;
- (id)description;
- (id)init;

@end

