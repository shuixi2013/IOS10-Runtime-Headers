//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@interface HKWheelchairUseObject : NSObject <NSCopying, NSSecureCoding>
{
    long long _wheelchairUse;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) long long wheelchairUse; // @synthesize wheelchairUse=_wheelchairUse;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithWheelchairUse:(long long)arg1;

@end

