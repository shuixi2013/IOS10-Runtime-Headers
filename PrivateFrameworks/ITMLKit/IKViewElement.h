//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKStyleableElement-Protocol.h>

@class IKAppDocument, IKViewElementStyle, IKViewElementStyleComposer, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSString;
@protocol IKStyleableElement;

@interface IKViewElement : NSObject <IKStyleableElement>
{
    _Bool _disabled;
    _Bool _impressionable;
    _Bool _didUpdateAutoHighlightIdentifier;
    IKAppDocument *_appDocument;
    IKViewElementStyleComposer *_styleComposer;
    id <IKStyleableElement> _parentStyleableElement;
    NSString *_elementID;
    unsigned long long _elementType;
    NSString *_elementName;
    IKViewElement *_parent;
    NSArray *_children;
    NSDictionary *_attributes;
    NSString *_accessibilityText;
    NSString *_autoHighlightIdentifier;
    NSDictionary *_impressionableAttributes;
    unsigned long long _updateType;
    NSArray *_features;
    NSMutableDictionary *_metadataDict;
    NSMutableSet *_activeSingularEvents;
    NSString *_itmlID;
}

+ (unsigned long long)evaluateElementUpdateTypeAndReset:(id)arg1;
+ (id)supportedFeatures;
+ (_Bool)shouldParseChildDOMElement:(id)arg1;
+ (_Bool)shouldParseChildDOMElements;
@property(readonly, retain, nonatomic) NSString *itmlID; // @synthesize itmlID=_itmlID;
@property(retain, nonatomic) NSMutableSet *activeSingularEvents; // @synthesize activeSingularEvents=_activeSingularEvents;
@property(retain, nonatomic) NSMutableDictionary *metadataDict; // @synthesize metadataDict=_metadataDict;
@property(nonatomic) _Bool didUpdateAutoHighlightIdentifier; // @synthesize didUpdateAutoHighlightIdentifier=_didUpdateAutoHighlightIdentifier;
@property(readonly, copy, nonatomic) NSArray *features; // @synthesize features=_features;
@property(nonatomic) unsigned long long updateType; // @synthesize updateType=_updateType;
@property(readonly, nonatomic) NSDictionary *impressionableAttributes; // @synthesize impressionableAttributes=_impressionableAttributes;
@property(nonatomic, getter=isImpressionable) _Bool impressionable; // @synthesize impressionable=_impressionable;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(copy, nonatomic) NSString *autoHighlightIdentifier; // @synthesize autoHighlightIdentifier=_autoHighlightIdentifier;
@property(readonly, copy, nonatomic) NSString *accessibilityText; // @synthesize accessibilityText=_accessibilityText;
@property(readonly, retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSArray *children; // @synthesize children=_children;
@property(nonatomic) __weak IKViewElement *parent; // @synthesize parent=_parent;
@property(readonly, copy, nonatomic) NSString *elementName; // @synthesize elementName=_elementName;
@property(readonly, nonatomic) unsigned long long elementType; // @synthesize elementType=_elementType;
@property(readonly, copy, nonatomic) NSString *elementID; // @synthesize elementID=_elementID;
@property(retain, nonatomic) IKViewElementStyleComposer *styleComposer; // @synthesize styleComposer=_styleComposer;
- (void).cxx_destruct;
- (void)_resetUpdates;
- (void)_appDocumentDidMarkStylesDirty:(id)arg1;
- (void)_applyUpdatesToChildrenWithElements:(id)arg1;
- (void)_reorderAndUpdateChildrenWithElements:(id)arg1;
- (void)_setAppDocument:(id)arg1;
@property(readonly, nonatomic) __weak id <IKStyleableElement> parentStyleableElement; // @synthesize parentStyleableElement=_parentStyleableElement;
- (void)setViewElementUpdateType:(unsigned long long)arg1;
- (id)childImageElementWithType:(unsigned long long)arg1;
- (id)childTextElementWithStyle:(unsigned long long)arg1;
- (id)childElementsWithType:(unsigned long long)arg1;
- (id)childElementWithType:(unsigned long long)arg1;
- (void)dispatchEvent:(id)arg1 eventAttribute:(id)arg2 canBubble:(_Bool)arg3 isCancelable:(_Bool)arg4 extraInfo:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)dispatchEventOfType:(unsigned long long)arg1 canBubble:(_Bool)arg2 isCancelable:(_Bool)arg3 extraInfo:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)resetProperty:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
@property(nonatomic) __weak IKAppDocument *appDocument; // @synthesize appDocument=_appDocument;
@property(readonly, retain, nonatomic) IKViewElementStyle *style;
- (id)debugDescription;
- (void)dealloc;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)init;

@end

