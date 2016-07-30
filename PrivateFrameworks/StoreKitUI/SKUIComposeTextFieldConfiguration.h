//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SKUIComposeTextFieldConfiguration : NSObject
{
    struct UIEdgeInsets _borderInsets;
    long long _columnIndex;
    _Bool _isRequired;
    NSString *_label;
    unsigned long long _maxLength;
    NSString *_placeholder;
    NSString *_value;
}

@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic, getter=isRequired) _Bool required; // @synthesize required=_isRequired;
@property(nonatomic) long long columnIndex; // @synthesize columnIndex=_columnIndex;
@property(nonatomic) struct UIEdgeInsets borderInsets; // @synthesize borderInsets=_borderInsets;
- (void).cxx_destruct;

@end

