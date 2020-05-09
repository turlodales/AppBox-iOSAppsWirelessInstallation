///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILEPROPERTIESLookUpPropertiesError;
@class DBFILEPROPERTIESPropertiesSearchError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PropertiesSearchError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILEPROPERTIESPropertiesSearchError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILEPROPERTIESPropertiesSearchErrorTag` enum type represents the
/// possible tag states with which the `DBFILEPROPERTIESPropertiesSearchError`
/// union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBFILEPROPERTIESPropertiesSearchErrorTag){
    /// (no description).
    DBFILEPROPERTIESPropertiesSearchErrorPropertyGroupLookup,

    /// (no description).
    DBFILEPROPERTIESPropertiesSearchErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILEPROPERTIESPropertiesSearchErrorTag tag;

/// (no description). @note Ensure the `isPropertyGroupLookup` method returns
/// true before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBFILEPROPERTIESLookUpPropertiesError *propertyGroupLookup;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "property_group_lookup".
///
/// @param propertyGroupLookup (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithPropertyGroupLookup:(DBFILEPROPERTIESLookUpPropertiesError *)propertyGroupLookup;

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
/// "property_group_lookup".
///
/// @note Call this method and ensure it returns true before accessing the
/// `propertyGroupLookup` property, otherwise a runtime exception will be
/// thrown.
///
/// @return Whether the union's current tag state has value
/// "property_group_lookup".
///
- (BOOL)isPropertyGroupLookup;

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
/// The serialization class for the `DBFILEPROPERTIESPropertiesSearchError`
/// union.
///
@interface DBFILEPROPERTIESPropertiesSearchErrorSerializer : NSObject

///
/// Serializes `DBFILEPROPERTIESPropertiesSearchError` instances.
///
/// @param instance An instance of the `DBFILEPROPERTIESPropertiesSearchError`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILEPROPERTIESPropertiesSearchError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILEPROPERTIESPropertiesSearchError *)instance;

///
/// Deserializes `DBFILEPROPERTIESPropertiesSearchError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILEPROPERTIESPropertiesSearchError` API object.
///
/// @return An instantiation of the `DBFILEPROPERTIESPropertiesSearchError`
/// object.
///
+ (DBFILEPROPERTIESPropertiesSearchError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
