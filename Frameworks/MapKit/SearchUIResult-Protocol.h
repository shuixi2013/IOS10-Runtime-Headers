//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class NSArray, NSString, NSURL, UIImage;
@protocol SearchUIActionButtonItem, SearchUIAuxiliaryInfo;

@protocol SearchUIResult <NSObject>
@property(readonly, nonatomic) _Bool centered;
@property(readonly, copy, nonatomic) NSURL *destinationURL;
@property(readonly, copy, nonatomic) NSArray *rowSections;
@property(readonly, copy, nonatomic) NSArray *cardSections;
@property(readonly, nonatomic) id <SearchUIAuxiliaryInfo> auxiliaryInfo;
@property(readonly, nonatomic) id <SearchUIActionButtonItem> actionButton;
@property(readonly, copy, nonatomic) NSString *footnote;
@property(readonly, nonatomic) NSArray *richTextItems;
@property(readonly, copy, nonatomic) NSString *secondaryTitle;
@property(readonly, nonatomic) unsigned long long titleMaxLines;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) UIImage *image;

@optional
@property(readonly, nonatomic) _Bool isLocalApplicationResult;
@property(readonly, copy, nonatomic) NSURL *cardURL;
@property(readonly, nonatomic) UIImage *secondaryImage;
@property(readonly, nonatomic) double imageCornerRadius;
@property(readonly, nonatomic) _Bool shouldCropImageToCircle;
@property(readonly, nonatomic) _Bool secondaryTitleDetached;
@property(readonly, nonatomic) _Bool requiresTwoLineTitles;
- (void)didDisplayResultWithRefreshHandler:(void (^)(void))arg1;
@end

