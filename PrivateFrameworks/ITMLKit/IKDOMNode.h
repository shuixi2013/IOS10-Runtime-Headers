//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSDOMEventTarget-Protocol.h>
#import <ITMLKit/IKJSDOMNode-Protocol.h>

@class IKDOMDocument, IKDOMNodeData, IKDOMNodeList, JSManagedValue, NSHashTable, NSMutableDictionary, NSString;

@interface IKDOMNode : IKJSObject <IKJSDOMNode, IKJSDOMEventTarget>
{
    struct _xmlNode *_nodePtr;
    JSManagedValue *_managedOwnerDocument;
    JSManagedValue *_managedParent;
    JSManagedValue *_managedChildNodeList;
    NSMutableDictionary *_eventListenersMap;
    NSHashTable *_domObservers;
    long long _ITMLID;
    JSManagedValue *_managedSelf;
}

+ (id)_eventListenerMapKeyForType:(id)arg1 useCapture:(_Bool)arg2;
+ (void)handleNodeWillRelease:(struct _xmlNode *)arg1;
+ (void)handleNodeParentDidChange:(struct _xmlNode *)arg1;
+ (id)nodeWithAppContext:(id)arg1 nodePtr:(struct _xmlNode *)arg2;
@property(readonly, retain, nonatomic) JSManagedValue *managedSelf; // @synthesize managedSelf=_managedSelf;
@property(nonatomic) long long ITMLID; // @synthesize ITMLID=_ITMLID;
@property(retain, nonatomic) NSHashTable *domObservers; // @synthesize domObservers=_domObservers;
@property(retain, nonatomic) NSMutableDictionary *eventListenersMap; // @synthesize eventListenersMap=_eventListenersMap;
@property(retain, nonatomic) JSManagedValue *managedChildNodeList; // @synthesize managedChildNodeList=_managedChildNodeList;
@property(retain, nonatomic) JSManagedValue *managedParent; // @synthesize managedParent=_managedParent;
@property(retain, nonatomic) JSManagedValue *managedOwnerDocument; // @synthesize managedOwnerDocument=_managedOwnerDocument;
- (void).cxx_destruct;
- (void)_notifyUpdatesToDOMObservers;
- (struct _xmlNode *)_appendNode:(struct _xmlNode *)arg1;
- (struct _xmlNode *)_insertNode:(struct _xmlNode *)arg1 refNode:(struct _xmlNode *)arg2 operation:(unsigned long long)arg3;
- (_Bool)_validateDOMOperation:(unsigned long long)arg1 newNode:(id)arg2 refNode:(id)arg3;
- (void)_linkManagedObjects;
- (void)_unlinkManagedObjects;
- (_Bool)_searchEventListener:(id)arg1 key:(id)arg2 destroy:(_Bool)arg3;
- (unsigned long long)childElementCount;
- (id)lastElementChild;
- (id)firstElementChild;
- (id)children;
- (id)writeToStringWithError:(id *)arg1;
- (id)nodesForXPath:(id)arg1 error:(id *)arg2;
- (void)removeDOMObserver:(id)arg1;
- (void)addDOMObserver:(id)arg1;
- (id)performDOMOperation:(unsigned long long)arg1 newNode:(id)arg2 refNode:(id)arg3;
- (void)notifyChildrenUpdatedWithUpdatedChildNodes:(id)arg1;
- (void)notifyUpdatedAndMark:(_Bool)arg1;
- (void)enumerateEventListernersForType:(id)arg1 xmlAttribute:(id)arg2 phase:(long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
@property(readonly, retain, nonatomic) IKDOMNodeData *jsNodeData;
- (struct _xmlNode *)nodePtr;
- (_Bool)dispatchEvent:(id)arg1;
- (void)removeEventListener:(id)arg1:(id)arg2:(_Bool)arg3;
- (void)addEventListener:(id)arg1:(id)arg2:(_Bool)arg3;
- (_Bool)contains:(id)arg1;
- (id)getFeature:(id)arg1:(id)arg2;
- (_Bool)isEqualNode:(id)arg1;
- (_Bool)isSameNode:(id)arg1;
- (id)cloneNode:(_Bool)arg1;
- (_Bool)hasChildNodes;
- (id)appendChild:(id)arg1;
- (id)removeChild:(id)arg1;
- (id)replaceChild:(id)arg1:(id)arg2;
- (id)insertBefore:(id)arg1:(id)arg2;
@property(retain, nonatomic) NSString *textContent;
@property(readonly, nonatomic) __weak IKDOMDocument *ownerDocument;
@property(readonly, nonatomic) __weak IKDOMNode *nextSibling;
@property(readonly, nonatomic) __weak IKDOMNode *previousSibling;
@property(readonly, retain, nonatomic) IKDOMNode *lastChild;
@property(readonly, retain, nonatomic) IKDOMNode *firstChild;
@property(readonly, retain, nonatomic) IKDOMNodeList *childNodes;
@property(readonly, nonatomic) __weak IKDOMNode *parentNode;
@property(readonly, nonatomic) long long nodeType;
@property(retain, nonatomic) NSString *nodeValue;
@property(readonly, retain, nonatomic) NSString *nodeName;
- (id)childNodesAsArray;
- (id)description;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1 xmlNode:(struct _xmlNode *)arg2;

@end

