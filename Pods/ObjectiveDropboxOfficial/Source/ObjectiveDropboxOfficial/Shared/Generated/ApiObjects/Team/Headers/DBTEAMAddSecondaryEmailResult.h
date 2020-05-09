///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSECONDARYEMAILSSecondaryEmail;
@class DBTEAMAddSecondaryEmailResult;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `AddSecondaryEmailResult` union.
///
/// Result of trying to add a secondary email to a user. 'success' is the only
/// value indicating that a secondary email was successfully added to a user.
/// The other values explain the type of error that occurred, and include the
/// email for which the error occured.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMAddSecondaryEmailResult : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMAddSecondaryEmailResultTag` enum type represents the possible tag
/// states with which the `DBTEAMAddSecondaryEmailResult` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMAddSecondaryEmailResultTag){
    /// Describes a secondary email that was successfully added to a user.
    DBTEAMAddSecondaryEmailResultSuccess,

    /// Secondary email is not available to be claimed by the user.
    DBTEAMAddSecondaryEmailResultUnavailable,

    /// Secondary email is already a pending email for the user.
    DBTEAMAddSecondaryEmailResultAlreadyPending,

    /// Secondary email is already a verified email for the user.
    DBTEAMAddSecondaryEmailResultAlreadyOwnedByUser,

    /// User already has the maximum number of secondary emails allowed.
    DBTEAMAddSecondaryEmailResultReachedLimit,

    /// A transient error occurred. Please try again later.
    DBTEAMAddSecondaryEmailResultTransientError,

    /// An error occurred due to conflicting updates. Please try again later.
    DBTEAMAddSecondaryEmailResultTooManyUpdates,

    /// An unknown error occurred.
    DBTEAMAddSecondaryEmailResultUnknownError,

    /// Too many emails are being sent to this email address. Please try again
    /// later.
    DBTEAMAddSecondaryEmailResultRateLimited,

    /// (no description).
    DBTEAMAddSecondaryEmailResultOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMAddSecondaryEmailResultTag tag;

/// Describes a secondary email that was successfully added to a user. @note
/// Ensure the `isSuccess` method returns true before accessing, otherwise a
/// runtime exception will be raised.
@property (nonatomic, readonly) DBSECONDARYEMAILSSecondaryEmail *success;

/// Secondary email is not available to be claimed by the user. @note Ensure the
/// `isUnavailable` method returns true before accessing, otherwise a runtime
/// exception will be raised.
@property (nonatomic, readonly, copy) NSString *unavailable;

/// Secondary email is already a pending email for the user. @note Ensure the
/// `isAlreadyPending` method returns true before accessing, otherwise a runtime
/// exception will be raised.
@property (nonatomic, readonly, copy) NSString *alreadyPending;

/// Secondary email is already a verified email for the user. @note Ensure the
/// `isAlreadyOwnedByUser` method returns true before accessing, otherwise a
/// runtime exception will be raised.
@property (nonatomic, readonly, copy) NSString *alreadyOwnedByUser;

/// User already has the maximum number of secondary emails allowed. @note
/// Ensure the `isReachedLimit` method returns true before accessing, otherwise
/// a runtime exception will be raised.
@property (nonatomic, readonly, copy) NSString *reachedLimit;

/// A transient error occurred. Please try again later. @note Ensure the
/// `isTransientError` method returns true before accessing, otherwise a runtime
/// exception will be raised.
@property (nonatomic, readonly, copy) NSString *transientError;

/// An error occurred due to conflicting updates. Please try again later. @note
/// Ensure the `isTooManyUpdates` method returns true before accessing,
/// otherwise a runtime exception will be raised.
@property (nonatomic, readonly, copy) NSString *tooManyUpdates;

/// An unknown error occurred. @note Ensure the `isUnknownError` method returns
/// true before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly, copy) NSString *unknownError;

/// Too many emails are being sent to this email address. Please try again
/// later. @note Ensure the `isRateLimited` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly, copy) NSString *rateLimited;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "success".
///
/// Description of the "success" tag state: Describes a secondary email that was
/// successfully added to a user.
///
/// @param success Describes a secondary email that was successfully added to a
/// user.
///
/// @return An initialized instance.
///
- (instancetype)initWithSuccess:(DBSECONDARYEMAILSSecondaryEmail *)success;

///
/// Initializes union class with tag state of "unavailable".
///
/// Description of the "unavailable" tag state: Secondary email is not available
/// to be claimed by the user.
///
/// @param unavailable Secondary email is not available to be claimed by the
/// user.
///
/// @return An initialized instance.
///
- (instancetype)initWithUnavailable:(NSString *)unavailable;

///
/// Initializes union class with tag state of "already_pending".
///
/// Description of the "already_pending" tag state: Secondary email is already a
/// pending email for the user.
///
/// @param alreadyPending Secondary email is already a pending email for the
/// user.
///
/// @return An initialized instance.
///
- (instancetype)initWithAlreadyPending:(NSString *)alreadyPending;

///
/// Initializes union class with tag state of "already_owned_by_user".
///
/// Description of the "already_owned_by_user" tag state: Secondary email is
/// already a verified email for the user.
///
/// @param alreadyOwnedByUser Secondary email is already a verified email for
/// the user.
///
/// @return An initialized instance.
///
- (instancetype)initWithAlreadyOwnedByUser:(NSString *)alreadyOwnedByUser;

///
/// Initializes union class with tag state of "reached_limit".
///
/// Description of the "reached_limit" tag state: User already has the maximum
/// number of secondary emails allowed.
///
/// @param reachedLimit User already has the maximum number of secondary emails
/// allowed.
///
/// @return An initialized instance.
///
- (instancetype)initWithReachedLimit:(NSString *)reachedLimit;

///
/// Initializes union class with tag state of "transient_error".
///
/// Description of the "transient_error" tag state: A transient error occurred.
/// Please try again later.
///
/// @param transientError A transient error occurred. Please try again later.
///
/// @return An initialized instance.
///
- (instancetype)initWithTransientError:(NSString *)transientError;

///
/// Initializes union class with tag state of "too_many_updates".
///
/// Description of the "too_many_updates" tag state: An error occurred due to
/// conflicting updates. Please try again later.
///
/// @param tooManyUpdates An error occurred due to conflicting updates. Please
/// try again later.
///
/// @return An initialized instance.
///
- (instancetype)initWithTooManyUpdates:(NSString *)tooManyUpdates;

///
/// Initializes union class with tag state of "unknown_error".
///
/// Description of the "unknown_error" tag state: An unknown error occurred.
///
/// @param unknownError An unknown error occurred.
///
/// @return An initialized instance.
///
- (instancetype)initWithUnknownError:(NSString *)unknownError;

///
/// Initializes union class with tag state of "rate_limited".
///
/// Description of the "rate_limited" tag state: Too many emails are being sent
/// to this email address. Please try again later.
///
/// @param rateLimited Too many emails are being sent to this email address.
/// Please try again later.
///
/// @return An initialized instance.
///
- (instancetype)initWithRateLimited:(NSString *)rateLimited;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "success".
///
/// @note Call this method and ensure it returns true before accessing the
/// `success` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "success".
///
- (BOOL)isSuccess;

///
/// Retrieves whether the union's current tag state has value "unavailable".
///
/// @note Call this method and ensure it returns true before accessing the
/// `unavailable` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "unavailable".
///
- (BOOL)isUnavailable;

///
/// Retrieves whether the union's current tag state has value "already_pending".
///
/// @note Call this method and ensure it returns true before accessing the
/// `alreadyPending` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "already_pending".
///
- (BOOL)isAlreadyPending;

///
/// Retrieves whether the union's current tag state has value
/// "already_owned_by_user".
///
/// @note Call this method and ensure it returns true before accessing the
/// `alreadyOwnedByUser` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value
/// "already_owned_by_user".
///
- (BOOL)isAlreadyOwnedByUser;

///
/// Retrieves whether the union's current tag state has value "reached_limit".
///
/// @note Call this method and ensure it returns true before accessing the
/// `reachedLimit` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "reached_limit".
///
- (BOOL)isReachedLimit;

///
/// Retrieves whether the union's current tag state has value "transient_error".
///
/// @note Call this method and ensure it returns true before accessing the
/// `transientError` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "transient_error".
///
- (BOOL)isTransientError;

///
/// Retrieves whether the union's current tag state has value
/// "too_many_updates".
///
/// @note Call this method and ensure it returns true before accessing the
/// `tooManyUpdates` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "too_many_updates".
///
- (BOOL)isTooManyUpdates;

///
/// Retrieves whether the union's current tag state has value "unknown_error".
///
/// @note Call this method and ensure it returns true before accessing the
/// `unknownError` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "unknown_error".
///
- (BOOL)isUnknownError;

///
/// Retrieves whether the union's current tag state has value "rate_limited".
///
/// @note Call this method and ensure it returns true before accessing the
/// `rateLimited` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "rate_limited".
///
- (BOOL)isRateLimited;

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
/// The serialization class for the `DBTEAMAddSecondaryEmailResult` union.
///
@interface DBTEAMAddSecondaryEmailResultSerializer : NSObject

///
/// Serializes `DBTEAMAddSecondaryEmailResult` instances.
///
/// @param instance An instance of the `DBTEAMAddSecondaryEmailResult` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMAddSecondaryEmailResult` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMAddSecondaryEmailResult *)instance;

///
/// Deserializes `DBTEAMAddSecondaryEmailResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMAddSecondaryEmailResult` API object.
///
/// @return An instantiation of the `DBTEAMAddSecondaryEmailResult` object.
///
+ (DBTEAMAddSecondaryEmailResult *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
