//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXRunNode.h>

#import <PhotosUI/PUReviewAssetNode-Protocol.h>

@class NSArray, NSString, PUReviewAsset;
@protocol PUAdjustmentURLNode, PUImageDataRenderNode, PUImageInfoNode, PUReviewImageURLNode, PUReviewVideoURLNode, PUVideoURLNode, PXRunNodeDelegate;

__attribute__((visibility("hidden")))
@interface PUReviewCreateAssetNode : PXRunNode <PUReviewAssetNode>
{
    PUReviewAsset *_reviewAsset;
    PUReviewAsset *_inputAsset;
    id <PUReviewImageURLNode> _imageInfoNode;
    id <PUImageInfoNode> _renderImageInfoNode;
    id <PUImageDataRenderNode> _renderImageDataNode;
    id <PUReviewVideoURLNode> _videoURLNode;
    id <PUVideoURLNode> _renderVideoURLNode;
    id <PUAdjustmentURLNode> _adjustmentURLNode;
}

@property(readonly, nonatomic) id <PUAdjustmentURLNode> adjustmentURLNode; // @synthesize adjustmentURLNode=_adjustmentURLNode;
@property(readonly, nonatomic) id <PUVideoURLNode> renderVideoURLNode; // @synthesize renderVideoURLNode=_renderVideoURLNode;
@property(readonly, nonatomic) id <PUReviewVideoURLNode> videoURLNode; // @synthesize videoURLNode=_videoURLNode;
@property(readonly, nonatomic) id <PUImageDataRenderNode> renderImageDataNode; // @synthesize renderImageDataNode=_renderImageDataNode;
@property(readonly, nonatomic) id <PUImageInfoNode> renderImageInfoNode; // @synthesize renderImageInfoNode=_renderImageInfoNode;
@property(readonly, nonatomic) id <PUReviewImageURLNode> imageInfoNode; // @synthesize imageInfoNode=_imageInfoNode;
@property(readonly, nonatomic) PUReviewAsset *inputAsset; // @synthesize inputAsset=_inputAsset;
@property(readonly, nonatomic) PUReviewAsset *reviewAsset; // @synthesize reviewAsset=_reviewAsset;
- (void).cxx_destruct;
- (void)run;
- (id)initWithInputAsset:(id)arg1 imageInfoNode:(id)arg2 renderImageInfoNode:(id)arg3 renderImageDataNode:(id)arg4 videoURLNode:(id)arg5 renderVideoURLNode:(id)arg6 adjustmentURLNode:(id)arg7;

// Remaining properties
@property(readonly, getter=isCanceled) _Bool canceled;
@property(readonly, getter=isComplete) _Bool complete;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <PXRunNodeDelegate> delegate;
@property(readonly, copy, nonatomic) NSArray *dependencies;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, getter=isRunning) _Bool running;
@property(readonly) unsigned long long state;
@property(readonly) Class superclass;
@property(readonly, getter=isWaiting) _Bool waiting;

@end

