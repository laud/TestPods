//
//  OLViewController.h
//  KitePrintSDK
//
//  Created by Konstadinos Karayannis on 05/01/16.
//  Copyright © 2016 Kite.ly. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OLViewController : UIViewController

@property (assign, nonatomic) BOOL isOffScreen;
- (void)tearDownLargeObjectsFromMemory;
- (void)recreateTornDownLargeObjectsToMemory;

@end
