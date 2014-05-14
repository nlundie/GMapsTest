//
//  PastMapViewController.h
//  GMapsTest
//
//  Created by Nate Lundie on 5/14/14.
//  Copyright (c) 2014 Chris Sutton. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <GoogleMaps/GoogleMaps.h>

@interface PastMapViewController : UIViewController <CLLocationManagerDelegate>
@property (strong, nonatomic) GMSMutablePath *path;


@end
