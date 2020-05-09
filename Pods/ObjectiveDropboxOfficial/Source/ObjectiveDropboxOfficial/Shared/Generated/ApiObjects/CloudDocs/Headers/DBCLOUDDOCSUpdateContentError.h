///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBCLOUDDOCSUpdateContentError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `UpdateContentError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBCLOUDDOCSUpdateContentError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBCLOUDDOCSUpdateContentErrorTag` enum type represents the possible tag
/// states with which the `DBCLOUDDOCSUpdateContentError` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBCLOUDDOCSUpdateContentErrorTag){
    /// The Cloud Doc ID is invalid.
    DBCLOUDDOCSUpdateContentErrorInvalidDocId,

    /// A Cloud Doc could not be found for the given ID.
    DBCLOUDDOCSUpdateContentErrorNotFound,

    /// Permission denied for the Cloud Doc with the given ID.
    DBCLOUDDOCSUpdateContentErrorPermissionDenied,

    /// (no description).
    DBCLOUDDOCSUpdateContentErrorOther,

    /// Upload payload exceeds maximum allowed size of 150MB.
    DBCLOUDDOCSUpdateContentErrorUploadSizeTooLarge,

    /// A lock on the document identified by path_or_id is held by another
    /// editor.
    DBCLOUDDOCSUpdateContentErrorConflict,

    /// A lock is not held on the document identified by path_or_id. Acquire
    /// lock before uploading content for the document.
    DBCLOUDDOCSUpdateContentErrorUnlocked,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBCLOUDDOCSUpdateContentErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "invalid_doc_id".
///
/// Description of the "invalid_doc_id" tag state: The Cloud Doc ID is invalid.
///
/// @return An initialized instance.
///
- (instancetype)initWithInvalidDocId;

///
/// Initializes union class with tag state of "not_found".
///
/// Description of the "not_found" tag state: A Cloud Doc could not be found for
/// the given ID.
///
/// @return An initialized instance.
///
- (instancetype)initWithNotFound;

///
/// Initializes union class with tag state of "permission_denied".
///
/// Description of the "permission_denied" tag state: Permission denied for the
/// Cloud Doc with the given ID.
///
/// @return An initialized instance.
///
- (instancetype)initWithPermissionDenied;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

///
/// Initializes union class with tag state of "upload_size_too_large".
///
/// Description of the "upload_size_too_large" tag state: Upload payload exceeds
/// maximum allowed size of 150MB.
///
/// @return An initialized instance.
///
- (instancetype)initWithUploadSizeTooLarge;

///
/// Initializes union class with tag state of "conflict".
///
/// Description of the "conflict" tag state: A lock on the document identified
/// by path_or_id is held by another editor.
///
/// @return An initialized instance.
///
- (instancetype)initWithConflict;

///
/// Initializes union class with tag state of "unlocked".
///
/// Description of the "unlocked" tag state: A lock is not held on the document
/// identified by path_or_id. Acquire lock before uploading content for the
/// document.
///
/// @return An initialized instance.
///
- (instancetype)initWithUnlocked;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "invalid_doc_id".
///
/// @return Whether the union's current tag state has value "invalid_doc_id".
///
- (BOOL)isInvalidDocId;

///
/// Retrieves whether the union's current tag state has value "not_found".
///
/// @return Whether the union's current tag state has value "not_found".
///
- (BOOL)isNotFound;

///
/// Retrieves whether the union's current tag state has value
/// "permission_denied".
///
/// @return Whether the union's current tag state has value "permission_denied".
///
- (BOOL)isPermissionDenied;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves whether the union's current tag state has value
/// "upload_size_too_large".
///
/// @return Whether the union's current tag state has value
/// "upload_size_too_large".
///
- (BOOL)isUploadSizeTooLarge;

///
/// Retrieves whether the union's current tag state has value "conflict".
///
/// @return Whether the union's current tag state has value "conflict".
///
- (BOOL)isConflict;

///
/// Retrieves whether the union's current tag state has value "unlocked".
///
/// @return Whether the union's current tag state has value "unlocked".
///
- (BOOL)isUnlocked;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBCLOUDDOCSUpdateContentError` union.
///
@interface DBCLOUDDOCSUpdateContentErrorSerializer : NSObject

///
/// Serializes `DBCLOUDDOCSUpdateContentError` instances.
///
/// @param instance An instance of the `DBCLOUDDOCSUpdateContentError` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBCLOUDDOCSUpdateContentError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBCLOUDDOCSUpdateContentError *)instance;

///
/// Deserializes `DBCLOUDDOCSUpdateContentError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBCLOUDDOCSUpdateContentError` API object.
///
/// @return An instantiation of the `DBCLOUDDOCSUpdateContentError` object.
///
+ (DBCLOUDDOCSUpdateContentError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
