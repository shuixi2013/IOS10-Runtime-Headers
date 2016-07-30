//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MapKit/_MKPlaceItem-Protocol.h>

@class CNContact, EKCalendarItem, MKMapItem, NSString;

@interface _MKMapItemPlaceItem : NSObject <_MKPlaceItem>
{
    MKMapItem *_mapItem;
    unsigned long long _options;
    _Bool _isIntermediateMapItem;
}

+ (id)placeItemWithMapItem:(id)arg1 options:(unsigned long long)arg2 isIntermediateMapItem:(_Bool)arg3;
+ (id)placeItemWithMapItem:(id)arg1 options:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isIntermediateMapItem;
- (void)setIsSuggestedFavorite:(_Bool)arg1;
@property(readonly, nonatomic) unsigned long long options;
@property(readonly, nonatomic) _Bool isContactPersisted;
@property(readonly, nonatomic) CNContact *contact;
@property(readonly, nonatomic) EKCalendarItem *calendarItem;
@property(readonly, nonatomic) MKMapItem *mapItem;
@property(readonly, nonatomic) NSString *name;

@end

