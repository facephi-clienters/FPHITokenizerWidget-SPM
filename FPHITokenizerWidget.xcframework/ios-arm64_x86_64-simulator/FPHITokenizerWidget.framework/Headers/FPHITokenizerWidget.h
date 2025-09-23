#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class FPHITWBuildKonfig, FPHITWKotlinArray<T>, FPHITWKotlinByteArray, FPHITWKotlinByteIterator, FPHITWKotlinEnum<E>, FPHITWKotlinEnumCompanion, FPHITWTokenizeError, FPHITWTokenizeResult, FPHITWTokenizeResultError, FPHITWTokenizeResultSuccess;

@protocol FPHITWKotlinComparable, FPHITWKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface FPHITWBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface FPHITWBase (FPHITWBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface FPHITWMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface FPHITWMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorFPHITWKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface FPHITWNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface FPHITWByte : FPHITWNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface FPHITWUByte : FPHITWNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface FPHITWShort : FPHITWNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface FPHITWUShort : FPHITWNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface FPHITWInt : FPHITWNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface FPHITWUInt : FPHITWNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface FPHITWLong : FPHITWNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface FPHITWULong : FPHITWNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface FPHITWFloat : FPHITWNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface FPHITWDouble : FPHITWNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface FPHITWBoolean : FPHITWNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuildKonfig")))
@interface FPHITWBuildKonfig : FPHITWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)buildKonfig __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FPHITWBuildKonfig *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *LIBRARY_NAME __attribute__((swift_name("LIBRARY_NAME")));
@property (readonly) NSString *LIBRARY_VERSION __attribute__((swift_name("LIBRARY_VERSION")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenizerController")))
@interface FPHITWTokenizerController : FPHITWBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (FPHITWTokenizeResult *)decryptBase64Data:(NSString *)data __attribute__((swift_name("decryptBase64(data:)")));
- (FPHITWTokenizeResult *)decryptBase64MapData:(NSString *)data key:(NSString *)key __attribute__((swift_name("decryptBase64Map(data:key:)")));
- (FPHITWTokenizeResult *)tokenizeByteArrayByteArray:(FPHITWKotlinByteArray *)byteArray key:(NSString *)key __attribute__((swift_name("tokenizeByteArray(byteArray:key:)")));
- (FPHITWTokenizeResult *)tokenizeImageByteArray:(FPHITWKotlinByteArray *)byteArray __attribute__((swift_name("tokenizeImage(byteArray:)")));
- (FPHITWTokenizeResult *)tokenizeOCRResultsOcrResults:(FPHITWMutableDictionary<NSString *, NSString *> *)ocrResults __attribute__((swift_name("tokenizeOCRResults(ocrResults:)")));
- (FPHITWTokenizeResult *)tokenizeStringMapDataData:(NSString *)data key:(NSString *)key __attribute__((swift_name("tokenizeStringMapData(data:key:)")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol FPHITWKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface FPHITWKotlinEnum<E> : FPHITWBase <FPHITWKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FPHITWKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenizeError")))
@interface FPHITWTokenizeError : FPHITWKotlinEnum<FPHITWTokenizeError *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) FPHITWTokenizeError *tokenizerInternalError __attribute__((swift_name("tokenizerInternalError")));
+ (FPHITWKotlinArray<FPHITWTokenizeError *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FPHITWTokenizeError *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("TokenizeResult")))
@interface FPHITWTokenizeResult : FPHITWBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenizeResult.Error")))
@interface FPHITWTokenizeResultError : FPHITWTokenizeResult
- (instancetype)initWithError:(FPHITWTokenizeError *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (FPHITWTokenizeResultError *)doCopyError:(FPHITWTokenizeError *)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FPHITWTokenizeError *error __attribute__((swift_name("error")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenizeResult.Success")))
@interface FPHITWTokenizeResultSuccess : FPHITWTokenizeResult
- (instancetype)initWithData:(NSString *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (FPHITWTokenizeResultSuccess *)doCopyData:(NSString *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenizerCoreManager")))
@interface FPHITWTokenizerCoreManager : FPHITWBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (FPHITWKotlinByteArray * _Nullable)decryptBase64Data:(NSString *)data __attribute__((swift_name("decryptBase64(data:)")));
- (NSString * _Nullable)decryptBase64MapData:(NSString *)data key:(NSString *)key __attribute__((swift_name("decryptBase64Map(data:key:)")));
- (NSString * _Nullable)tokenizeByteArrayImage:(FPHITWKotlinByteArray *)image key:(NSString *)key __attribute__((swift_name("tokenizeByteArray(image:key:)")));
- (NSString * _Nullable)tokenizeImageImage:(FPHITWKotlinByteArray *)image __attribute__((swift_name("tokenizeImage(image:)")));
- (NSString * _Nullable)tokenizeOcrResultsDocumentData:(FPHITWMutableDictionary<NSString *, NSString *> *)documentData __attribute__((swift_name("tokenizeOcrResults(documentData:)")));
- (NSString * _Nullable)tokenizeStringMapDataData:(NSString *)data key:(NSString *)key __attribute__((swift_name("tokenizeStringMapData(data:key:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface FPHITWKotlinByteArray : FPHITWBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(FPHITWByte *(^)(FPHITWInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (FPHITWKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface FPHITWKotlinEnumCompanion : FPHITWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FPHITWKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface FPHITWKotlinArray<T> : FPHITWBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(FPHITWInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<FPHITWKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol FPHITWKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface FPHITWKotlinByteIterator : FPHITWBase <FPHITWKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (FPHITWByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
