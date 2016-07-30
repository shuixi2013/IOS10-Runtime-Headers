//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <StoreKitUI/SKUIJSColor-Protocol.h>

@interface SKUIJSColor : IKJSObject <SKUIJSColor>
{
    unsigned long long _red;
    unsigned long long _green;
    unsigned long long _blue;
    double _alpha;
}

@property(readonly, nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(readonly, nonatomic) unsigned long long blue; // @synthesize blue=_blue;
@property(readonly, nonatomic) unsigned long long green; // @synthesize green=_green;
@property(readonly, nonatomic) unsigned long long red; // @synthesize red=_red;
- (id)description;
- (id)initWithAppContext:(id)arg1 color:(id)arg2;

@end

