//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface StockNewsItemCollection : NSObject
{
    NSArray *_newsItems;
    double _expirationTime;
}

@property(nonatomic) double expirationTime; // @synthesize expirationTime=_expirationTime;
@property(retain, nonatomic) NSArray *newsItems; // @synthesize newsItems=_newsItems;
- (void).cxx_destruct;
- (id)archiveArray;
- (id)initWithArchiveArray:(id)arg1;

@end

