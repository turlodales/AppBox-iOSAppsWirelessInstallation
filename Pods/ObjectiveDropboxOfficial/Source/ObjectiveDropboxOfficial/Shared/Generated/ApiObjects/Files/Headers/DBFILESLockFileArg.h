///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESLockFileArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `LockFileArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESLockFileArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Path in the user's Dropbox to a file.
@property (nonatomic, readonly, copy) NSString *path;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param path Path in the user's Dropbox to a file.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `LockFileArg` struct.
///
@interface DBFILESLockFileArgSerializer : NSObject

///
/// Serializes `DBFILESLockFileArg` instances.
///
/// @param instance An instance of the `DBFILESLockFileArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESLockFileArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESLockFileArg *)instance;

///
/// Deserializes `DBFILESLockFileArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESLockFileArg` API object.
///
/// @return An instantiation of the `DBFILESLockFileArg` object.
///
+ (DBFILESLockFileArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
