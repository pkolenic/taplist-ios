//
//  ratMasterViewController.h
//  Taplist
//
//  Created by Kolenic, Patrick on 10/26/13.
//  Copyright (c) 2013 Ratworkshop. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ratDetailViewController;

#import <CoreData/CoreData.h>

@interface ratMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) ratDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
