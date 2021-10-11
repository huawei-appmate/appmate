#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.4.2 (swiftlang-1205.0.28.2 clang-1205.0.19.57)
#ifndef USP_SWIFT_H
#define USP_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="USP",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSString;

SWIFT_CLASS("_TtC3USP23ConsumePurchaseResponse")
@interface ConsumePurchaseResponse : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC3USP26CreateUserRelationResponse")
@interface CreateUserRelationResponse : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC3USP26DeleteUserRelationResponse")
@interface DeleteUserRelationResponse : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC3USP18DescriptionDecoder")
@interface DescriptionDecoder : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC3USP7Product")
@interface Product : NSObject
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic, copy) NSString * _Nullable productId;
@property (nonatomic, copy) NSString * _Nullable uspAppId;
@property (nonatomic, copy) NSString * _Nullable defaultLanguage;
@property (nonatomic, copy) NSString * _Nullable purchaseType;
@property (nonatomic, copy) NSString * _Nullable status;
@property (nonatomic, copy) NSArray<NSString *> * _Nullable entitlements;
@property (nonatomic, copy) NSString * _Nullable subsPeriod;
@property (nonatomic, copy) NSString * _Nullable subGroupId;
@property (nonatomic, copy) NSString * _Nullable subGroupName;
@property (nonatomic, copy) NSString * _Nullable promotionId;
@property (nonatomic, copy) NSString * _Nullable trialPeriod;
@property (nonatomic, copy) NSString * _Nullable introductoryPeriod;
@property (nonatomic, copy) NSString * _Nullable gracePeriod;
@property (nonatomic, copy) NSString * _Nullable appleSyncStatus;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, PurchaseCode, open) {
  PurchaseCodeSuccess = 0,
  PurchaseCodeUnknown = -1,
  PurchaseCodeClientInvalid = 1,
  PurchaseCodePaymentCancelled = 2,
  PurchaseCodePaymentInvalid = 3,
  PurchaseCodePaymentNotAllowed = 4,
  PurchaseCodeStoreProductNotAvailable = 5,
  PurchaseCodeCloudServicePermissionDenied = 6,
  PurchaseCodeCloudServiceNetworkConnectionFailed = 7,
  PurchaseCodeCloudServiceRevoked = 8,
  PurchaseCodePrivacyAcknowledgementRequired = 9,
  PurchaseCodeUnauthorizedRequestData = 10,
  PurchaseCodeInvalidOfferIdentifier = 11,
  PurchaseCodeInvalidSignature = 12,
  PurchaseCodeMissingOfferParams = 13,
  PurchaseCodeInvalidOfferPrice = 14,
  PurchaseCodeOverlayCancelled = 15,
  PurchaseCodeOverlayInvalidConfiguration = 16,
  PurchaseCodeOverlayTimeout = 17,
  PurchaseCodeIneligibleForOffer = 18,
  PurchaseCodeUnsupportedPlatform = 19,
  PurchaseCodeOverlayPresentedInBackgroundScene = 20,
};
static NSString * _Nonnull const PurchaseCodeDomain = @"USP.PurchaseCode";

@class NSNumber;

SWIFT_CLASS("_TtC3USP12PurchaseInfo")
@interface PurchaseInfo : NSObject
@property (nonatomic, copy) NSString * _Nonnull userId;
@property (nonatomic, copy) NSString * _Nonnull uspAppId;
@property (nonatomic, copy) NSString * _Nonnull productId;
@property (nonatomic, copy) NSString * _Nonnull orderId;
@property (nonatomic, copy) NSString * _Nonnull purchaseTime;
@property (nonatomic) NSInteger purchaseStatus;
@property (nonatomic, copy) NSString * _Nonnull purchaseToken;
@property (nonatomic) BOOL autoRenew;
@property (nonatomic, copy) NSString * _Nonnull developerPayload;
@property (nonatomic, copy) NSString * _Nonnull platform;
@property (nonatomic) BOOL sandbox;
@property (nonatomic, copy) NSString * _Nonnull purchaseType;
@property (nonatomic) NSInteger consumed;
@property (nonatomic, copy) NSString * _Nonnull country;
@property (nonatomic, copy) NSString * _Nonnull currency;
@property (nonatomic, copy) NSString * _Nonnull price;
@property (nonatomic, copy) NSString * _Nullable subGroupId;
@property (nonatomic, copy) NSString * _Nullable cancelReason;
@property (nonatomic, copy) NSString * _Nullable expireTime;
@property (nonatomic, copy) NSString * _Nullable lastOrderId;
@property (nonatomic, copy) NSString * _Nullable inTrialPeriod;
@property (nonatomic, copy) NSString * _Nullable introductoryPrice;
@property (nonatomic, copy) NSString * _Nullable renewPrice;
@property (nonatomic, copy) NSString * _Nullable graceExpireTime;
@property (nonatomic, copy) NSString * _Nullable renewTime;
@property (nonatomic, copy) NSString * _Nullable discountRenewTime;
@property (nonatomic, copy) NSString * _Nullable nextRenewTime;
@property (nonatomic, copy) NSString * _Nullable autoResumeTime;
@property (nonatomic, copy) NSString * _Nullable linkedPurchasedToken;
@property (nonatomic, copy) NSString * _Nullable receiptData;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC3USP18PurchaseResultInfo")
@interface PurchaseResultInfo : NSObject
@property (nonatomic, readonly, strong) Product * _Nullable product;
@property (nonatomic, readonly, strong) PurchaseInfo * _Nullable purchaseInfo;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class USPError;

SWIFT_CLASS("_TtC3USP9USPClient")
@interface USPClient : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) USPClient * _Nonnull shared;)
+ (USPClient * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
+ (void)setShared:(USPClient * _Nonnull)value;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)setSandboxActive:(BOOL)isActive;
- (void)setApiKey:(NSString * _Nonnull)apiKey;
- (void)setUserId:(NSString * _Nonnull)userId;
- (NSString * _Nonnull)getUserId SWIFT_WARN_UNUSED_RESULT;
- (void)getProductsWithCompletion:(void (^ _Nonnull)(NSArray<Product *> * _Nullable, USPError * _Nullable))completion;
- (void)getProductsWithType:(NSString * _Nonnull)type completion:(void (^ _Nonnull)(NSArray<Product *> * _Nullable, USPError * _Nullable))completion;
- (void)getProductsWithIdList:(NSArray<NSString *> * _Nonnull)idList completion:(void (^ _Nonnull)(NSArray<Product *> * _Nullable, USPError * _Nullable))completion;
- (void)getAllPurchasesWithCompletion:(void (^ _Nonnull)(NSArray<PurchaseInfo *> * _Nullable, USPError * _Nullable))completion;
- (void)getCurrentPurchasesWithCompletion:(void (^ _Nonnull)(NSArray<PurchaseInfo *> * _Nullable, USPError * _Nullable))completion;
- (void)makePurchaseWith:(Product * _Nonnull)product completion:(void (^ _Nonnull)(PurchaseResultInfo * _Nullable, enum PurchaseCode))completion;
- (void)consumePurchaseWithPurchaseToken:(NSString * _Nonnull)purchaseToken completion:(void (^ _Nonnull)(ConsumePurchaseResponse * _Nullable, USPError * _Nullable))completion;
- (void)consumePurchasesWithPurchaseTokens:(NSArray<NSString *> * _Nonnull)purchaseTokens completion:(void (^ _Nonnull)(ConsumePurchaseResponse * _Nullable, USPError * _Nullable))completion;
- (void)restorePurchasesWithCompletion:(void (^ _Nonnull)(NSArray<PurchaseInfo *> * _Nullable, USPError * _Nullable))completion;
- (void)unsubscribe;
- (void)createUserIdRelationWith:(NSString * _Nonnull)masterUserId completion:(void (^ _Nonnull)(CreateUserRelationResponse * _Nullable, USPError * _Nullable))completion;
- (void)deleteMasterUserIdRelationFor:(NSString * _Nonnull)masterUserId completion:(void (^ _Nonnull)(DeleteUserRelationResponse * _Nullable, USPError * _Nullable))completion;
- (void)deleteSubUserIdRelationFor:(NSString * _Nonnull)subUserId completion:(void (^ _Nonnull)(DeleteUserRelationResponse * _Nullable, USPError * _Nullable))completion;
@end


SWIFT_CLASS("_TtC3USP8USPError")
@interface USPError : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified message;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithMessage:(NSString * _Nonnull)message OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.4.2 (swiftlang-1205.0.28.2 clang-1205.0.19.57)
#ifndef USP_SWIFT_H
#define USP_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="USP",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSString;

SWIFT_CLASS("_TtC3USP23ConsumePurchaseResponse")
@interface ConsumePurchaseResponse : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC3USP26CreateUserRelationResponse")
@interface CreateUserRelationResponse : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC3USP26DeleteUserRelationResponse")
@interface DeleteUserRelationResponse : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC3USP18DescriptionDecoder")
@interface DescriptionDecoder : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC3USP7Product")
@interface Product : NSObject
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic, copy) NSString * _Nullable productId;
@property (nonatomic, copy) NSString * _Nullable uspAppId;
@property (nonatomic, copy) NSString * _Nullable defaultLanguage;
@property (nonatomic, copy) NSString * _Nullable purchaseType;
@property (nonatomic, copy) NSString * _Nullable status;
@property (nonatomic, copy) NSArray<NSString *> * _Nullable entitlements;
@property (nonatomic, copy) NSString * _Nullable subsPeriod;
@property (nonatomic, copy) NSString * _Nullable subGroupId;
@property (nonatomic, copy) NSString * _Nullable subGroupName;
@property (nonatomic, copy) NSString * _Nullable promotionId;
@property (nonatomic, copy) NSString * _Nullable trialPeriod;
@property (nonatomic, copy) NSString * _Nullable introductoryPeriod;
@property (nonatomic, copy) NSString * _Nullable gracePeriod;
@property (nonatomic, copy) NSString * _Nullable appleSyncStatus;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, PurchaseCode, open) {
  PurchaseCodeSuccess = 0,
  PurchaseCodeUnknown = -1,
  PurchaseCodeClientInvalid = 1,
  PurchaseCodePaymentCancelled = 2,
  PurchaseCodePaymentInvalid = 3,
  PurchaseCodePaymentNotAllowed = 4,
  PurchaseCodeStoreProductNotAvailable = 5,
  PurchaseCodeCloudServicePermissionDenied = 6,
  PurchaseCodeCloudServiceNetworkConnectionFailed = 7,
  PurchaseCodeCloudServiceRevoked = 8,
  PurchaseCodePrivacyAcknowledgementRequired = 9,
  PurchaseCodeUnauthorizedRequestData = 10,
  PurchaseCodeInvalidOfferIdentifier = 11,
  PurchaseCodeInvalidSignature = 12,
  PurchaseCodeMissingOfferParams = 13,
  PurchaseCodeInvalidOfferPrice = 14,
  PurchaseCodeOverlayCancelled = 15,
  PurchaseCodeOverlayInvalidConfiguration = 16,
  PurchaseCodeOverlayTimeout = 17,
  PurchaseCodeIneligibleForOffer = 18,
  PurchaseCodeUnsupportedPlatform = 19,
  PurchaseCodeOverlayPresentedInBackgroundScene = 20,
};
static NSString * _Nonnull const PurchaseCodeDomain = @"USP.PurchaseCode";

@class NSNumber;

SWIFT_CLASS("_TtC3USP12PurchaseInfo")
@interface PurchaseInfo : NSObject
@property (nonatomic, copy) NSString * _Nonnull userId;
@property (nonatomic, copy) NSString * _Nonnull uspAppId;
@property (nonatomic, copy) NSString * _Nonnull productId;
@property (nonatomic, copy) NSString * _Nonnull orderId;
@property (nonatomic, copy) NSString * _Nonnull purchaseTime;
@property (nonatomic) NSInteger purchaseStatus;
@property (nonatomic, copy) NSString * _Nonnull purchaseToken;
@property (nonatomic) BOOL autoRenew;
@property (nonatomic, copy) NSString * _Nonnull developerPayload;
@property (nonatomic, copy) NSString * _Nonnull platform;
@property (nonatomic) BOOL sandbox;
@property (nonatomic, copy) NSString * _Nonnull purchaseType;
@property (nonatomic) NSInteger consumed;
@property (nonatomic, copy) NSString * _Nonnull country;
@property (nonatomic, copy) NSString * _Nonnull currency;
@property (nonatomic, copy) NSString * _Nonnull price;
@property (nonatomic, copy) NSString * _Nullable subGroupId;
@property (nonatomic, copy) NSString * _Nullable cancelReason;
@property (nonatomic, copy) NSString * _Nullable expireTime;
@property (nonatomic, copy) NSString * _Nullable lastOrderId;
@property (nonatomic, copy) NSString * _Nullable inTrialPeriod;
@property (nonatomic, copy) NSString * _Nullable introductoryPrice;
@property (nonatomic, copy) NSString * _Nullable renewPrice;
@property (nonatomic, copy) NSString * _Nullable graceExpireTime;
@property (nonatomic, copy) NSString * _Nullable renewTime;
@property (nonatomic, copy) NSString * _Nullable discountRenewTime;
@property (nonatomic, copy) NSString * _Nullable nextRenewTime;
@property (nonatomic, copy) NSString * _Nullable autoResumeTime;
@property (nonatomic, copy) NSString * _Nullable linkedPurchasedToken;
@property (nonatomic, copy) NSString * _Nullable receiptData;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC3USP18PurchaseResultInfo")
@interface PurchaseResultInfo : NSObject
@property (nonatomic, readonly, strong) Product * _Nullable product;
@property (nonatomic, readonly, strong) PurchaseInfo * _Nullable purchaseInfo;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class USPError;

SWIFT_CLASS("_TtC3USP9USPClient")
@interface USPClient : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) USPClient * _Nonnull shared;)
+ (USPClient * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
+ (void)setShared:(USPClient * _Nonnull)value;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)setSandboxActive:(BOOL)isActive;
- (void)setApiKey:(NSString * _Nonnull)apiKey;
- (void)setUserId:(NSString * _Nonnull)userId;
- (NSString * _Nonnull)getUserId SWIFT_WARN_UNUSED_RESULT;
- (void)getProductsWithCompletion:(void (^ _Nonnull)(NSArray<Product *> * _Nullable, USPError * _Nullable))completion;
- (void)getProductsWithType:(NSString * _Nonnull)type completion:(void (^ _Nonnull)(NSArray<Product *> * _Nullable, USPError * _Nullable))completion;
- (void)getProductsWithIdList:(NSArray<NSString *> * _Nonnull)idList completion:(void (^ _Nonnull)(NSArray<Product *> * _Nullable, USPError * _Nullable))completion;
- (void)getAllPurchasesWithCompletion:(void (^ _Nonnull)(NSArray<PurchaseInfo *> * _Nullable, USPError * _Nullable))completion;
- (void)getCurrentPurchasesWithCompletion:(void (^ _Nonnull)(NSArray<PurchaseInfo *> * _Nullable, USPError * _Nullable))completion;
- (void)makePurchaseWith:(Product * _Nonnull)product completion:(void (^ _Nonnull)(PurchaseResultInfo * _Nullable, enum PurchaseCode))completion;
- (void)consumePurchaseWithPurchaseToken:(NSString * _Nonnull)purchaseToken completion:(void (^ _Nonnull)(ConsumePurchaseResponse * _Nullable, USPError * _Nullable))completion;
- (void)consumePurchasesWithPurchaseTokens:(NSArray<NSString *> * _Nonnull)purchaseTokens completion:(void (^ _Nonnull)(ConsumePurchaseResponse * _Nullable, USPError * _Nullable))completion;
- (void)restorePurchasesWithCompletion:(void (^ _Nonnull)(NSArray<PurchaseInfo *> * _Nullable, USPError * _Nullable))completion;
- (void)unsubscribe;
- (void)createUserIdRelationWith:(NSString * _Nonnull)masterUserId completion:(void (^ _Nonnull)(CreateUserRelationResponse * _Nullable, USPError * _Nullable))completion;
- (void)deleteMasterUserIdRelationFor:(NSString * _Nonnull)masterUserId completion:(void (^ _Nonnull)(DeleteUserRelationResponse * _Nullable, USPError * _Nullable))completion;
- (void)deleteSubUserIdRelationFor:(NSString * _Nonnull)subUserId completion:(void (^ _Nonnull)(DeleteUserRelationResponse * _Nullable, USPError * _Nullable))completion;
@end


SWIFT_CLASS("_TtC3USP8USPError")
@interface USPError : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified message;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithMessage:(NSString * _Nonnull)message OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#endif
