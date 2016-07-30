//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSTimer, PDFDocument, PDFPage, PDFPasswordViewController, PDFScrollView, PDFSelection, PDFViewController, PDFViewLayout, UILongPressGestureRecognizer, UIPanGestureRecognizer, UISwipeGestureRecognizer, UITapGestureRecognizer, UITextField;
@protocol PDFViewDelegate, PDFViewPopupManager;

@interface PDFViewPrivate : NSObject
{
    PDFDocument *document;
    PDFScrollView *scrollView;
    PDFViewController *controller;
    PDFSelection *currentSelection;
    _Bool autoScale;
    _Bool scaling;
    double zoomIncrement;
    id <PDFViewDelegate> delegate;
    _Bool delegateWillScale;
    _Bool delegateOrdersPageDrawing;
    double gutterWide;
    _Bool displaysPageBreaks;
    long long displayMode;
    PDFViewLayout *viewLayout;
    _Bool displaysSoloPagesCentered;
    _Bool disableInterPageSpacing;
    _Bool scrollingChangesPages;
    _Bool antiAliasing;
    double greekingThreshold;
    double lineWidthThreshold;
    long long interpolationQuality;
    long long displayBox;
    unsigned long long scrollEntry;
    unsigned long long currentPageIndex;
    unsigned long long firstVisiblePage;
    unsigned long long lastVisiblePage;
    _Bool inhibitAutoScroll;
    PDFPage *fromPage;
    _Bool scheduledPageSync;
    NSMutableArray *destinationHistory;
    long long historyIndex;
    NSArray *highlights;
    PDFPasswordViewController *passwordViewController;
    _Bool hasInstalledTileStats;
    UITextField *tileStatsLabel;
    NSTimer *tileStatsTimer;
    NSObject<PDFViewPopupManager> *popupManager;
    UILongPressGestureRecognizer *longPressGestureRecognizer;
    UIPanGestureRecognizer *panGestureRecognizer;
    UITapGestureRecognizer *tapGestureRecognizer;
    UISwipeGestureRecognizer *swipeGestureRecognizer;
    _Bool needsRotationZoomFix;
}

- (void).cxx_destruct;

@end

