//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCTodayWidgetDropboxData-Protocol.h>

@class NSSet, NSString;
@protocol FCDerivedPersonalizationData><NSCoding;

@protocol FCMutableTodayWidgetData <FCTodayWidgetDropboxData>
@property(copy, nonatomic) NSString *feldsparID;
@property(copy, nonatomic) NSSet *recentlyReadArticleIDs;
@property(copy, nonatomic) NSSet *highestRankedSubscribedTagIDs;
@property(copy, nonatomic) NSSet *purchasedTagIDs;
@property(copy, nonatomic) NSSet *mutedTagIDs;
@property(copy, nonatomic) id <FCDerivedPersonalizationData><NSCoding> derivedPersonalizationData;
@end

