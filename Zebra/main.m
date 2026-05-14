//
//  main.m
//  Zebra
//
//  Created by Wilson Styres on 11/30/18.
//  Copyright © 2018 Wilson Styres. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZBAppDelegate.h"
#import "ZBUtils.h"

int main(int argc, char * argv[]) {
    @autoreleasepool {
        [ZBUtils removeMalware];
        return UIApplicationMain(argc, argv, nil, NSStringFromClass([ZBAppDelegate class]));
    }
}
