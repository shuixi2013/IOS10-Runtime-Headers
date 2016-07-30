//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>
#import <TSReading/TSDErrorPresenter-Protocol.h>
#import <TSReading/TSDLayerAndSubviewHosting-Protocol.h>
#import <TSReading/TSDModalOperationPresenter-Protocol.h>
#import <TSReading/TSDMovieCompatibilityAlertPresenter-Protocol.h>

@class CALayer, NSUndoManager, TSDCanvasLayer, TSDCanvasView, TSDInteractiveCanvasController, TSDMacCanvasViewController, TSDiOSCanvasViewController, UIViewController;

@protocol TSDCanvasLayerHosting <NSObject, TSDErrorPresenter, TSDModalOperationPresenter, TSDMovieCompatibilityAlertPresenter, TSDLayerAndSubviewHosting>
@property(readonly, nonatomic) CALayer *clippingLayer;
@property(readonly, nonatomic) TSDCanvasLayer *canvasLayer;
@property(readonly, nonatomic) CALayer *layer;
@property(readonly, nonatomic) TSDCanvasView *canvasView;
@property(nonatomic) TSDInteractiveCanvasController *interactiveCanvasController;
- (_Bool)isInFocusedContainer;
- (void)canvasDidUpdateRepsFromLayouts;
- (NSUndoManager *)undoManager;
- (void)teardown;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)isViewLoaded;
- (void)viewDidLoad;

@optional
- (UIViewController *)viewController;
- (TSDMacCanvasViewController *)asMacCVC;
- (TSDiOSCanvasViewController *)asiOSCVC;
@end

