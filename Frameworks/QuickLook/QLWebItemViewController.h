//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLItemViewController.h>

#import <QuickLook/QLScrubViewDataSource-Protocol.h>
#import <QuickLook/UIScrollViewDelegate-Protocol.h>
#import <QuickLook/UIWebPDFViewHandlerDelegate-Protocol.h>
#import <QuickLook/UIWebViewDelegate-Protocol.h>

@class NSData, NSLayoutConstraint, NSMutableArray, NSString, NSURLRequest, QLPDFHanderDelegateForwarder, QLPreviewConverter, QLScrubView, QLWebViewPrintPageHelper, UIWebView;

__attribute__((visibility("hidden")))
@interface QLWebItemViewController : QLItemViewController <UIWebViewDelegate, UIScrollViewDelegate, QLScrubViewDataSource, UIWebPDFViewHandlerDelegate>
{
    NSURLRequest *_previewRequest;
    unsigned int _isLoadedDuringZoom:1;
    unsigned int _loadStarted:1;
    unsigned long long webItemType;
    double _defaultZoom;
    QLScrubView *_scrubView;
    long long _lastPage;
    _Bool _inScroll;
    _Bool _webViewReadyForThumbnailing;
    NSMutableArray *_htmlSlideNodes;
    QLPDFHanderDelegateForwarder *_forwarder;
    CDUnknownBlockType _completionBlock;
    NSLayoutConstraint *_scrubberRightConstraint;
    QLWebViewPrintPageHelper *_printPageHelper;
    _Bool _tryToFit;
    UIWebView *_webView;
    NSData *_pdfPreviewData;
    QLPreviewConverter *_previewConverter;
    NSString *_password;
}

@property(retain) NSString *password; // @synthesize password=_password;
- (void).cxx_destruct;
- (id)printer;
- (void)scrubView:(id)arg1 didSelectPageAtIndex:(unsigned long long)arg2;
- (struct CGSize)scrubView:(id)arg1 pageSizeAtIndex:(unsigned long long)arg2;
- (id)scrubView:(id)arg1 thumbnailOperationForPageAtIndex:(unsigned long long)arg2;
- (long long)numberOfPagesInScrubView:(id)arg1;
- (void)scrollToPage:(unsigned long long)arg1;
- (unsigned long long)currentPageNumber;
- (struct CGSize)pageSizeAtIndex:(long long)arg1;
- (long long)pageCount;
- (void)_hideScrubberIfNeeded:(double)arg1;
- (void)_showScrubberIfNeeded:(double)arg1;
- (void)_updateScrubberForTraitCollection:(id)arg1;
@property(readonly) QLScrubView *scrubView;
- (void)pdfViewHandlerCompletedLayoutAndIsUnlocked:(id)arg1;
- (struct CGPDFDocument *)_getCGPDFDocumentRef;
- (id)alertViewForUIWebPDFViewHandler:(id)arg1;
- (void)uiWebView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (struct CGPoint)originForPDFPageLabelViewWithHandler:(id)arg1 proposedOrigin:(struct CGPoint)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)uiWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)scrollViewDidScroll:(id)arg1;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)uiWebView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (id)_htmlSlideNodes;
- (id)_htmlPageXPath;
- (void)previewBecameFullScreen:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2;
- (_Bool)shouldRecognizeGestureRecognizer:(id)arg1;
- (void)performCompletionBlockWithError:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)registeredKeyCommands;
- (_Bool)canEnterFullScreen;
- (_Bool)automaticallyUpdateScrollViewContentInset;
- (_Bool)automaticallyUpdateScrollViewContentOffset;
- (id)scrollView;
@property(readonly) QLPreviewConverter *previewConverter; // @synthesize previewConverter=_previewConverter;
@property(readonly) unsigned long long webItemType;
@property(readonly) NSData *pdfPreviewData; // @synthesize pdfPreviewData=_pdfPreviewData;
@property(readonly) UIWebView *webView; // @synthesize webView=_webView;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (long long)preferredWhitePointAdaptivityStyle;
- (_Bool)canPinchToDismiss;
- (_Bool)canSwipeToDismiss;
- (void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

