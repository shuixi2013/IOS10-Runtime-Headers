//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@interface CLKComplicationTemplateBreathing : CLKComplicationTemplate
{
    long long _family;
    long long _sessionCount;
}

+ (id)breathingTemplateWithFamily:(long long)arg1;
@property(nonatomic) long long sessionCount; // @synthesize sessionCount=_sessionCount;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end

