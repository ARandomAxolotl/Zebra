//
//  ZBCanisterDownloadIngests.h
//  Zebra
//
//  Created by Amy While on 10/06/2023.
//  Copyright © 2023 Zebra Team. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZBPackage.h"
#import "ZBSource.h"

NS_ASSUME_NONNULL_BEGIN

@interface ZBCanisterPackage : NSObject

- (instancetype)initWithPackage:(ZBPackage *)package;
- (NSDictionary *)dictionary;

@property (nonatomic, nullable, strong) NSString *packageID;
@property (nonatomic, nullable, strong) NSString *packageVersion;
@property (nonatomic, nullable, strong) NSString *packageAuthor;
@property (nonatomic, nullable, strong) NSString *packageMaintainer;
@property (nonatomic, nullable, strong) NSString *repositoryURL;

@end

@interface ZBCanisterIngest : NSObject

+ (void)checkCanisterPrivacyPolicyWithCompletion:(void (^)(NSURL  * _Nullable))completion;
+ (void)ingestPackages:(NSArray <ZBPackage *> *)packages;

@end

NS_ASSUME_NONNULL_END
