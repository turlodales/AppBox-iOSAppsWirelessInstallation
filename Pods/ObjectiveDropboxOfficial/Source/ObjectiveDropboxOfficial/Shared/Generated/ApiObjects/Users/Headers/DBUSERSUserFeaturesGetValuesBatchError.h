///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBUSERSUserFeaturesGetValuesBatchError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `UserFeaturesGetValuesBatchError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBUSERSUserFeaturesGetValuesBatchError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBUSERSUserFeaturesGetValuesBatchErrorTag` enum type represents the
/// possible tag states with which the `DBUSERSUserFeaturesGetValuesBatchError`
/// union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBUSERSUserFeaturesGetValuesBatchErrorTag){
    /// At least one UserFeature must be included in the
    /// UserFeaturesGetValuesBatchArg.features list.
    DBUSERSUserFeaturesGetValuesBatchErrorEmptyFeaturesList,

    /// (no description).
    DBUSERSUserFeaturesGetValuesBatchErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBUSERSUserFeaturesGetValuesBatchErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "empty_features_list".
///
/// Description of the "empty_features_list" tag state: At least one UserFeature
/// must be included in the UserFeaturesGetValuesBatchArg.features list.
///
/// @return An initialized instance.
///
- (instancetype)initWithEmptyFeaturesList;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value
/// "empty_features_list".
///
/// @return Whether the union's current tag state has value
/// "empty_features_list".
///
- (BOOL)isEmptyFeaturesList;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBUSERSUserFeaturesGetValuesBatchError`
/// union.
///
@interface DBUSERSUserFeaturesGetValuesBatchErrorSerializer : NSObject

///
/// Serializes `DBUSERSUserFeaturesGetValuesBatchError` instances.
///
/// @param instance An instance of the `DBUSERSUserFeaturesGetValuesBatchError`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBUSERSUserFeaturesGetValuesBatchError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBUSERSUserFeaturesGetValuesBatchError *)instance;

///
/// Deserializes `DBUSERSUserFeaturesGetValuesBatchError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBUSERSUserFeaturesGetValuesBatchError` API object.
///
/// @return An instantiation of the `DBUSERSUserFeaturesGetValuesBatchError`
/// object.
///
+ (DBUSERSUserFeaturesGetValuesBatchError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
