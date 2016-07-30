//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIWebFindOnPageHighlighter-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIView, UIWebBrowserView, UIWebPDFViewHandler;
@protocol UIWebFindOnPageHighlighterDelegate;

__attribute__((visibility("hidden")))
@interface UIWebBrowserFindOnPageHighlighter : NSObject <UIWebFindOnPageHighlighter>
{
    NSMutableArray *_highlightBubbleViews;
    NSArray *_pdfHighlightViews;
    UIView *_highlightHostView;
    UIWebBrowserView *_browserView;
    UIWebPDFViewHandler *_pdfHandler;
    _Bool _zoomToHighlightSelection;
    id <UIWebFindOnPageHighlighterDelegate> _delegate;
    NSString *_searchText;
    unsigned long long _numberOfMatches;
    unsigned long long _highlightedMatchIndex;
}

+ (_Bool)expandedRectsWouldIntersect:(id)arg1;
@property(readonly, nonatomic) unsigned long long highlightedMatchIndex; // @synthesize highlightedMatchIndex=_highlightedMatchIndex;
@property(readonly, nonatomic) unsigned long long numberOfMatches; // @synthesize numberOfMatches=_numberOfMatches;
@property(nonatomic) id <UIWebFindOnPageHighlighterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void)search:(id)arg1 hasPartialResults:(id)arg2;
- (void)searchDidFinish:(id)arg1;
- (void)searchLimitHit:(id)arg1;
- (void)searchWasCancelled:(id)arg1;
- (void)searchDidTimeOut:(id)arg1;
- (void)searchDidBegin:(id)arg1;
- (void)highlightPreviousMatch;
- (void)highlightNextMatch;
- (void)_highlightFindOnPageMatch:(_Bool)arg1;
- (void)_highlightFindOnPageMatchForPDF:(_Bool)arg1 withPDFHandler:(id)arg2;
- (id)_currentPDFSearchResult;
- (_Bool)_updateHighlightedMatchIndex:(_Bool)arg1;
- (void)setSearchText:(id)arg1 matchLimit:(unsigned long long)arg2;
- (unsigned long long)findOnPageOptions;
- (_Bool)_highlightSelection;
- (_Bool)updateHighlightBubbleWobble:(_Bool)arg1;
- (void)setSelectionRect:(struct CGRect)arg1 textRects:(id)arg2 contentViews:(id)arg3 wobble:(_Bool)arg4;
- (void)setSelectionRect:(struct CGRect)arg1 textRects:(id)arg2 contentImage:(struct CGImage *)arg3 wobble:(_Bool)arg4;
- (void)_setSelectionRect:(struct CGRect)arg1 textRects:(id)arg2 contentImage:(struct CGImage *)arg3 contentViews:(id)arg4 wobble:(_Bool)arg5;
- (void)_clearHighlightViews;
- (void)_addContentViewAtIndex:(unsigned long long)arg1 withRect:(struct CGRect)arg2;
- (void)clearBrowserView;
- (void)dealloc;
- (void)_commonInitialize;
- (id)initWithPDFViewHandler:(id)arg1;
- (id)initWithBrowserView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

