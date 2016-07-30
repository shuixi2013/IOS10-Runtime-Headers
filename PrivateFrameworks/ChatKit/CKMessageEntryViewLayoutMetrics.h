//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CKMessageEntryViewLayoutMetrics : NSObject
{
    double _defaultEntryContentViewHeight;
    double _defaultSubjectEntryContentViewHeight;
    double _defaultEntryViewHeight;
    double _defaultSubjectEntryViewHeight;
    struct UIEdgeInsets _entryViewContentInsets;
    struct UIEdgeInsets _entryViewTextAlignmentInsets;
}

@property(readonly, nonatomic) double defaultSubjectEntryViewHeight; // @synthesize defaultSubjectEntryViewHeight=_defaultSubjectEntryViewHeight;
@property(readonly, nonatomic) double defaultEntryViewHeight; // @synthesize defaultEntryViewHeight=_defaultEntryViewHeight;
@property(readonly, nonatomic) double defaultSubjectEntryContentViewHeight; // @synthesize defaultSubjectEntryContentViewHeight=_defaultSubjectEntryContentViewHeight;
@property(readonly, nonatomic) double defaultEntryContentViewHeight; // @synthesize defaultEntryContentViewHeight=_defaultEntryContentViewHeight;
@property(readonly, nonatomic) struct UIEdgeInsets entryViewTextAlignmentInsets; // @synthesize entryViewTextAlignmentInsets=_entryViewTextAlignmentInsets;
@property(readonly, nonatomic) struct UIEdgeInsets entryViewContentInsets; // @synthesize entryViewContentInsets=_entryViewContentInsets;
- (void)calculateTextMetrics;
- (id)init;

@end

