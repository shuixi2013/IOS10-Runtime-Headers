//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPShapeLayout.h>

#import <iWorkImport/TSWPStyleProvider-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPCommentLayout : TSWPShapeLayout <TSWPStyleProvider>
{
}

- (id)paragraphStyleAtParIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)styleProvider;
- (_Bool)shouldDisplayGuides;
- (struct CGSize)minimumSize;
- (_Bool)canResetTextAndObjectHandles;
- (_Bool)canBeIntersected;
- (_Bool)supportsRotation;
- (_Bool)allowsConnections;
- (struct CGRect)nonAutosizedFrameForTextLayout:(id)arg1;
- (_Bool)shouldBeDisplayedInShowMode;
- (id)fill;
- (id)commentInfo;
- (int)wrapType;
- (Class)repClassOverride;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsBoldItalicUnderlineShortcuts;

@end

