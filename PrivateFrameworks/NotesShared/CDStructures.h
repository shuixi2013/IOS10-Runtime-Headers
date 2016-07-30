//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSUUID;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AVAsset {
    Class _field1;
    id _field2;
};

struct Attachment {
    CDUnknownFunctionPointerType *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    unsigned int _field3[1];
    int _field4;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field5;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field6;
    float _field7;
    float _field8;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field9;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field10;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field11;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field12;
    struct Location *_field13;
    struct Media *_field14;
    struct RepeatedPtrField<topotext::PreviewImage> _field15;
    float _field16;
    float _field17;
    double _field18;
    double _field19;
    int _field20;
    _Bool _field21;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field22;
    long long _field23;
    double _field24;
};

struct AttachmentInfo;

struct AttributeRun {
    CDUnknownFunctionPointerType *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    unsigned int _field3[1];
    int _field4;
    struct ParagraphStyle *_field5;
    unsigned int _field6;
    unsigned int _field7;
    struct Font *_field8;
    unsigned int _field9;
    unsigned int _field10;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field11;
    int _field12;
    int _field13;
    struct Color *_field14;
    struct AttachmentInfo *_field15;
    unsigned long long _field16;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

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

struct Color;

struct Command {
    CDUnknownFunctionPointerType *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    unsigned int _field3[1];
    int _field4;
    struct CommandID *_field5;
    struct Color *_field6;
    struct Point *_field7;
    struct RepeatedPtrField<drawing::Point> _field8;
    struct CommandID *_field9;
    struct Rectangle *_field10;
    struct Point *_field11;
    struct Point *_field12;
    struct Parameters *_field13;
    unsigned int _field14;
};

struct CommandID;

struct Document {
    CDUnknownFunctionPointerType *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    unsigned int _field3[1];
    int _field4;
    struct RepeatedPtrField<versioned_document::Version> _field5;
    unsigned int _field6;
};

struct Drawing {
    CDUnknownFunctionPointerType *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    unsigned int _field3[1];
    int _field4;
    struct VectorTimestamp *_field5;
    unsigned int _field6;
    unsigned int _field7;
    struct RepeatedPtrField<drawing::Command> _field8;
    double _field9;
    struct Rectangle *_field10;
};

struct Font;

struct ICDrawingAzimuthFilter {
    CDUnknownFunctionPointerType *_field1;
    struct ICDrawingInputProvider<ICDrawingInputPoint> *_field2;
    _Bool _field3;
    double _field4;
    long long _field5;
    long long _field6;
    long long _field7;
    vector_c0e7c5b2 _field8;
    _Bool _field9;
    id _field10;
    long long _field11;
};

struct ICDrawingCommandID {
    unsigned int clock;
    NSUUID *replicaUUID;
    unsigned int subclock;
};

struct ICDrawingEndCapsFilter {
    CDUnknownFunctionPointerType *_field1;
    ICDrawingInputProvider_d48c6870 *_field2;
    _Bool _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
};

struct ICDrawingEndHookFilter {
    CDUnknownFunctionPointerType *_field1;
    struct ICDrawingInputProvider<ICDrawingInputPoint> *_field2;
    _Bool _field3;
    double _field4;
    long long _field5;
    _Bool _field6;
};

struct ICDrawingEstimatedAltitudeAndAzimuthFilter {
    CDUnknownFunctionPointerType *_field1;
    struct ICDrawingInputProvider<ICDrawingInputPoint> *_field2;
    _Bool _field3;
    double _field4;
    long long _field5;
    long long _field6;
    long long _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    long long _field12;
    unsigned int _field13;
    long long _field14;
    double _field15;
    double _field16;
    id _field17;
};

struct ICDrawingInputProvider<ICDrawingInputPoint>;

struct ICDrawingInputProvider<ICDrawingOutputPoint> {
    CDUnknownFunctionPointerType *_field1;
};

struct ICDrawingInputProviderInitial {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct ICDrawingInputSmoother {
    CDUnknownFunctionPointerType *_field1;
    ICDrawingInputProvider_d48c6870 *_field2;
    _Bool _field3;
    double _field4;
    long long _field5;
    long long _field6;
    long long _field7;
    vector_82e5b66f _field8;
    vector_82e5b66f _field9;
    double _field10;
    struct vector<ICSmoothingPoint, std::__1::allocator<ICSmoothingPoint>> _field11;
    id _field12;
};

struct ICDrawingInputToOutputFilter {
    CDUnknownFunctionPointerType *_field1;
    struct ICDrawingInputProvider<ICDrawingInputPoint> *_field2;
    _Bool _field3;
    double _field4;
    long long _field5;
    long long _field6;
    long long _field7;
    vector_c0e7c5b2 _field8;
    vector_82e5b66f _field9;
    id _field10;
};

struct ICDrawingPixelSmoothingFilter {
    CDUnknownFunctionPointerType *_field1;
    struct ICDrawingInputProvider<ICDrawingInputPoint> *_field2;
    _Bool _field3;
    double _field4;
    double _field5;
    long long _field6;
    id _field7;
};

struct ICDrawingPointReductionFilter {
    CDUnknownFunctionPointerType *_field1;
    struct ICDrawingInputProvider<ICDrawingInputPoint> *_field2;
    _Bool _field3;
    double _field4;
    long long _field5;
    long long _field6;
    long long _field7;
    vector_c0e7c5b2 _field8;
    vector_c0e7c5b2 _field9;
    long long _field10;
    long long _field11;
    long long _field12;
    double _field13;
    double _field14;
    struct vector<std::__1::pair<long, double>, std::__1::allocator<std::__1::pair<long, double>>> _field15;
    struct vector<long, std::__1::allocator<long>> _field16;
};

struct ICDrawingRulerExtremaFilter {
    CDUnknownFunctionPointerType *_field1;
    ICDrawingInputProvider_d48c6870 *_field2;
    _Bool _field3;
    double _field4;
    long long _field5;
    long long _field6;
    long long _field7;
    vector_82e5b66f _field8;
    vector_82e5b66f _field9;
    id _field10;
};

struct ICDrawingStartHookFilter {
    CDUnknownFunctionPointerType *_field1;
    struct ICDrawingInputProvider<ICDrawingInputPoint> *_field2;
    _Bool _field3;
    double _field4;
    long long _field5;
    _Bool _field6;
};

struct ICDrawingVelocityCalculationFilter {
    CDUnknownFunctionPointerType *_field1;
    struct ICDrawingInputProvider<ICDrawingInputPoint> *_field2;
    _Bool _field3;
    double _field4;
    _Bool _field5;
};

struct ICSmoothingPoint;

struct Location;

struct Media;

struct ParagraphStyle {
    CDUnknownFunctionPointerType *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    unsigned int _field3[1];
    int _field4;
    unsigned int _field5;
    int _field6;
    int _field7;
    int _field8;
    struct Todo *_field9;
    unsigned int _field10;
    unsigned int _field11;
};

struct Parameters;

struct Point {
    CDUnknownFunctionPointerType *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    unsigned int _field3[1];
    int _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10;
    float _field11;
};

struct PreviewImage {
    CDUnknownFunctionPointerType *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    unsigned int _field3[1];
    int _field4;
    float _field5;
    _Bool _field6;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field7;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field8;
    int _field9;
    int _field10;
};

struct Rectangle;

struct RepeatedPtrField<drawing::Command> {
    void **_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct RepeatedPtrField<drawing::Point> {
    void **_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct RepeatedPtrField<std::__1::basic_string<char>> {
    void **_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct RepeatedPtrField<topotext::Attachment> {
    void **_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct RepeatedPtrField<topotext::AttributeRun> {
    void **_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct RepeatedPtrField<topotext::PreviewImage> {
    void **_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct RepeatedPtrField<topotext::Selection_Range> {
    void **_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct RepeatedPtrField<topotext::Substring> {
    void **_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct RepeatedPtrField<topotext::VectorTimestamp_Clock> {
    void **_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct RepeatedPtrField<versioned_document::Version> {
    void **_field1;
    int _field2;
    int _field3;
    int _field4;
};

struct Selection {
    CDUnknownFunctionPointerType *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    unsigned int _field3[1];
    int _field4;
    struct RepeatedPtrField<std::__1::basic_string<char>> _field5;
    struct RepeatedPtrField<topotext::Selection_Range> _field6;
    int _field7;
};

struct String {
    CDUnknownFunctionPointerType *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    unsigned int _field3[1];
    int _field4;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field5;
    struct RepeatedPtrField<topotext::Substring> _field6;
    struct VectorTimestamp *_field7;
    struct RepeatedPtrField<topotext::AttributeRun> _field8;
    struct RepeatedPtrField<topotext::Attachment> _field9;
};

struct Todo {
    CDUnknownFunctionPointerType *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    unsigned int _field3[1];
    int _field4;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field5;
    _Bool _field6;
};

struct TopoID {
    NSUUID *replicaID;
    unsigned int clock;
};

struct TopoIDRange {
    struct TopoID _field1;
    unsigned int _field2;
};

struct TopoSubstring {
    struct TopoIDRange _field1;
    struct TopoID _field2;
    unsigned int _field3;
    _Bool _field4;
    vector_6c07be0f _field5;
    unsigned int _field6;
};

struct UIColor {
    Class _field1;
};

struct UIFont {
    Class _field1;
};

struct UIImage {
    Class _field1;
};

struct UITextView {
    Class _field1;
};

struct UIView {
    Class _field1;
};

struct UIWindow {
    Class _field1;
};

struct VectorTimestamp {
    CDUnknownFunctionPointerType *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    unsigned int _field3[1];
    int _field4;
    struct RepeatedPtrField<topotext::VectorTimestamp_Clock> _field5;
};

struct Version {
    CDUnknownFunctionPointerType *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    unsigned int _field3[1];
    int _field4;
    unsigned int _field5;
    unsigned int _field6;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field7;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __hash_node<TopoSubstring *, void *>;

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

struct pair<TopoID, TopoID>;

struct pair<TopoIDRange, NSAttributedString *>;

struct pair<TopoIDRange, NSDictionary *>;

struct pair<long, double>;

struct unique_ptr<std::__1::__hash_node<TopoSubstring *, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TopoSubstring *, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<TopoSubstring *, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TopoSubstring *, void *>*>>> {
        struct __hash_node<TopoSubstring *, void *> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TopoSubstring *, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<TopoSubstring *, void *>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unordered_set<TopoSubstring *, std::__1::hash<TopoSubstring *>, std::__1::equal_to<TopoSubstring *>, std::__1::allocator<TopoSubstring *>> {
    struct __hash_table<TopoSubstring *, std::__1::hash<TopoSubstring *>, std::__1::equal_to<TopoSubstring *>, std::__1::allocator<TopoSubstring *>> {
        struct unique_ptr<std::__1::__hash_node<TopoSubstring *, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TopoSubstring *, void *>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *>*>, std::__1::allocator<std::__1::__hash_node<TopoSubstring *, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<TopoSubstring *, void *>*> {
                struct __hash_node<TopoSubstring *, void *> *_field1;
            } _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::hash<TopoSubstring *>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::equal_to<TopoSubstring *>> {
            float _field1;
        } _field4;
    } _field1;
};

struct vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<ICDrawingInputPoint *, std::__1::allocator<ICDrawingInputPoint>> {
        CDStruct_183601bc *__first_;
    } __end_cap_;
};

struct vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint>> {
        CDStruct_183601bc *__first_;
    } __end_cap_;
};

struct vector<ICSmoothingPoint, std::__1::allocator<ICSmoothingPoint>> {
    struct ICSmoothingPoint *_field1;
    struct ICSmoothingPoint *_field2;
    struct __compressed_pair<ICSmoothingPoint *, std::__1::allocator<ICSmoothingPoint>> {
        struct ICSmoothingPoint *_field1;
    } _field3;
};

struct vector<TopoIDRange, std::__1::allocator<TopoIDRange>> {
    struct TopoIDRange *_field1;
    struct TopoIDRange *_field2;
    struct __compressed_pair<TopoIDRange *, std::__1::allocator<TopoIDRange>> {
        struct TopoIDRange *_field1;
    } _field3;
};

struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *>> {
    struct TopoSubstring **__begin_;
    struct TopoSubstring **__end_;
    struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *>> {
        struct TopoSubstring **__first_;
    } __end_cap_;
};

struct vector<_NSRange, std::__1::allocator<_NSRange>> {
    struct _NSRange *_field1;
    struct _NSRange *_field2;
    struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange>> {
        struct _NSRange *_field1;
    } _field3;
};

struct vector<long, std::__1::allocator<long>> {
    long long *_field1;
    long long *_field2;
    struct __compressed_pair<long *, std::__1::allocator<long>> {
        long long *_field1;
    } _field3;
};

struct vector<std::__1::pair<TopoID, TopoID>, std::__1::allocator<std::__1::pair<TopoID, TopoID>>> {
    struct pair<TopoID, TopoID> *__begin_;
    struct pair<TopoID, TopoID> *__end_;
    struct __compressed_pair<std::__1::pair<TopoID, TopoID>*, std::__1::allocator<std::__1::pair<TopoID, TopoID>>> {
        struct pair<TopoID, TopoID> *__first_;
    } __end_cap_;
};

struct vector<std::__1::pair<TopoIDRange, NSAttributedString *>, std::__1::allocator<std::__1::pair<TopoIDRange, NSAttributedString *>>> {
    struct pair<TopoIDRange, NSAttributedString *> *_field1;
    struct pair<TopoIDRange, NSAttributedString *> *_field2;
    struct __compressed_pair<std::__1::pair<TopoIDRange, NSAttributedString *>*, std::__1::allocator<std::__1::pair<TopoIDRange, NSAttributedString *>>> {
        struct pair<TopoIDRange, NSAttributedString *> *_field1;
    } _field3;
};

struct vector<std::__1::pair<TopoIDRange, NSDictionary *>, std::__1::allocator<std::__1::pair<TopoIDRange, NSDictionary *>>> {
    struct pair<TopoIDRange, NSDictionary *> *_field1;
    struct pair<TopoIDRange, NSDictionary *> *_field2;
    struct __compressed_pair<std::__1::pair<TopoIDRange, NSDictionary *>*, std::__1::allocator<std::__1::pair<TopoIDRange, NSDictionary *>>> {
        struct pair<TopoIDRange, NSDictionary *> *_field1;
    } _field3;
};

struct vector<std::__1::pair<long, double>, std::__1::allocator<std::__1::pair<long, double>>> {
    struct pair<long, double> *_field1;
    struct pair<long, double> *_field2;
    struct __compressed_pair<std::__1::pair<long, double>*, std::__1::allocator<std::__1::pair<long, double>>> {
        struct pair<long, double> *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_d2b197d1;

typedef struct {
    double baseAlpha;
    double blendAlpha;
    double targetMultiple;
} CDStruct_30364a2d;

typedef struct {
    long long _field1;
    int _field2;
    unsigned int _field3;
    long long _field4;
} CDStruct_198678f7;

typedef struct CDStruct_183601bc;

typedef struct {
    struct CGPoint _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    _Bool _field7;
    long long _field8;
    double _field9;
    _Bool _field10;
} CDStruct_f17e9403;

typedef struct {
    struct CGPoint point;
    double radius;
    double opacity;
    double azimuth;
    double edgeWidth;
    double aspectRatio;
    double timestamp;
} CDStruct_4a3d0796;

// Template types
typedef struct ICDrawingInputProvider<ICDrawingOutputPoint> {
    CDUnknownFunctionPointerType *_field1;
} ICDrawingInputProvider_d48c6870;

typedef struct unordered_set<TopoSubstring *, std::__1::hash<TopoSubstring *>, std::__1::equal_to<TopoSubstring *>, std::__1::allocator<TopoSubstring *>> {
    struct __hash_table<TopoSubstring *, std::__1::hash<TopoSubstring *>, std::__1::equal_to<TopoSubstring *>, std::__1::allocator<TopoSubstring *>> {
        struct unique_ptr<std::__1::__hash_node<TopoSubstring *, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TopoSubstring *, void *>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *>*>, std::__1::allocator<std::__1::__hash_node<TopoSubstring *, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<TopoSubstring *, void *>*> {
                struct __hash_node<TopoSubstring *, void *> *_field1;
            } _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::hash<TopoSubstring *>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::equal_to<TopoSubstring *>> {
            float _field1;
        } _field4;
    } _field1;
} unordered_set_cb0b1a0f;

typedef struct vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<ICDrawingInputPoint *, std::__1::allocator<ICDrawingInputPoint>> {
        CDStruct_183601bc *__first_;
    } __end_cap_;
} vector_c0e7c5b2;

typedef struct vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint>> {
        CDStruct_183601bc *__first_;
    } __end_cap_;
} vector_82e5b66f;

typedef struct vector<TopoIDRange, std::__1::allocator<TopoIDRange>> {
    struct TopoIDRange *_field1;
    struct TopoIDRange *_field2;
    struct __compressed_pair<TopoIDRange *, std::__1::allocator<TopoIDRange>> {
        struct TopoIDRange *_field1;
    } _field3;
} vector_4b213608;

typedef struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *>> {
    struct TopoSubstring **__begin_;
    struct TopoSubstring **__end_;
    struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *>> {
        struct TopoSubstring **__first_;
    } __end_cap_;
} vector_6c07be0f;

typedef struct vector<_NSRange, std::__1::allocator<_NSRange>> {
    struct _NSRange *_field1;
    struct _NSRange *_field2;
    struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange>> {
        struct _NSRange *_field1;
    } _field3;
} vector_7053a16b;

typedef struct vector<std::__1::pair<TopoID, TopoID>, std::__1::allocator<std::__1::pair<TopoID, TopoID>>> {
    struct pair<TopoID, TopoID> *__begin_;
    struct pair<TopoID, TopoID> *__end_;
    struct __compressed_pair<std::__1::pair<TopoID, TopoID>*, std::__1::allocator<std::__1::pair<TopoID, TopoID>>> {
        struct pair<TopoID, TopoID> *__first_;
    } __end_cap_;
} vector_8c432507;

typedef struct vector<std::__1::pair<TopoIDRange, NSAttributedString *>, std::__1::allocator<std::__1::pair<TopoIDRange, NSAttributedString *>>> {
    struct pair<TopoIDRange, NSAttributedString *> *_field1;
    struct pair<TopoIDRange, NSAttributedString *> *_field2;
    struct __compressed_pair<std::__1::pair<TopoIDRange, NSAttributedString *>*, std::__1::allocator<std::__1::pair<TopoIDRange, NSAttributedString *>>> {
        struct pair<TopoIDRange, NSAttributedString *> *_field1;
    } _field3;
} vector_252d7b3a;

typedef struct vector<std::__1::pair<TopoIDRange, NSDictionary *>, std::__1::allocator<std::__1::pair<TopoIDRange, NSDictionary *>>> {
    struct pair<TopoIDRange, NSDictionary *> *_field1;
    struct pair<TopoIDRange, NSDictionary *> *_field2;
    struct __compressed_pair<std::__1::pair<TopoIDRange, NSDictionary *>*, std::__1::allocator<std::__1::pair<TopoIDRange, NSDictionary *>>> {
        struct pair<TopoIDRange, NSDictionary *> *_field1;
    } _field3;
} vector_5b9fc061;

