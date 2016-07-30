//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSMutableCopying-Protocol.h>
#import <NewsCore/NSObject-Protocol.h>

@class NSDate, NSString;

@protocol FCReadingHistoryItem <NSObject, NSCopying, NSMutableCopying>
@property(readonly, nonatomic) unsigned long long articleLikingStatus;
@property(readonly, nonatomic) _Bool hasArticleBeenConsumed;
@property(readonly, nonatomic) _Bool hasArticleBeenMarkedOffensive;
@property(readonly, nonatomic) _Bool hasArticleBeenSeen;
@property(readonly, nonatomic) _Bool hasArticleBeenRead;
@property(readonly, copy, nonatomic) NSDate *lastVisitedAt;
@property(readonly, copy, nonatomic) NSString *articleID;
@property(readonly, copy, nonatomic) NSString *identifier;
@end

