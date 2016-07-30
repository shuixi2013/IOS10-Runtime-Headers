//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSupport/MSPMutableFavorite.h>

#import <MapsSupport/MSPFavoriteRoute-Protocol.h>

@class GEOStorageRouteRequestStorage, NSString, NSUUID;

@interface MSPMutableFavoriteRoute : MSPMutableFavorite <MSPFavoriteRoute>
{
}

+ (id)mutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)immutableObjectClass;
- (id)transferToImmutableIfValidWithError:(out id *)arg1;
- (int)transportType;
- (id)endWaypoint;
- (id)startWaypoint;
@property(copy, nonatomic) GEOStorageRouteRequestStorage *routeRequestStorage;
- (id)initWithBookmarkStorage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *storageIdentifier;
@property(readonly) Class superclass;

@end

