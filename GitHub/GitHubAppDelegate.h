//
//  GitHubAppDelegate.h
//  GitHub
//
//  Created by Paul Newell on 9/22/13.
//  Copyright (c) 2013 RVC Student. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GitHubViewController;

@interface GitHubAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) GitHubViewController *viewController;

@end
