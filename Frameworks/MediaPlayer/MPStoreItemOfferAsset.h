//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface MPStoreItemOfferAsset : NSObject
{
    NSDictionary *_lookupDictionary;
}

@property(readonly, copy, nonatomic) NSDictionary *lookupDictionary; // @synthesize lookupDictionary=_lookupDictionary;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long size;
@property(readonly, copy, nonatomic) NSURL *previewURL;
@property(readonly, nonatomic) double previewDuration;
@property(readonly, copy, nonatomic) NSString *flavor;
@property(readonly, nonatomic) double duration;
- (id)initWithLookupDictionary:(id)arg1;

@end

