//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSValue.h>

@interface CMTimeMappingAsValue : NSValue
{
    CDStruct_82206317 _timeMapping;
}

+ (id)valueWithCMTimeMapping:(CDStruct_82206317)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToValue:(id)arg1;
- (id)description;
- (const char *)objCType;
- (void)getValue:(void *)arg1;
- (CDStruct_82206317)CMTimeMappingValue;

@end

