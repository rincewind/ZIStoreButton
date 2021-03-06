//
//  ZIStoreButtonDemoAppDelegate.h
//  ZIStoreButtonDemo
//
//  Created by Brandon Emrich on 7/20/10.
//  Copyright Zueos, Inc. 2010. All rights reserved.
//

/*
//	Copyright 2010 Brandon Emrich
//
//	Licensed under the Apache License, Version 2.0 (the "License");
//	you may not use this file except in compliance with the License.
//	You may obtain a copy of the License at
//
//	http://www.apache.org/licenses/LICENSE-2.0
//
//	Unless required by applicable law or agreed to in writing, software
//	distributed under the License is distributed on an "AS IS" BASIS,
//	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//	See the License for the specific language governing permissions and
//	limitations under the License.
*/

#import <UIKit/UIKit.h>

@class ZIStoreButtonDemoViewController;

@interface ZIStoreButtonDemoAppDelegate : NSObject <UIApplicationDelegate> 
{
    UIWindow *window;
    ZIStoreButtonDemoViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet ZIStoreButtonDemoViewController *viewController;

@end

