//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@class NSArray, NSNumber, NSString;

@interface NSDictionary (HKStoreDataAdditions)
@property(readonly, nonatomic) _Bool hk_isInstalled;
@property(readonly, nonatomic) NSArray *hk_categories;
- (id)hk_bestImageURLForWidth:(double)arg1;
- (id)hk_bestCircularImageURLForWidth:(double)arg1;
- (id)_hk_bestImageURLForWidth:(double)arg1 fromArtworkArray:(id)arg2;
- (id)_hk_artwork;
- (id)_hk_circularArtwork;
@property(readonly, nonatomic) NSString *hk_priceFormatted;
- (id)_defaultOffer;
@property(readonly, nonatomic) NSNumber *hk_storeID;
@property(readonly, nonatomic) NSString *hk_bundleId;
@property(readonly, nonatomic) NSString *hk_title;
@end

