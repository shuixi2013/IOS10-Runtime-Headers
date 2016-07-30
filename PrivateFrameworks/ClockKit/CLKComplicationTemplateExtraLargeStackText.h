//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateExtraLargeStackText : CLKComplicationTemplate
{
    CLKTextProvider *_line1TextProvider;
    CLKTextProvider *_line2TextProvider;
    unsigned long long _highlightMode;
}

@property(nonatomic) unsigned long long highlightMode; // @synthesize highlightMode=_highlightMode;
@property(copy, nonatomic) CLKTextProvider *line2TextProvider; // @synthesize line2TextProvider=_line2TextProvider;
@property(copy, nonatomic) CLKTextProvider *line1TextProvider; // @synthesize line1TextProvider=_line1TextProvider;
- (void).cxx_destruct;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;
- (id)_initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
@property(nonatomic) _Bool highlightLine2;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end

