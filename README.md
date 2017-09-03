# cocos-game
## Version
- cocos -> 3.14.1
- python -> 2.x
- ant -> 1.10.0

```
1.iOSアプリ

（1）XCodeのインストール

FinderのアプリケーションからAppStoreを選択
Xcodeで検索
「インストール」押下
（2）cocosのインストール
http://www.cocos2d-x.org

「DOWNLOAD」押下
ダウンロード後適当な場所に配置（今回はホームディレクトリ配下にcocos2d-x-3.14.1を配置した）
（3）setup.pyを実行
terminalで先に配置したディレクトリに移動し以下のコマンドを実行

cd ~/cocos2d-x-3.14.1
python setup.py
※途中の質問はEnter押下でスキップ(iOSアプリのみの開発であれば不要なため)

（4）環境設定ファイルの読み込み

cd
source .bash_profile
（5）cocosプロジェクト作成
cocos new コマンドを実行し、プロジェクトを作成する。

cocos new TestProject -p com.TestDomain.TestProject -l cpp -d ~/CocosProjects
・new のあとには任意のプロジェクト名を指定
・-p のあとにはパッケージ名を指定
・-l は言語名を指定。cppだとC++
・-d はプロジェクトを格納するディレクトリを指定

（6）XCodeでプロジェクトファイルをオープンして開発スタート
TestProject/proj.ios_mac/TestProject.xcodeproj
f:id:stzx:20170129223010p:plain
2.Androidアプリ

（1）Pythonのバージョン確認

python --version
※2系であること。もし違う場合は以下からインストール
https://www.python.org/downloads/

（2）jdkインストール
以下からJDKをダウンロードしインストールする
http://www.oracle.com/technetwork/java/javase/downloads/index.html

（3）Antインストール
以下からAntをダウンロードし適当なディレクトリに配置（今回はホームディレクトリ配下にapache-ant-1.10.0を配置した）
http://ant.apache.org/bindownload.cgi

（4）Homebrew
terminalを開き以下のコマンドを実行

/usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"
※Homebrewでインストールしたものは/usr/local/Cellar/以下にインストールされる。

（5）android-sdkインストール

brew install android-sdk
（7）SDK Managerを起動。Platform-toolsとBuild-toolsをインストール

android
※Android SDK Platform-tools、Android SDK Build-toolsにチェックが入っていることを確認してインストール
f:id:stzx:20170129222441p:plain

（8）android-ndkインストール

brew install android-ndk
（9）setup.pyを実行
terminalで先に配置したディレクトリに移動し以下のコマンドを実行

cd ~/cocos2d-x-3.14.1
python setup.py
※ANT_ROOTのパスをきかれるので(3)で配置したパスを入力

（10）環境設定ファイルの読み込み

cd
source .bash_profile
（11）1.iOSアプリの（5）にて作成したTestProject ディレクトリに移動。Android実機を接続し、以下のコマンドを実行。

cd ~/CocosProjects/TestProject
cocos run -p android
```
