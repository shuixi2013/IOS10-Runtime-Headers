//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebAccessibilityTextMarker : NSObject
{
    struct AXObjectCache *_cache;
    struct TextMarkerData _textMarkerData;
}

+ (id)startOrEndTextMarkerForRange:(RefPtr_59db400e)arg1 isStart:(_Bool)arg2 cache:(struct AXObjectCache *)arg3;
+ (id)textMarkerWithCharacterOffset:(struct CharacterOffset *)arg1 cache:(struct AXObjectCache *)arg2;
+ (id)textMarkerWithVisiblePosition:(struct VisiblePosition *)arg1 cache:(struct AXObjectCache *)arg2;
- (id)description;
- (struct AccessibilityObject *)accessibilityObject;
- (_Bool)isIgnored;
- (struct CharacterOffset)characterOffset;
- (struct VisiblePosition)visiblePosition;
- (id)dataRepresentation;
- (id)initWithData:(id)arg1 accessibilityObject:(struct WebAccessibilityObjectWrapper *)arg2;
- (id)initWithData:(id)arg1 cache:(struct AXObjectCache *)arg2;
- (id)initWithTextMarker:(struct TextMarkerData *)arg1 cache:(struct AXObjectCache *)arg2;

@end

