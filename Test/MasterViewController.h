//
//  MasterViewController.h
//  Test
//
//  Created by Charles Wade on 6/26/13.
//  Copyright (c) 2013 Charles Wade. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
