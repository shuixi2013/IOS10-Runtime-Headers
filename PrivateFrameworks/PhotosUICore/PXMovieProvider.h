//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PHAssetCollection, PXDiagnosticsItemProvider, UIViewController;

@interface PXMovieProvider : NSObject
{
    PHAssetCollection *_assetCollection;
}

@property(readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
- (void).cxx_destruct;
@property(readonly, nonatomic) PXDiagnosticsItemProvider *diagnosticsItemProvider;
@property(readonly, nonatomic) _Bool canPlayMovie;
@property(readonly, nonatomic) UIViewController *movieViewController;
- (id)initWithAssetCollection:(id)arg1;
- (id)init;

@end

