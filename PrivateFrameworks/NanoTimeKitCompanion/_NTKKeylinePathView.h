//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKColoringView.h>

#import <NanoTimeKitCompanion/NTKKeylineView-Protocol.h>

@class NSString, UIBezierPath, UIColor;

@interface _NTKKeylinePathView : NTKColoringView <NTKKeylineView>
{
    UIBezierPath *_path;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(retain, nonatomic) UIColor *color;
@property(readonly, nonatomic) UIColor *contentColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIColor *overrideColor;
@property(readonly) Class superclass;
@property(nonatomic) _Bool usesLegibility;

@end

