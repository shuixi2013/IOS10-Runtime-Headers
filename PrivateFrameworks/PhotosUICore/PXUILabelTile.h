//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>

@class NSString, PXLabelSpec, PXUILabel, UIView;

@interface PXUILabelTile : NSObject <PXUIViewBasicTile>
{
    PXUILabel *_label;
    PXLabelSpec *_spec;
    NSString *_text;
}

@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)_setSpec:(id)arg1;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
@property(readonly, nonatomic) UIView *view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

