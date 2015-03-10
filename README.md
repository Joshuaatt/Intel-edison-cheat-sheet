## Intel Edison, Ionic, AngularJS
=================================

## Table of contents

* [Gaining access Intel Edison](#gaining-access)
* [Starting Ionic](#starting-ionic)


## Intel Edison

#### Gaining access

To gain access to the Intel Edison run:

For Mac:
```$ screen /dev/xx.usbmodem-xxxxxx 115200 -L```

For Linux:
```$ screen /dev/ttyusb0 115200 -L```

To configure wifi run:

```$ configure_edison --wifi```


## Ionic

#### Starting Ionic

To start a new project run:

```$ ionic start yourApp tabs```

Replace "yourApp" with the name of your application and "tabs" with the template you would like to start with.

To see your app in the browser run:

```$ ionic serve```

After your app is built cd into your app folder and run:

```$ ionic platform add android``` or ```$ ionic platform add ios``` or ```$ ionic platform add android ios```

then ```$ ionic build android``` or ```$ ionic build ios``` or ```$ ionic build android ios```

To open your app in the AVD (android virtual device):

```$ iconic emulate android```

If you get the error ```Command failed with exit code 2``` you may not have the android sdk downloaded.
To download ```$ brew install android-sdk```

#### Viewing your Ionic app in the browser

Run ```ionic serve -l``` in your root directory

#### Running your app on an android device

Enable developer mode, plug the device into your computer, and run

```$ ionic run android```
Your app will be loaded onto your phone and then run.
