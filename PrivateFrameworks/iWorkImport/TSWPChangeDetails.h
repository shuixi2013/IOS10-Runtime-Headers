//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSDAnnotationHosting-Protocol.h>

@class NSDate, NSString, TSDCommentStorage, TSKAnnotationAuthor, TSPObject, TSWPChange;

__attribute__((visibility("hidden")))
@interface TSWPChangeDetails : NSObject <TSDAnnotationHosting>
{
    TSWPChange *_change;
    NSDate *_dateForLastChangeStringUpdate;
    NSString *_changeTrackingContentString;
    NSString *_changeTrackingTitleString;
    NSString *_formattedString;
}

@property(retain, nonatomic) NSString *formattedString; // @synthesize formattedString=_formattedString;
@property(retain, nonatomic) NSString *changeTrackingTitleString; // @synthesize changeTrackingTitleString=_changeTrackingTitleString;
@property(retain, nonatomic) NSString *changeTrackingContentString; // @synthesize changeTrackingContentString=_changeTrackingContentString;
@property(retain, nonatomic) NSDate *dateForLastChangeStringUpdate; // @synthesize dateForLastChangeStringUpdate=_dateForLastChangeStringUpdate;
@property(retain, nonatomic) TSWPChange *change; // @synthesize change=_change;
- (void)commentWillBeAddedToDocumentRoot;
@property(readonly, copy) NSString *description;
- (void)p_updateChangeStrings;
- (struct _NSRange)p_rangeInStorage;
@property(readonly, nonatomic) int annotationDisplayStringType;
@property(readonly, nonatomic) int annotationType;
@property(readonly, nonatomic) NSString *changeTrackingContentFormatString;
@property(readonly, nonatomic) NSDate *date;
- (void)setAuthor:(id)arg1;
@property(readonly, nonatomic) TSKAnnotationAuthor *author;
@property(readonly, nonatomic) TSPObject *hostingModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEquivalentToObject:(id)arg1;
- (_Bool)isEqualToChangeDetails:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(copy, nonatomic) TSDCommentStorage *storage;
@property(readonly) Class superclass;

@end

