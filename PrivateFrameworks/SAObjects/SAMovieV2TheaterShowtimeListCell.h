//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString, SADistance, SAMovieV2ShowtimeSnippet;

@interface SAMovieV2TheaterShowtimeListCell : SADomainObject
{
}

+ (id)theaterShowtimeListCellWithDictionary:(id)arg1 context:(id)arg2;
+ (id)theaterShowtimeListCell;
@property(copy, nonatomic) NSString *theaterName;
@property(retain, nonatomic) SAMovieV2ShowtimeSnippet *showtimeSnippet;
@property(retain, nonatomic) SADistance *relativeDistance;
@property(nonatomic) _Bool bookable;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

