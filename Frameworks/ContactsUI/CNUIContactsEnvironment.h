//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CNContactStore, CNContactsEnvironment, CNUIAccountsFacade, CNUIContactsEnvironmentServicesProvider, CNUIFMFFacade, CNUIMeMonitor, PRPersonaStore, _DECConsumer;
@protocol CNSchedulerProvider, CNUIPRLikenessProviderCache, CNUIPRLikenessResolver;

@interface CNUIContactsEnvironment : NSObject
{
    long long _duetConsumer_once;
    long long _accountsFacade_once;
    long long _fmfFacade_once;
    long long _personaStore_once;
    long long _contactStore_once;
    long long _defaultSchedulerProvider_once;
    long long _likenessProviderCache_once;
    long long _meMonitor_once;
    long long _cachingLikenessResolver_once;
    CNUIContactsEnvironmentServicesProvider *_servicesProvider;
    CNUIAccountsFacade *_accountsFacade;
    CNUIFMFFacade *_fmfFacade;
    PRPersonaStore *_personaStore;
    id <CNSchedulerProvider> _defaultSchedulerProvider;
    CNContactStore *_contactStore;
    id <CNUIPRLikenessProviderCache> _likenessProviderCache;
    CNUIMeMonitor *_meMonitor;
    CNContactsEnvironment *_cnEnvironment;
    id <CNUIPRLikenessResolver> _cachingLikenessResolver;
}

+ (id)currentEnvironment;
@property(retain, nonatomic) id <CNUIPRLikenessResolver> cachingLikenessResolver; // @synthesize cachingLikenessResolver=_cachingLikenessResolver;
@property(readonly, nonatomic) CNContactsEnvironment *cnEnvironment; // @synthesize cnEnvironment=_cnEnvironment;
@property(retain, nonatomic) CNUIMeMonitor *meMonitor; // @synthesize meMonitor=_meMonitor;
@property(retain, nonatomic) id <CNUIPRLikenessProviderCache> likenessProviderCache; // @synthesize likenessProviderCache=_likenessProviderCache;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) id <CNSchedulerProvider> defaultSchedulerProvider; // @synthesize defaultSchedulerProvider=_defaultSchedulerProvider;
@property(retain, nonatomic) PRPersonaStore *personaStore; // @synthesize personaStore=_personaStore;
@property(retain, nonatomic) CNUIFMFFacade *fmfFacade; // @synthesize fmfFacade=_fmfFacade;
@property(retain, nonatomic) CNUIAccountsFacade *accountsFacade; // @synthesize accountsFacade=_accountsFacade;
@property(readonly, nonatomic) CNUIContactsEnvironmentServicesProvider *servicesProvider; // @synthesize servicesProvider=_servicesProvider;
- (void).cxx_destruct;
@property(readonly, nonatomic) _DECConsumer *duetConsumer;
- (id)initWithContactsEnvironment:(id)arg1;
- (id)init;

@end

