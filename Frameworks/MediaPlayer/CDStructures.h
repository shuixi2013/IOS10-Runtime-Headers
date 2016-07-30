//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct Entity;

struct EntityCache;

struct EntityClass {
    CDUnknownFunctionPointerType *_field1;
    struct mutex _field2;
    struct unordered_map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *>>> _field3;
    struct unordered_map<mlcore::ModelPropertyBase *, mlcore::EntityClass *, std::__1::hash<mlcore::ModelPropertyBase *>, std::__1::equal_to<mlcore::ModelPropertyBase *>, std::__1::allocator<std::__1::pair<mlcore::ModelPropertyBase *const, mlcore::EntityClass *>>> _field4;
};

struct EntityQuery;

struct EntityQueryResult;

struct ITColor {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct Library;

struct LibraryView;

struct LocalizedSearchQuery;

struct LocalizedSearchScope;

struct MPLibraryActiveKeepLocalStatus {
    long long statusType;
    double downloadProgress;
};

struct MPLibraryAddStatusObserverConfiguration {
    _Bool isValidContentType;
    _Bool isLibraryAdded;
    _Bool hasCleanContent;
    _Bool hasExplicitContent;
    _Bool isLibraryAddEligible;
};

struct ModelPropertyBase {
    CDUnknownFunctionPointerType *_field1;
    struct EntityClass *_field2;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field3;
};

struct Predicate;

struct PropertiesQuery;

struct Query;

struct SortDescriptor;

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *>;

struct __hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *>;

struct __shared_weak_count;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field1;
                struct __short {
                    union {
                        unsigned char _field1;
                        char _field2;
                    } _field1;
                    char _field2[23];
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct map<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>>> {
    struct __tree<std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>>> {
        struct __tree_node<std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>, void *> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>, std::__1::less<long long>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>>> {
    struct __tree<std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>>> {
        struct __tree_node<std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>, void *> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>, std::__1::less<long long>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>>> {
        struct __tree_node<std::__1::__value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<unsigned long, MPIdentifierSet *, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, MPIdentifierSet *>>> {
    struct __tree<std::__1::__value_type<unsigned long, MPIdentifierSet *>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, MPIdentifierSet *>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, MPIdentifierSet *>>> {
        struct __tree_node<std::__1::__value_type<unsigned long, MPIdentifierSet *>, void *> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, MPIdentifierSet *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, MPIdentifierSet *>, std::__1::less<unsigned long>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct mutex {
    struct _opaque_pthread_mutex_t {
        long long _field1;
        char _field2[56];
    } _field1;
};

struct pair<long, long>;

struct shared_ptr<mlcore::Entity> {
    struct Entity *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<mlcore::EntityCache> {
    struct EntityCache *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<mlcore::EntityQuery> {
    struct EntityQuery *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<mlcore::EntityQueryResult> {
    struct EntityQueryResult *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<mlcore::Library> {
    struct Library *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<mlcore::LibraryView> {
    struct LibraryView *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<mlcore::LocalizedSearchQuery> {
    struct LocalizedSearchQuery *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<mlcore::LocalizedSearchScope> {
    struct LocalizedSearchScope *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<mlcore::Predicate> {
    struct Predicate *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<mlcore::PropertiesQuery> {
    struct PropertiesQuery *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<mlcore::Query> {
    struct Query *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<mlcore::SortDescriptor> {
    struct SortDescriptor *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<std::__1::map<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>>>> {
    map_a2b78f9e *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::__1::map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *>>>> {
    map_041e1ed5 *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::__1::vector<long long, std::__1::allocator<long long>>> {
    vector_c1c297d2 *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::__1::vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity>>>> {
    struct vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity>>> *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unordered_map<mlcore::ModelPropertyBase *, mlcore::EntityClass *, std::__1::hash<mlcore::ModelPropertyBase *>, std::__1::equal_to<mlcore::ModelPropertyBase *>, std::__1::allocator<std::__1::pair<mlcore::ModelPropertyBase *const, mlcore::EntityClass *>>> {
    struct __hash_table<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, std::__1::__unordered_map_hasher<mlcore::ModelPropertyBase *, std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, std::__1::hash<mlcore::ModelPropertyBase *>, true>, std::__1::__unordered_map_equal<mlcore::ModelPropertyBase *, std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, std::__1::equal_to<mlcore::ModelPropertyBase *>, true>, std::__1::allocator<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, void *> *_field1;
            } _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<mlcore::ModelPropertyBase *, std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, std::__1::hash<mlcore::ModelPropertyBase *>, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<mlcore::ModelPropertyBase *, std::__1::__hash_value_type<mlcore::ModelPropertyBase *, mlcore::EntityClass *>, std::__1::equal_to<mlcore::ModelPropertyBase *>, true>> {
            float _field1;
        } _field4;
    } _field1;
};

struct unordered_map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *>>> {
    struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, std::__1::hash<std::__1::basic_string<char>>, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, std::__1::equal_to<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> *_field1;
            } _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, std::__1::hash<std::__1::basic_string<char>>, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, std::__1::equal_to<std::__1::basic_string<char>>, true>> {
            float _field1;
        } _field4;
    } _field1;
};

struct vector<int, std::__1::allocator<int>> {
    int *__begin_;
    int *__end_;
    struct __compressed_pair<int *, std::__1::allocator<int>> {
        int *__first_;
    } __end_cap_;
};

struct vector<long long, std::__1::allocator<long long>> {
    long long *__begin_;
    long long *__end_;
    struct __compressed_pair<long long *, std::__1::allocator<long long>> {
        long long *__first_;
    } __end_cap_;
};

struct vector<long, std::__1::allocator<long>> {
    long long *__begin_;
    long long *__end_;
    struct __compressed_pair<long *, std::__1::allocator<long>> {
        long long *__first_;
    } __end_cap_;
};

struct vector<mlcore::ModelPropertyBase *, std::__1::allocator<mlcore::ModelPropertyBase *>> {
    struct ModelPropertyBase **_field1;
    struct ModelPropertyBase **_field2;
    struct __compressed_pair<mlcore::ModelPropertyBase **, std::__1::allocator<mlcore::ModelPropertyBase *>> {
        struct ModelPropertyBase **_field1;
    } _field3;
};

struct vector<mlcore::SortDescriptor, std::__1::allocator<mlcore::SortDescriptor>> {
    struct SortDescriptor *_field1;
    struct SortDescriptor *_field2;
    struct __compressed_pair<mlcore::SortDescriptor *, std::__1::allocator<mlcore::SortDescriptor>> {
        struct SortDescriptor *_field1;
    } _field3;
};

struct vector<std::__1::pair<long, long>, std::__1::allocator<std::__1::pair<long, long>>> {
    struct pair<long, long> *__begin_;
    struct pair<long, long> *__end_;
    struct __compressed_pair<std::__1::pair<long, long>*, std::__1::allocator<std::__1::pair<long, long>>> {
        struct pair<long, long> *__first_;
    } __end_cap_;
};

struct vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity>>>;

struct vector<std::__1::shared_ptr<mlcore::Query>, std::__1::allocator<std::__1::shared_ptr<mlcore::Query>>> {
    shared_ptr_34add297 *__begin_;
    shared_ptr_34add297 *__end_;
    struct __compressed_pair<std::__1::shared_ptr<mlcore::Query>*, std::__1::allocator<std::__1::shared_ptr<mlcore::Query>>> {
        shared_ptr_34add297 *__first_;
    } __end_cap_;
};

struct vector<unsigned long long, std::__1::allocator<unsigned long long>> {
    unsigned long long *__begin_;
    unsigned long long *__end_;
    struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long>> {
        unsigned long long *__first_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

typedef struct {
    unsigned int identifiers:1;
    unsigned int name:1;
} CDStruct_63a3d127;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    long long numberOfAvailableSkips;
    long long skipFrequency;
    double skipInterval;
} CDStruct_dcf4dde6;

// Ambiguous groups
typedef struct {
    unsigned int identifiers:1;
} CDStruct_f9384266;

typedef struct map<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>>> {
    struct __tree<std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>>> {
        struct __tree_node<std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>, void *> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, MPMediaEntity<MPCacheableConcreteMediaEntity>*__weak>, std::__1::less<long long>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
} map_e2c539ba;

typedef struct map<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>>> {
    struct __tree<std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>>> {
        struct __tree_node<std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>, void *> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>, std::__1::less<long long>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
} map_a2b78f9e;

typedef struct map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>>> {
        struct __tree_node<std::__1::__value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, mlcore::ModelPropertyBase *>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
} map_041e1ed5;

typedef struct shared_ptr<mlcore::Entity> {
    struct Entity *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_27513921;

typedef struct shared_ptr<mlcore::EntityCache> {
    struct EntityCache *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_f34bf174;

typedef struct shared_ptr<mlcore::EntityQuery> {
    struct EntityQuery *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_e2fca368;

typedef struct shared_ptr<mlcore::EntityQueryResult> {
    struct EntityQueryResult *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_274c5e8b;

typedef struct shared_ptr<mlcore::Library> {
    struct Library *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_2d06daf8;

typedef struct shared_ptr<mlcore::LibraryView> {
    struct LibraryView *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_f45adb51;

typedef struct shared_ptr<mlcore::LocalizedSearchQuery> {
    struct LocalizedSearchQuery *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_bc1d293c;

typedef struct shared_ptr<mlcore::LocalizedSearchScope> {
    struct LocalizedSearchScope *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_c450ebdb;

typedef struct shared_ptr<mlcore::Predicate> {
    struct Predicate *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_cf7b8a22;

typedef struct shared_ptr<mlcore::PropertiesQuery> {
    struct PropertiesQuery *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_889ae36a;

typedef struct shared_ptr<mlcore::Query> {
    struct Query *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_34add297;

typedef struct shared_ptr<mlcore::SortDescriptor> {
    struct SortDescriptor *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_ecf637ab;

typedef struct shared_ptr<std::__1::map<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::shared_ptr<mlcore::EntityQueryResult>>>>> {
    map_a2b78f9e *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_87e3a99b;

typedef struct shared_ptr<std::__1::map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *>>>> {
    map_041e1ed5 *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_217a6612;

typedef struct shared_ptr<std::__1::vector<long long, std::__1::allocator<long long>>> {
    vector_c1c297d2 *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_47cceffc;

typedef struct shared_ptr<std::__1::vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity>>>> {
    struct vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity>>> *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_8b9a1f72;

typedef struct vector<long long, std::__1::allocator<long long>> {
    long long *__begin_;
    long long *__end_;
    struct __compressed_pair<long long *, std::__1::allocator<long long>> {
        long long *__first_;
    } __end_cap_;
} vector_c1c297d2;

typedef struct vector<mlcore::ModelPropertyBase *, std::__1::allocator<mlcore::ModelPropertyBase *>> {
    struct ModelPropertyBase **_field1;
    struct ModelPropertyBase **_field2;
    struct __compressed_pair<mlcore::ModelPropertyBase **, std::__1::allocator<mlcore::ModelPropertyBase *>> {
        struct ModelPropertyBase **_field1;
    } _field3;
} vector_90d4f7ff;

typedef struct vector<mlcore::SortDescriptor, std::__1::allocator<mlcore::SortDescriptor>> {
    struct SortDescriptor *_field1;
    struct SortDescriptor *_field2;
    struct __compressed_pair<mlcore::SortDescriptor *, std::__1::allocator<mlcore::SortDescriptor>> {
        struct SortDescriptor *_field1;
    } _field3;
} vector_11bc6599;

typedef struct vector<std::__1::shared_ptr<mlcore::Query>, std::__1::allocator<std::__1::shared_ptr<mlcore::Query>>> {
    shared_ptr_34add297 *__begin_;
    shared_ptr_34add297 *__end_;
    struct __compressed_pair<std::__1::shared_ptr<mlcore::Query>*, std::__1::allocator<std::__1::shared_ptr<mlcore::Query>>> {
        shared_ptr_34add297 *__first_;
    } __end_cap_;
} vector_17d5f9ad;
