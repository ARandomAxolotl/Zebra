//
//  ZBSceneDelegate.m
//  Zebra
//

#import "ZBSceneDelegate.h"
#import "ZBAppDelegate.h"

API_AVAILABLE(ios(13.0))
@implementation ZBSceneDelegate

- (ZBAppDelegate *)_appDelegate {
    return (ZBAppDelegate *)[UIApplication sharedApplication].delegate;
}

- (void)scene:(UIScene *)scene willConnectToSession:(UISceneSession *)session options:(UISceneConnectionOptions *)connectionOptions {
    UIWindowScene *windowScene = (UIWindowScene *)scene;

    UIStoryboard *storyboard = [UIStoryboard storyboardWithName:@"Main" bundle:nil];
    UIViewController *rootVC = [storyboard instantiateInitialViewController];

    self.window = [[UIWindow alloc] initWithWindowScene:windowScene];
    self.window.rootViewController = rootVC;
    [self.window makeKeyAndVisible];

    [ZBAppDelegate configureWindow:self.window withLaunchURL:connectionOptions.URLContexts.anyObject.URL];
}

- (void)scene:(UIScene *)scene openURLContexts:(NSSet<UIOpenURLContext *> *)urlContexts {
    UIOpenURLContext *context = urlContexts.anyObject;
    if (!context) {
        return;
    }

    NSDictionary *options = @{
        UIApplicationOpenURLOptionsOpenInPlaceKey: @(context.options.openInPlace)
    };
    UIApplication *app = [UIApplication sharedApplication];
    [self._appDelegate application:app openURL:context.URL options:options];
}

- (void)windowScene:(UIWindowScene *)windowScene performActionForShortcutItem:(UIApplicationShortcutItem *)shortcutItem completionHandler:(void (^)(BOOL))completionHandler {
    UIApplication *app = [UIApplication sharedApplication];
    [self._appDelegate application:app performActionForShortcutItem:shortcutItem completionHandler:completionHandler];
}

@end
