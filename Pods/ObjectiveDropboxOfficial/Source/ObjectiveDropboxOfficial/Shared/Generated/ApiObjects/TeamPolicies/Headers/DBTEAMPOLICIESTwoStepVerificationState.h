///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMPOLICIESTwoStepVerificationState;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TwoStepVerificationState` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMPOLICIESTwoStepVerificationState : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMPOLICIESTwoStepVerificationStateTag` enum type represents the
/// possible tag states with which the `DBTEAMPOLICIESTwoStepVerificationState`
/// union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMPOLICIESTwoStepVerificationStateTag){
    /// Enabled require two factor authorization.
    DBTEAMPOLICIESTwoStepVerificationStateRequired,

    /// Optional require two factor authorization.
    DBTEAMPOLICIESTwoStepVerificationStateOptional,

    /// Disabled require two factor authorization.
    DBTEAMPOLICIESTwoStepVerificationStateDisabled,

    /// (no description).
    DBTEAMPOLICIESTwoStepVerificationStateOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMPOLICIESTwoStepVerificationStateTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "required".
///
/// Description of the "required" tag state: Enabled require two factor
/// authorization.
///
/// @return An initialized instance.
///
- (instancetype)initWithRequired;

///
/// Initializes union class with tag state of "optional".
///
/// Description of the "optional" tag state: Optional require two factor
/// authorization.
///
/// @return An initialized instance.
///
- (instancetype)initWithOptional;

///
/// Initializes union class with tag state of "disabled".
///
/// Description of the "disabled" tag state: Disabled require two factor
/// authorization.
///
/// @return An initialized instance.
///
- (instancetype)initWithDisabled;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "required".
///
/// @return Whether the union's current tag state has value "required".
///
- (BOOL)isRequired;

///
/// Retrieves whether the union's current tag state has value "optional".
///
/// @return Whether the union's current tag state has value "optional".
///
- (BOOL)isOptional;

///
/// Retrieves whether the union's current tag state has value "disabled".
///
/// @return Whether the union's current tag state has value "disabled".
///
- (BOOL)isDisabled;

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
/// The serialization class for the `DBTEAMPOLICIESTwoStepVerificationState`
/// union.
///
@interface DBTEAMPOLICIESTwoStepVerificationStateSerializer : NSObject

///
/// Serializes `DBTEAMPOLICIESTwoStepVerificationState` instances.
///
/// @param instance An instance of the `DBTEAMPOLICIESTwoStepVerificationState`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMPOLICIESTwoStepVerificationState` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMPOLICIESTwoStepVerificationState *)instance;

///
/// Deserializes `DBTEAMPOLICIESTwoStepVerificationState` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMPOLICIESTwoStepVerificationState` API object.
///
/// @return An instantiation of the `DBTEAMPOLICIESTwoStepVerificationState`
/// object.
///
+ (DBTEAMPOLICIESTwoStepVerificationState *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
