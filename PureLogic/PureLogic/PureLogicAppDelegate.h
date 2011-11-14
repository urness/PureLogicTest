//
//  PureLogicAppDelegate.h
//  PureLogic
//
//  Created by Timothy Urness on 11/14/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PureLogicViewController;

@interface PureLogicAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet PureLogicViewController *viewController;

@end
