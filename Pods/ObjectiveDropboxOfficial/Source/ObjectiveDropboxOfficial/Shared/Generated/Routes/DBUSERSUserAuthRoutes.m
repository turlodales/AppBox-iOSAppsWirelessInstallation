///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBUSERSUserAuthRoutes.h"
#import "DBCOMMONRootInfo.h"
#import "DBRequestErrors.h"
#import "DBStoneBase.h"
#import "DBTransportClientProtocol.h"
#import "DBUSERSAccount.h"
#import "DBUSERSBasicAccount.h"
#import "DBUSERSCOMMONAccountType.h"
#import "DBUSERSFullAccount.h"
#import "DBUSERSFullTeam.h"
#import "DBUSERSGetAccountArg.h"
#import "DBUSERSGetAccountBatchArg.h"
#import "DBUSERSGetAccountBatchError.h"
#import "DBUSERSGetAccountError.h"
#import "DBUSERSName.h"
#import "DBUSERSRouteObjects.h"
#import "DBUSERSSpaceAllocation.h"
#import "DBUSERSSpaceUsage.h"
#import "DBUSERSUserFeature.h"
#import "DBUSERSUserFeatureValue.h"
#import "DBUSERSUserFeaturesGetValuesBatchArg.h"
#import "DBUSERSUserFeaturesGetValuesBatchError.h"
#import "DBUSERSUserFeaturesGetValuesBatchResult.h"

@implementation DBUSERSUserAuthRoutes

- (instancetype)init:(id<DBTransportClient>)client {
  self = [super init];
  if (self) {
    _client = client;
  }
  return self;
}

- (DBRpcTask *)featuresGetValues:(NSArray<DBUSERSUserFeature *> *)features {
  DBRoute *route = DBUSERSRouteObjects.DBUSERSFeaturesGetValues;
  DBUSERSUserFeaturesGetValuesBatchArg *arg = [[DBUSERSUserFeaturesGetValuesBatchArg alloc] initWithFeatures:features];
  return [self.client requestRpc:route arg:arg];
}

- (DBRpcTask *)getAccount:(NSString *)accountId {
  DBRoute *route = DBUSERSRouteObjects.DBUSERSGetAccount;
  DBUSERSGetAccountArg *arg = [[DBUSERSGetAccountArg alloc] initWithAccountId:accountId];
  return [self.client requestRpc:route arg:arg];
}

- (DBRpcTask *)getAccountBatch:(NSArray<NSString *> *)accountIds {
  DBRoute *route = DBUSERSRouteObjects.DBUSERSGetAccountBatch;
  DBUSERSGetAccountBatchArg *arg = [[DBUSERSGetAccountBatchArg alloc] initWithAccountIds:accountIds];
  return [self.client requestRpc:route arg:arg];
}

- (DBRpcTask *)getCurrentAccount {
  DBRoute *route = DBUSERSRouteObjects.DBUSERSGetCurrentAccount;
  return [self.client requestRpc:route arg:nil];
}

- (DBRpcTask *)getSpaceUsage {
  DBRoute *route = DBUSERSRouteObjects.DBUSERSGetSpaceUsage;
  return [self.client requestRpc:route arg:nil];
}

@end
