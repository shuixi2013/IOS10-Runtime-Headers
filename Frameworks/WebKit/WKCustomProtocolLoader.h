//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSURLConnectionDelegate-Protocol.h>

@class NSString, NSURLConnection;

__attribute__((visibility("hidden")))
@interface WKCustomProtocolLoader : NSObject <NSURLConnectionDelegate>
{
    struct CustomProtocolManagerProxy *_customProtocolManagerProxy;
    unsigned long long _customProtocolID;
    struct RefPtr<IPC::Connection> _connection;
    unsigned long long _storagePolicy;
    NSURLConnection *_urlConnection;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)dealloc;
-     // Error parsing type: @48@0:8^{CustomProtocolManagerProxy=^^?^{ChildProcessProxy}^{WebProcessPool}{HashMap<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WKCustomProtocolLoader> > >={HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WKCustomProtocolLoader> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> >=^{KeyValuePair<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader> >}IIII}}}16Q24@32^{Connection={atomic<int>=Ai}^{Client}B{atomic<unsigned long long>=AQ}BB^?B{Ref<WTF::WorkQueue>=^{WorkQueue}}{HashMap<IPC::StringReference, std::__1::pair<WTF::RefPtr<WTF::WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> >, IPC::StringReference::Hash, WTF::HashTraits<IPC::StringReference>, WTF::HashTraits<std::__1::pair<WTF::RefPtr<WTF::WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> > > >={HashTable<IPC::StringReference, WTF::KeyValuePair<IPC::StringReference, std::__1::pair<WTF::RefPtr<WTF::WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<IPC::StringReference, std::__1::pair<WTF::RefPtr<WTF::WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> > > >, IPC::StringReference::Hash, WTF::HashMap<IPC::StringReference, std::__1::pair<WTF::RefPtr<WTF::WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> >, IPC::StringReference::Hash, WTF::HashTraits<IPC::StringReference>, WTF::HashTraits<std::__1::pair<WTF::RefPtr<WTF::WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> > > >::KeyValuePairTraits, WTF::HashTraits<IPC::StringReference> >=^{KeyValuePair<IPC::StringReference, std::__1::pair<WTF::RefPtr<WTF::WorkQueue>, WTF::RefPtr<IPC::Connection::WorkQueueMessageReceiver> > >}IIII}}IIIIBB{Lock={Atomic<unsigned char>={atomic<unsigned char>=AC}}}{Deque<std::__1::unique_ptr<IPC::MessageDecoder, std::__1::default_delete<IPC::MessageDecoder> >, 0>=QQ{VectorBuffer<std::__1::unique_ptr<IPC::MessageDecoder, std::__1::default_delete<IPC::MessageDecoder> >, 0>=^{unique_ptr<IPC::MessageDecoder, std::__1::default_delete<IPC::MessageDecoder> >}II}}{Lock={Atomic<unsigned char>={atomic<unsigned char>=AC}}}{Deque<std::__1::unique_ptr<IPC::MessageEncoder, std::__1::default_delete<IPC::MessageEncoder> >, 0>=QQ{VectorBuffer<std::__1::unique_ptr<IPC::MessageEncoder, std::__1::default_delete<IPC::MessageEncoder> >, 0>=^{unique_ptr<IPC::MessageEncoder, std::__1::default_delete<IPC::MessageEncoder> >}II}}{Condition={Atomic<bool>={atomic<bool>=AB}}}{Lock={Atomic<unsigned char>={atomic<unsigned char>=AC}}}^{WaitForMessageState}{Lock={Atomic<unsigned char>={atomic<unsigned char>=AC}}}B{Vector<IPC::Connection::PendingSyncReply, 0, WTF::CrashOnOverflow, 16>=^{PendingSyncReply}II}{HashMap<unsigned long long, IPC::Connection::SecondaryThreadPendingSyncReply *, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<IPC::Connection::SecondaryThreadPendingSyncReply *> >={HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, IPC::Connection::SecondaryThreadPendingSyncReply *>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, IPC::Connection::SecondaryThreadPendingSyncReply *> >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, IPC::Connection::SecondaryThreadPendingSyncReply *, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<IPC::Connection::SecondaryThreadPendingSyncReply *> >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> >=^{KeyValuePair<unsigned long long, IPC::Connection::SecondaryThreadPendingSyncReply *>}IIII}}{Lock={Atomic<unsigned char>={atomic<unsigned char>=AC}}}{HashMap<unsigned long long, std::__1::function<void ()>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<std::__1::function<void ()> > >={HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, std::__1::function<void ()> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, std::__1::function<void ()> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, std::__1::function<void ()>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<std::__1::function<void ()> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> >=^{KeyValuePair<unsigned long long, std::__1::function<void ()> >}IIII}}{RefPtr<WTF::WorkQueue>=^{WorkQueue}}Q^{_opaque_pthread_t}BI@I@{OSObjectPtr<NSObject<OS_xpc_object> *>=@}}40, name: initWithCustomProtocolManagerProxy:customProtocolID:request:connection:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

