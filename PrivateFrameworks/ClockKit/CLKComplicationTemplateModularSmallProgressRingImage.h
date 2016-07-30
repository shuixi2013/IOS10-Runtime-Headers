//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider, CLKProgressProvider;

@interface CLKComplicationTemplateModularSmallProgressRingImage : CLKComplicationTemplate
{
    CLKImageProvider *_imageProvider;
    CLKProgressProvider *_progressProvider;
    long long _ringStyle;
}

@property(nonatomic) long long ringStyle; // @synthesize ringStyle=_ringStyle;
@property(copy, nonatomic) CLKProgressProvider *progressProvider; // @synthesize progressProvider=_progressProvider;
@property(copy, nonatomic) CLKImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
- (void).cxx_destruct;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateProgressProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end

