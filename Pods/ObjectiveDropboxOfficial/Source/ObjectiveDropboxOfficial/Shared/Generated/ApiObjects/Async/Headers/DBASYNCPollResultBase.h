///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBASYNCPollResultBase;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PollResultBase` union.
///
/// Result returned by methods that poll for the status of an asynchronous job.
/// Unions that extend this union should add a 'complete' field with a type of
/// the information returned upon job completion. See PollEmptyResult for an
/// example.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBASYNCPollResultBase : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBASYNCPollResultBaseTag` enum type represents the possible tag states
/// with which the `DBASYNCPollResultBase` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBASYNCPollResultBaseTag){
    /// The asynchronous job is still in progress.
    DBASYNCPollResultBaseInProgress,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBASYNCPollResultBaseTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "in_progress".
///
/// Description of the "in_progress" tag state: The asynchronous job is still in
/// progress.
///
/// @return An initialized instance.
///
- (instancetype)initWithInProgress;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "in_progress".
///
/// @return Whether the union's current tag state has value "in_progress".
///
- (BOOL)isInProgress;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBASYNCPollResultBase` union.
///
@interface DBASYNCPollResultBaseSerializer : NSObject

///
/// Serializes `DBASYNCPollResultBase` instances.
///
/// @param instance An instance of the `DBASYNCPollResultBase` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBASYNCPollResultBase` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBASYNCPollResultBase *)instance;

///
/// Deserializes `DBASYNCPollResultBase` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBASYNCPollResultBase` API object.
///
/// @return An instantiation of the `DBASYNCPollResultBase` object.
///
+ (DBASYNCPollResultBase *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
