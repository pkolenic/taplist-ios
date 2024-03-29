//
//  ratAppDelegate.h
//  Taplist
//
//  Created by Kolenic, Patrick on 10/26/13.
//  Copyright (c) 2013 Ratworkshop. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ratAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
