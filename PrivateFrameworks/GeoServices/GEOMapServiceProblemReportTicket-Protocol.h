//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOMapServiceTraits;

@protocol GEOMapServiceProblemReportTicket <NSObject>
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (void)cancel;
- (void)submitWithHandler:(void (^)(NSString *, _Bool, NSData *, NSError *))arg1 networkActivity:(void (^)(_Bool))arg2;
@end

