//
//  ZBAppDelegate.h
//  Zebra
//
//  Created by Wilson Styres on 11/30/18.
//  Copyright © 2018 Wilson Styres. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZBTabBarController.h"

extern NSString * const ZBUserWillTakeScreenshotNotification;
extern NSString * const ZBUserDidTakeScreenshotNotification;

extern NSString * const ZBUserStartedScreenCaptureNotification;
extern NSString * const ZBUserEndedScreenCaptureNotification;

@interface ZBAppDelegate : UIResponder <UIApplicationDelegate, UITabBarControllerDelegate>
@property (strong, nonatomic) UIWindow *window;
+ (NSString *)bundleID;
+ (NSString *)documentsDirectory;
+ (NSURL *)documentsDirectoryURL;
+ (NSString *)listsLocation;
+ (NSURL *)sourcesListURL;
+ (NSString *)sourcesListPath;
+ (NSString *)databaseLocation;
+ (NSString *)debsLocation;

+ (UIWindow *)window;
+ (void)configureWindow:(UIWindow *)window withLaunchURL:(NSURL *)launchURL;

+ (void)sendAlertFrom:(UIViewController *)vc message:(NSString *)message;
+ (void)sendErrorToTabController:(NSString *)error;
+ (ZBTabBarController *)tabBarController;

- (BOOL)continueUserActivity:(NSUserActivity *)userActivity;
@end

