//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, NSMutableDictionary, PDFPage, PDFSelection, UIImage;

@interface PDFPageSelectionLayerPrivate : NSObject
{
    PDFPage *page;
    long long displayBox;
    PDFSelection *selection;
    NSMutableDictionary *selectionRects;
    _Bool isOnFirstPage;
    _Bool isOnLastPage;
    struct CGRect firstPageRect;
    struct CGRect lastPageRect;
    CALayer *selectionStartHandle;
    CALayer *selectionEndHandle;
    UIImage *magnifierImage;
    CALayer *magnifierLayer;
    struct CGSize magnifierSize;
    _Bool isZooming;
}

- (void).cxx_destruct;

@end

