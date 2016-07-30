//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOComposedRoute, GEOMapServiceTraits, GEORouteMatch, NSString;
@protocol GEORoutePreloadSessionDelegate;

@protocol GEORoutePreloadSession <NSObject>
@property(nonatomic) unsigned long long networkQuality;
@property __weak id <GEORoutePreloadSessionDelegate> delegate;
@property(readonly, nonatomic) GEOComposedRoute *route;
- (void)setTraits:(GEOMapServiceTraits *)arg1;
- (void)preloaderLog:(NSString *)arg1;
- (void)updateWithRouteMatch:(GEORouteMatch *)arg1;
- (void)getPreloadSetCoordinates:(CDStruct_c3b9c2ee *)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long *)arg3;
- (int)preloadStateForTile:(const struct _GEOTileKey *)arg1;
- (void)addTileSetStyle:(int)arg1;
- (void)start;
- (void)stop;
- (void)stopLoading;
- (void)beginLoading;
- (_Bool)loggingEnabled;
- (_Bool)fullDebuggingEnabled;
- (_Bool)minimalDebuggingEnabled;
- (_Bool)isSufficientlyLoaded;
@end

