//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpotlightUI/SKStoreProductViewControllerDelegate-Protocol.h>
#import <SpotlightUI/UIDocumentInteractionControllerDelegate-Protocol.h>

@class NSString;
@protocol SPUISearchResultHandlerDelegate;

@interface SPUISearchResultHandler : NSObject <SKStoreProductViewControllerDelegate, UIDocumentInteractionControllerDelegate>
{
    id <SPUISearchResultHandlerDelegate> _delegate;
}

+ (id)sharedResultHandler;
@property __weak id <SPUISearchResultHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)requestAuthIfNecessaryAndPresentViewController:(id)arg1;
- (void)presentViewController:(id)arg1;
- (void)requestAuthAndPresentViewController:(id)arg1;
- (void)modalViewControllerClosed;
- (void)productViewControllerDidFinish:(id)arg1;
- (id)viewControllerForResult:(id)arg1 preview:(_Bool)arg2;
- (_Bool)asyncViewControllerForResult:(id)arg1 preview:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleResultSelected:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

