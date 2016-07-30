//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLook/QLPreviewControllerDataSource-Protocol.h>
#import <QuickLook/QLPreviewItemProvider-Protocol.h>

@class NSPointerArray, QLDataSource;
@protocol QLPreviewItemProvider;

__attribute__((visibility("hidden")))
@interface QLPreviewItemStore : NSObject <QLPreviewItemProvider, QLPreviewControllerDataSource>
{
    NSPointerArray *_cache;
    id <QLPreviewItemProvider> _itemProvider;
    QLDataSource *_internalItemProvider;
    _Bool _isArchive;
    struct _NSRange _possibleRange;
}

@property(readonly) _Bool isArchive; // @synthesize isArchive=_isArchive;
@property(readonly) struct _NSRange possibleRange; // @synthesize possibleRange=_possibleRange;
@property(nonatomic) __weak id <QLPreviewItemProvider> itemProvider; // @synthesize itemProvider=_itemProvider;
- (void).cxx_destruct;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (long long)indexOfPreviewItem:(id)arg1;
- (void)previewItemAtIndex:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly) unsigned long long numberOfItems;
- (void)clearCache;
- (void)clearItems;
- (void)dealloc;
- (void)reloadWithNumberOfPreviewItems:(unsigned long long)arg1;
- (void)_commonInit;
- (id)initWithContentsOfPreviewItem:(id)arg1;
- (id)initWithPreviewItems:(id)arg1;
- (id)init;

@end

