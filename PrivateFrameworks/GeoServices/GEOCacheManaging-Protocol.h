//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOMapServiceTraits, GEOPDComponent, GEOPDPlace, NSArray;

@protocol GEOCacheManaging <NSObject>
- (void)refreshLOIReverseGeocodedMapItems:(NSArray *)arg1 updatedCoordinates:(NSArray *)arg2 traits:(GEOMapServiceTraits *)arg3 handler:(void (^)(NSArray *, NSError *))arg4;
- (void)refreshLOIAssociatedMapItems:(NSArray *)arg1 updatedCoordinates:(NSArray *)arg2 traits:(GEOMapServiceTraits *)arg3 handler:(void (^)(NSArray *, NSError *))arg4;
- (long long)invalidationStateForComponent:(GEOPDComponent *)arg1;
- (long long)invalidationStateForPlace:(GEOPDPlace *)arg1;
- (void)snapshotWithFilePathArray:(NSArray *)arg1 handler:(void (^)(NSDictionary *))arg2;
- (void)checkHasExpiredWithInvalidationDatas:(NSArray *)arg1 handler:(void (^)(NSArray *))arg2;
- (void)versionsForDomains:(NSArray *)arg1 handler:(void (^)(NSDictionary *))arg2;
@end

