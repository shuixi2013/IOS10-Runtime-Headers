//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>

@interface CLVehicleHeadingInternal : NSObject <NSCopying>
{
    struct {
        double trueHeading;
        double timestamp;
    } fHeading;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithClientVehicleHeading:(CDStruct_c3b9c2ee)arg1;

@end

