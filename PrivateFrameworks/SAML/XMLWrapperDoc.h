//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSMutableDictionary, XMLWrapperElement, XMLWrapperQuery;

@interface XMLWrapperDoc : NSObject
{
    struct _xmlDoc *_doc;
    struct _xmlNode *_docNode;
    NSMutableDictionary *_namespaces;
    NSData *_xmlData;
    NSData *_schemaData;
    XMLWrapperElement *_documentElement;
    XMLWrapperQuery *_query;
}

@property(retain, nonatomic) XMLWrapperQuery *query; // @synthesize query=_query;
@property(readonly, nonatomic) NSDictionary *namespaces; // @synthesize namespaces=_namespaces;
@property(retain, nonatomic) XMLWrapperElement *documentElement; // @synthesize documentElement=_documentElement;
@property(retain, nonatomic) NSData *schemaData; // @synthesize schemaData=_schemaData;
@property(retain, nonatomic) NSData *xmlData; // @synthesize xmlData=_xmlData;
- (void).cxx_destruct;
- (id)createDocumentElement:(id *)arg1;
- (_Bool)setXMLDoc:(id *)arg1;
- (_Bool)createDocument:(id *)arg1;
- (struct _xmlDoc *)docPtr;
- (struct _xmlNode *)nodePtr;
- (id)xmlString:(id *)arg1;
- (struct _xmlDoc *)docNode:(id *)arg1;
- (id)firstResultByXpathQuery:(id)arg1 error:(id *)arg2;
- (id)getResultsByXpathQuery:(id)arg1 error:(id *)arg2;
- (void)setNamespace:(id)arg1;
- (id)initWithElement:(id)arg1 schema:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithData:(id)arg1 schema:(id)arg2 error:(id *)arg3;

@end

