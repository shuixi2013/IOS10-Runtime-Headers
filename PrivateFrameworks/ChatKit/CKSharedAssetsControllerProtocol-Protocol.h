//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class NSArray;
@protocol CKSharedAssetsControllerDelegate;

@protocol CKSharedAssetsControllerProtocol <NSObject>
@property(nonatomic) __weak id <CKSharedAssetsControllerDelegate> delegate;
- (void)updateAttachmentItems:(NSArray *)arg1;
- (void)parentScrollViewDidScroll:(struct CGPoint)arg1;
- (struct CGSize)contentSize;
- (unsigned long long)assetType;
@end

