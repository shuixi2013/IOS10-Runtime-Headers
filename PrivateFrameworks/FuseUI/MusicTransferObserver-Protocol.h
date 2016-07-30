//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class MusicTransferAggregator, NSIndexSet;

@protocol MusicTransferObserver <NSObject>

@optional
- (void)transferAggregator:(MusicTransferAggregator *)arg1 uploadStatusChangedAtIndexes:(NSIndexSet *)arg2;
- (void)transferAggregatorUploadsDidChange:(MusicTransferAggregator *)arg1;
- (void)transferAggregator:(MusicTransferAggregator *)arg1 downloadStatusChangedAtIndexes:(NSIndexSet *)arg2;
- (void)transferAggregatorDownloadsDidChange:(MusicTransferAggregator *)arg1;
- (void)transferAggregatorDidChange:(MusicTransferAggregator *)arg1;
@end

