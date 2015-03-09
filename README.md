## Intel Edison, Ionic, AngularJS
=================================

## Table of contents

* [Gaining access Intel Edison](# Gaining access)

## Gaining access

To gain access to the Intel Edison type:

```$ screen /dev/xx.usbmodem-xxxxxx 15200 -L```

To configure wifi type:

```$ configure_edison --wifi```



## Starting Ionic

To start a new project type:

```$ ionic start yourApp tabs```

Replace "yourApp" with the name of your application and "tabs" with the template you would like to start with.

cd into your app folder and type:

```$ ionic platform add android``` or ```$ ionic platform add ios```

then ```$ ionic build android``` or ```$ ionic build ios```

To open your app in the AVD (android virtual device):

```$ iconic emulate android```

If you get the error ```Command failed with exit code 2``` you may not have the android sdk downloaded.
To download ```$ brew install android-sdk```
