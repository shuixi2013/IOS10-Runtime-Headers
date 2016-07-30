//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/DDDetectionControllerInteractionDelegate-Protocol.h>
#import <WebKit/WKActionSheetDelegate-Protocol.h>

@class NSString, UIView;
@protocol WKActionSheetAssistantDelegate;

__attribute__((visibility("hidden")))
@interface WKActionSheetAssistant : NSObject <WKActionSheetDelegate, DDDetectionControllerInteractionDelegate>
{
    struct WeakObjCPtr<id<WKActionSheetAssistantDelegate>> _delegate;
    struct RetainPtr<WKActionSheet> _interactionSheet;
    RetainPtr_5a40b48a _elementInfo;
    UIView *_view;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cleanupSheet;
- (void)showDataDetectorsSheet;
- (void)showLinkSheet;
- (RetainPtr_f649c0c3)defaultActionsForImageSheet:(id)arg1;
- (RetainPtr_f649c0c3)defaultActionsForLinkSheet:(id)arg1;
- (void)_appendOpenActionsForURL:(id)arg1 actions:(id)arg2 elementInfo:(id)arg3;
- (void)showImageSheet;
- (void)_createSheetWithElementActions:(id)arg1 showLinkTitle:(_Bool)arg2;
- (_Bool)isShowingSheet;
- (void)updateSheetPosition;
- (_Bool)presentSheet;
- (void)updatePositionInformation;
- (struct CGRect)presentationRectInHostViewForSheet;
- (struct CGRect)initialPresentationRectInHostViewForSheet;
- (id)hostViewForSheet;
- (struct CGRect)_presentationRectForSheetGivenPoint:(struct CGPoint)arg1 inHostView:(id)arg2;
- (id)superviewForSheet;
- (void)dealloc;
- (id)initWithView:(id)arg1;
@property(nonatomic) __weak id <WKActionSheetAssistantDelegate> delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

