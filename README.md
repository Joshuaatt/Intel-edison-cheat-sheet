## Intel Edison, Ionic, AngularJS
=================================

## Table of contents

* [Gaining access Intel Edison](#gaining-access)
* [Starting Ionic](#starting-ionic)

## Gaining access

To gain access to the Intel Edison run:

For Mac:
```$ screen /dev/xx.usbmodem-xxxxxx 115200 -L```

For Linux:
```$ screen /dev/ttyusb0 115200 -L```

To configure wifi run:

```$ configure_edison --wifi```



## Starting Ionic

To start a new project run:

```$ ionic start yourApp tabs```

Replace "yourApp" with the name of your application and "tabs" with the template you would like to start with.

cd into your app folder and run:

```$ ionic platform add android``` or ```$ ionic platform add ios```

then ```$ ionic build android``` or ```$ ionic build ios```

To open your app in the AVD (android virtual device):

```$ iconic emulate android```

If you get the error ```Command failed with exit code 2``` you may not have the android sdk downloaded.
To download ```$ brew install android-sdk```

## Viewing your Ionic app in the browser

Run ```ionic serve -l``` in your root directory
