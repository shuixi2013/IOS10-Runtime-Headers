//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MapKit/_MKMapViewSuspendedEffectsToken-Protocol.h>

@class MKMapView, NSString;

__attribute__((visibility("hidden")))
@interface _MKMapViewSuspendedEffectsToken : NSObject <_MKMapViewSuspendedEffectsToken>
{
    _Bool _invalidated;
    MKMapView *_owner;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (id)initWithOwner:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

