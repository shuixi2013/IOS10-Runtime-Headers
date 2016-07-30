//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableData, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface CKFetchRecordsAssetInfo : NSObject
{
    NSError *_error;
    NSMutableData *_assetContent;
    NSMutableIndexSet *_byteRanges;
}

@property(retain, nonatomic) NSMutableIndexSet *byteRanges; // @synthesize byteRanges=_byteRanges;
@property(retain, nonatomic) NSMutableData *assetContent; // @synthesize assetContent=_assetContent;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)assetContentWithError:(id *)arg1;
- (_Bool)isContiguous;
- (void)writeData:(id)arg1 atOffset:(id)arg2;
- (id)init;

@end

