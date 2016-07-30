//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOBusiness, NSMutableDictionary;
@protocol MKMapItemVendorDeal;

@interface MKMapItemMetadata : NSObject
{
    _Bool _hasCheckedForVendorDeal;
    GEOBusiness *_business;
    id <MKMapItemVendorDeal> _deal;
    NSMutableDictionary *_imageCache;
}

@property(retain, nonatomic) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
@property(nonatomic) _Bool hasCheckedForVendorDeal; // @synthesize hasCheckedForVendorDeal=_hasCheckedForVendorDeal;
@property(retain, nonatomic) id <MKMapItemVendorDeal> deal; // @synthesize deal=_deal;
@property(readonly, nonatomic) GEOBusiness *business; // @synthesize business=_business;
- (void).cxx_destruct;
- (id)imageForURL:(id)arg1;
- (void)addImage:(id)arg1 forURL:(id)arg2;
- (id)description;
- (id)initWithBusiness:(id)arg1;

@end

