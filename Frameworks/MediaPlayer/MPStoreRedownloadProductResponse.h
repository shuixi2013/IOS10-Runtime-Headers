//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPStoreRedownloadProductItem, NSDictionary;

@interface MPStoreRedownloadProductResponse : NSObject
{
    NSDictionary *_responseDictionary;
}

@property(readonly, copy, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
- (void).cxx_destruct;
@property(readonly, nonatomic) MPStoreRedownloadProductItem *item;
- (id)initWithResponseDictionary:(id)arg1;

@end

