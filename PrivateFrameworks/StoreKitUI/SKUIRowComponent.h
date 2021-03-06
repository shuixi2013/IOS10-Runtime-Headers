//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIPageComponent.h>

@class NSArray, SKUIRowViewElement, UIColor;

@interface SKUIRowComponent : SKUIPageComponent
{
    UIColor *_backgroundColor;
    NSArray *_childComponents;
    NSArray *_columnWidths;
    long long _missingItemCount;
    long long _numberOfColumns;
    _Bool _shouldAutoFlow;
}

@property(readonly, nonatomic) _Bool shouldAutoFlow; // @synthesize shouldAutoFlow=_shouldAutoFlow;
@property(readonly, nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(readonly, nonatomic) NSArray *columnWidths; // @synthesize columnWidths=_columnWidths;
@property(readonly, nonatomic) NSArray *childComponents; // @synthesize childComponents=_childComponents;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)description;
- (_Bool)_isChildMissingItemData:(id)arg1;
- (id)_childComponentWithContext:(id)arg1;
- (id)_updateWithMissingItems:(id)arg1;
- (id)metricsElementName;
- (_Bool)isMissingItemData;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (long long)componentType;
- (id)initWithViewElement:(id)arg1;
- (id)initWithCustomPageContext:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SKUIRowViewElement *viewElement; // @dynamic viewElement;

@end

