//
//  GNDBLAppDelegate.h
//  CoreDataDemo
//
//  Created by GNDBL on 11/01/13.
//  Copyright (c) 2013 GNDBL. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GNDBLViewController;

@interface GNDBLAppDelegate : UIResponder <UIApplicationDelegate>{
    
    NSPersistentStoreCoordinator *persistentStoreCoordinator;
    NSManagedObjectModel *managedObjectModel;
    NSManagedObjectContext *managedObjectContext;

}
@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, retain) UINavigationController *navigationController;

@property (strong, nonatomic) GNDBLViewController *viewController;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;
@end
