//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKExporter-Protocol.h>

@class NSURL;
@protocol TSKImportExportDelegate;

@protocol TSKRenderingExporter <TSKExporter>
- (_Bool)hasMoreThanOnePageToPrint;
- (_Bool)paginate;
- (void)setPaginate:(_Bool)arg1;
- (unsigned long long)pageCount;
- (double)progressForCurrentPage;
- (void)performBlockWithImager:(void (^)(TSDImager *))arg1;
- (struct CGRect)unscaledClipRect;
- (struct CGRect)boundsRect;
- (_Bool)drawCurrentPageInContext:(struct CGContext *)arg1 viewScale:(double)arg2 unscaledClipRect:(struct CGRect)arg3 createPage:(_Bool)arg4;
- (_Bool)setInfosToCurrentPage;
- (_Bool)incrementPage;
- (_Bool)preparePage:(unsigned long long)arg1;
- (void)teardown;
- (void)setup;
- (_Bool)exportToURL:(NSURL *)arg1 pageNumber:(unsigned long long)arg2 delegate:(id <TSKImportExportDelegate>)arg3 error:(id *)arg4;
@end

