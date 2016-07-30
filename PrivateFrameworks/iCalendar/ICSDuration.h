//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iCalendar/NSCoding-Protocol.h>

@interface ICSDuration : NSObject <NSCoding>
{
    double _duration;
}

+ (id)generateDurationFromICSString:(id)arg1;
+ (id)durationFromICSString:(id)arg1;
+ (id)durationFromRFC2445UTF8String:(const char *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)ICSStringWithOptions:(unsigned long long)arg1;
- (_Bool)isNegative;
- (long long)seconds;
- (long long)minutes;
- (long long)hours;
- (long long)days;
- (long long)weeks;
- (double)timeInterval;
- (id)initWithWeeks:(long long)arg1 days:(long long)arg2 hours:(long long)arg3 minutes:(long long)arg4 seconds:(long long)arg5;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

