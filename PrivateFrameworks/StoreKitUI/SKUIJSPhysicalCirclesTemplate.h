//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <StoreKitUI/SKUIJSPhysicalCirclesTemplate-Protocol.h>

@class SKUIPhysicalCirclesTemplateDOMFeature;

@interface SKUIJSPhysicalCirclesTemplate : IKJSObject <SKUIJSPhysicalCirclesTemplate>
{
    SKUIPhysicalCirclesTemplateDOMFeature *_feature;
}

- (void).cxx_destruct;
- (void)_performAnimationWithType:(long long)arg1 callback:(id)arg2;
- (void)performResetAnimation:(id)arg1;
- (void)performFinishAnimation:(id)arg1;
- (void)afterDOMUpdate:(id)arg1;
- (id)initWithAppContext:(id)arg1 DOMFeature:(id)arg2;

@end

