//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKShape.h>

@interface MKMultiPoint : MKShape
{
    CDStruct_c3b9c2ee *_points;
    unsigned long long _pointCount;
    CDStruct_02837cd9 _boundingRect;
}

@property(readonly, nonatomic) unsigned long long pointCount; // @synthesize pointCount=_pointCount;
- (_Bool)intersectsMapRect:(CDStruct_02837cd9)arg1;
- (struct CLLocationCoordinate2D)coordinate;
- (void)getCoordinates:(struct CLLocationCoordinate2D *)arg1 range:(struct _NSRange)arg2;
- (void)_assignPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
- (void)_setPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
- (void)_setCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
- (void)_wrapAroundTheDateline:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
- (void)_calculateBounds;
- (void)_setBounds:(CDStruct_02837cd9)arg1;
- (CDStruct_02837cd9)boundingMapRect;
- (CDStruct_c3b9c2ee *)points;
- (void)dealloc;

@end

