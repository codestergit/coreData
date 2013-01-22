//
//  GNDBLViewController.h
//  CoreDataDemo
//
//  Created by GNDBL on 11/01/13.
//  Copyright (c) 2013 GNDBL. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface GNDBLViewController : UITableViewController<CLLocationManagerDelegate>{
NSMutableArray *eventsArray;
NSManagedObjectContext *managedObjectContext;

CLLocationManager *locationManager;
UIBarButtonItem *addButton;
}

@property (nonatomic, retain) NSMutableArray *eventsArray;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;

@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic, retain) UIBarButtonItem *addButton;
- (void)addEvent;

@end

