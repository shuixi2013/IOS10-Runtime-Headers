//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface _PLDescriptionStyle : NSObject
{
    NSString *_initialFieldSeparator;
    NSString *_fieldSeparator;
    NSString *_nameValueSeparator;
    NSString *_suffix;
}

+ (id)styleForEnum:(long long)arg1;
@property(readonly, copy) NSString *suffix; // @synthesize suffix=_suffix;
@property(readonly, copy) NSString *nameValueSeparator; // @synthesize nameValueSeparator=_nameValueSeparator;
@property(readonly, copy) NSString *fieldSeparator; // @synthesize fieldSeparator=_fieldSeparator;
@property(readonly, copy) NSString *initialFieldSeparator; // @synthesize initialFieldSeparator=_initialFieldSeparator;
- (void)dealloc;
- (id)initWithIntialFieldSeparator:(id)arg1 fieldSeparator:(id)arg2 nameValueSeparator:(id)arg3 suffix:(id)arg4;

@end

