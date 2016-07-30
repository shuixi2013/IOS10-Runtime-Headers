//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPSmartField.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPPlaceholderSmartField : TSWPSmartField
{
    _Bool _localizable;
    NSString *_scriptTag;
}

@property(copy, nonatomic) NSString *scriptTag; // @synthesize scriptTag=_scriptTag;
@property(nonatomic) _Bool isLocalizable; // @synthesize isLocalizable=_localizable;
- (void)saveToArchive:(struct PlaceholderSmartFieldArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct PlaceholderSmartFieldArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (int)smartFieldKind;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (const struct PlaceholderSmartFieldArchive *)placeholderSmartFieldArchiveFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;

@end

