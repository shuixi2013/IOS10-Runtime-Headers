//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKSelection.h>

@class TSKDocumentRoot;

__attribute__((visibility("hidden")))
@interface TSKDocumentSelection : TSKSelection
{
    TSKDocumentRoot *mDocumentRoot;
}

+ (Class)archivedSelectionClass;
@property(readonly, nonatomic) TSKDocumentRoot *documentRoot; // @synthesize documentRoot=mDocumentRoot;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDocumentRoot:(id)arg1;

@end

