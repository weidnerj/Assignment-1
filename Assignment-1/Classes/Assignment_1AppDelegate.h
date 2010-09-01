//
//  Assignment_1AppDelegate.h
//  Assignment-1
//
//  Created by Christopher McCulloh on 9/1/10.
//  Copyright The Finish Line, Inc. 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Assignment_1ViewController;

@interface Assignment_1AppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    Assignment_1ViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet Assignment_1ViewController *viewController;

@end

