//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class FCFeedEdition, NSDate;

@protocol FCFeedPaginating <NSObject>
- (FCFeedEdition *)editionFollowingEdition:(FCFeedEdition *)arg1;
- (FCFeedEdition *)editionAtDate:(NSDate *)arg1;
@end

