//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MSPIdentifiableFavorite-Protocol.h>
#import <MapKit/MSPImmutableObject-Protocol.h>

@protocol MSPFavorite <MSPImmutableObject, MSPIdentifiableFavorite>
- (void)ifPlace:(void (^)(id <MSPFavoritePlace>))arg1 ifRoute:(void (^)(id <MSPFavoriteRoute>))arg2 ifRegion:(void (^)(id <MSPFavoriteRegion>))arg3 ifTransitLine:(void (^)(id <MSPFavoriteTransitLine>))arg4;
@end

