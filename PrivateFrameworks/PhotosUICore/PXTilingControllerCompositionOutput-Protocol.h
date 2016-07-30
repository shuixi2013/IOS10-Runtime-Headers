//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXTilingController, PXTilingScrollInfo;

@protocol PXTilingControllerCompositionOutput <NSObject>
- (void)setContentBounds:(struct CGRect)arg1 scrollBounds:(struct CGRect)arg2 scrollInfo:(PXTilingScrollInfo *)arg3;
- (void)setOrigin:(struct CGPoint)arg1 forTilingController:(PXTilingController *)arg2;
- (void)setReferenceSize:(struct CGSize)arg1 contentInset:(struct UIEdgeInsets)arg2 forTilingController:(PXTilingController *)arg3;
@end

