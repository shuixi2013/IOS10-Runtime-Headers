//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/NSObject-Protocol.h>

@class QLItem;

@protocol QLRemotePreviewService <NSObject>
- (void)previewDidDisappear:(_Bool)arg1;
- (void)previewWillDisappear:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)previewWillFinishAppearing;
- (void)previewWillAppear:(_Bool)arg1;
- (void)previewBecameFullScreen:(_Bool)arg1 animated:(_Bool)arg2;
- (void)getPrinterProxyWithCompletionHandler:(void (^)(id <QLPrintingProtocol>))arg1;
- (void)loadPreviewFromPreviewItem:(QLItem *)arg1 withCompletionHandler:(void (^)(NSError *, NSDictionary *))arg2;
@end

