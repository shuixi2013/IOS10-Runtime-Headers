//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TPDocumentRoot;
@protocol TSWPFootnoteMarkProvider;

__attribute__((visibility("hidden")))
@interface TPFootnoteLayoutController : NSObject
{
    TPDocumentRoot *_documentRoot;
    _Bool _bumpedDocumentEndnotesForPageBreak;
}

@property(readonly, nonatomic) id <TSWPFootnoteMarkProvider> footnoteMarkProvider; // @synthesize footnoteMarkProvider=_documentRoot;
- (id)p_footnoteReferenceStoragesInFootnoteIndexRange:(struct _NSRange)arg1;
- (id)p_layoutForFootnoteReferenceStorage:(id)arg1;
- (unsigned long long)p_layoutFootnotesInRange:(struct _NSRange)arg1 intoFootnoteContainer:(id)arg2 maxHeight:(double)arg3 measure:(_Bool)arg4 inflating:(_Bool)arg5;
- (void)removeDeletedFootnoteInContainer:(id)arg1;
- (struct _NSRange)footnoteLayoutRangeForPageCharRange:(struct _NSRange)arg1;
- (struct _NSRange)endnoteRangeForSectionCharRange:(struct _NSRange)arg1 isLastSection:(_Bool)arg2;
- (void)inflateFootnotesInRange:(struct _NSRange)arg1 intoFootnoteContainer:(id)arg2;
- (struct _NSRange)layoutFootnotesFromIndex:(unsigned long long)arg1 intoFootnoteContainer:(id)arg2 maxHeight:(double)arg3 pageCharRange:(struct _NSRange)arg4 sectionCharRange:(struct _NSRange)arg5 isLastSection:(_Bool)arg6;
- (id)initWithDocumentRoot:(id)arg1;

@end

